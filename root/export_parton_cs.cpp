#include "TFile.h"
#include "TNtuple.h"
#include "TChain.h"
#include "TROOT.h"
#include "stdio.h"

#include "color_util.h"
#include "tclap/CmdLine.h"
#include "root-utils.h"

using namespace std;
using namespace TCLAP;

static string output_file_name;

void initialize(int argc, char **argv) {
    initialize_variables_mapping();

    CmdLine cmd("this is a message", ' ', "0.99");
    root_utils_insert_default_args(cmd);

    TCLAP::ValueArg<string> arg_output("t", "target-name", "Output file name", false, "parton_cross_section.dat", "string", cmd);
    cmd.parse(argc, argv);
    root_utils_initialize_from_cmd();

    output_file_name = output_dir + arg_output.getValue();
}

int main(int argc, char **argv) {
    initialize(argc, argv);

    gROOT->ProcessLine("gErrorIgnoreLevel=kError");

    // data fields
    TChain data_chain("data");
    TChain stats_chain("stats");
    data_chain.Add(input_file.c_str());
    stats_chain.Add(input_file.c_str());

    Float_t n_events, n_iterations;
    Float_t ecm;
    stats_chain.SetBranchAddress("n_passed", &n_events);
    stats_chain.SetBranchAddress("n_iterations", &n_iterations);
    stats_chain.SetBranchAddress("ecm", &ecm);


    Float_t p1_e, p1_px, p1_py, p1_pz,
            p2_e, p2_px, p2_py, p2_pz,
            k3_e = 0, k3_px = 0, k3_py = 0, k3_pz = 0;
    data_chain.SetBranchAddress("p1_e", &p1_e);
    data_chain.SetBranchAddress("p1_px", &p1_px);
    data_chain.SetBranchAddress("p1_py", &p1_py);
    data_chain.SetBranchAddress("p1_pz", &p1_pz);
    data_chain.SetBranchAddress("p2_e", &p2_e);
    data_chain.SetBranchAddress("p2_px", &p2_px);
    data_chain.SetBranchAddress("p2_py", &p2_py);
    data_chain.SetBranchAddress("p2_pz", &p2_pz);
    if (data_chain.GetBranch("k3_e")) {
        data_chain.SetBranchAddress("k3_e", &k3_e);
        data_chain.SetBranchAddress("k3_px", &k3_px);
        data_chain.SetBranchAddress("k3_py", &k3_py);
        data_chain.SetBranchAddress("k3_pz", &k3_pz);
    }
    Float_t matr2, wt, alpha5;
    data_chain.SetBranchAddress("matr2", &matr2);
    data_chain.SetBranchAddress("wt", &wt);
    data_chain.SetBranchAddress("alpha5", &alpha5);

    map<Float_t, Float_t> e_dep;
    map<Float_t, Float_t> e_dep_err;
    vector<Float_t> energies;
    long pr_entry = 0, d_entry = 0;
    for (int i = 0; i < stats_chain.GetEntries(); ++i) {
        stats_chain.GetEntry(i);
        Float_t sigma_total = 0.0;
        Float_t sigma_total_err = 0.0;
        long filtered = 0;
        for (d_entry = pr_entry; d_entry < (pr_entry + n_events); ++d_entry) {
            data_chain.GetEntry(d_entry);
            set_v4(p1, p1_px, p1_py, p1_pz, p1_e);
            set_v4(p2, p2_px, p2_py, p2_pz, p2_e);
            set_v4(k3, k3_px, k3_py, k3_pz, k3_e);

            bool passed = true;
            for (int i_cut = 0; i_cut < cuts.size(); ++i_cut) {
                var_descriptor cut = cuts[i_cut];
                double val = cut.calculator();
                if (val > cut.max || val < cut.min) {
                    ++filtered;
                    passed = false;
                    break;
                }
            }
            if (!passed)
                continue;

            Float_t sigma = wt * alpha5 * matr2;
            sigma_total += sigma;
            sigma_total_err += sigma * sigma;
        }
        sigma_total /= n_iterations;
        sigma_total_err /= n_iterations;
        sigma_total_err = sqrt((sigma_total_err - pow(sigma_total, 2)) / n_iterations);

        energies.push_back(ecm);
        e_dep[ecm] = sigma_total;
        e_dep_err[ecm] = sigma_total_err;
        pr_entry = d_entry;

        cout << BOLDGREEN << "[export] " << LIGHTCYAN << "E = " << ecm <<
        " (GeV) SIGMA = " << 0.384 * 1e6 * sigma_total << " +- " << 0.384 * 1e6 * sigma_total_err << " (nb)  " <<
        BOLDWHITE <<
        " (" << n_events << " events, " << n_iterations << " iterations, " << filtered << " filtered now)"
        << RESET <<
        endl;
    }

    FILE *out = fopen(output_file_name.c_str(), "w");
    sort(energies.begin(), energies.end());
    for (int i = 0; i < energies.size(); ++i) {
        Float_t ecm = energies[i];
        fprintf(out, "%f    %f    %f\n", ecm, e_dep[ecm], e_dep_err[ecm]);
    }

    return 0;
}