#include <iostream>
#include <iomanip>
#include <fstream>

#include "root-utils.h"

#include "TFile.h"
#include "TNtuple.h"
#include "TROOT.h"
#include "LHAPDF/LHAPDF.h"

#include "tclap/CmdLine.h"

using namespace TCLAP;
using namespace std;
using namespace LHAPDF;

static long n_events;
static string pdf_name;
static string scale_string;
static string output_file_name;
static __calculator__ scale;

void parse_args(int argc, char **argv) {
    try {
        CmdLine cmd("this is a message", ' ', "0.99");
        root_utils_insert_default_args(cmd);

        ValueArg<string> arg_output("t", "target-name", "name of the output file", true, "", "string", cmd);
        ValueArg<string> arg_pdfset("p", "pdf", "PDF data set", false, "cteq6l", "string", cmd);
        ValueArg<string> arg_scale("q", "scale", "scale switcher", false, "fixed", "string", cmd);
        ValueArg<double> arg_n_events("n", "nev", "number of events for rescale (-1 for complete data set)", false, -1, "float", cmd);

        cmd.parse(argc, argv);
        root_utils_initialize_from_cmd();

        n_events = (int) arg_n_events.getValue();
        pdf_name = arg_pdfset.getValue();
        scale_string = arg_scale.getValue();
        output_file_name = arg_output.getValue();
        scale_string = string("scale_") + scale_string;
        scale = get_var_calculator(scale_string);
    } catch (ArgException &e) // catch any exceptions
    {
        std::cout << "error: " << e.error() << " for arg " << e.argId() << endl;
        ::exit(1);
    }
}

Float_t copy_stats() {
    cout << BOLDGREEN << "[rescale]" << BOLDWHITE << " Copying stats chain ...";

    TChain ch_stats("stats");
    ch_stats.Add(input_file.c_str());

    const int n_stats_fields = 13;
    string stats_vars[n_stats_fields];
    stats_vars[0] = "n_passed";
    stats_vars[1] = "n_iterations";
    stats_vars[2] = "random_seed";
    stats_vars[3] = "ecm";
    stats_vars[4] = "sigma";
    stats_vars[5] = "sigma_err";
    stats_vars[6] = "y1_min";
    stats_vars[7] = "y1_max";
    stats_vars[8] = "y2_min";
    stats_vars[9] = "y2_max";
    stats_vars[10] = "gluon_pT";
    stats_vars[11] = "smax_factor";
    stats_vars[12] = "psi_pT";
    Float_t stats_values[n_stats_fields];
    for (int i = 0; i < n_stats_fields; ++i)
        if (ch_stats.GetBranch(stats_vars[i].c_str()))
            ch_stats.SetBranchAddress(stats_vars[i].c_str(), stats_values + i);

    string out_stats_vars = "";
    for (int i = 0; ; ++i) {
        out_stats_vars += stats_vars[i];
        if (i == n_stats_fields - 1)
            break;
        out_stats_vars += ":";
    };

    TNtuple stats_tuple("stats", "stats", out_stats_vars.c_str());

    Float_t ecm = -1;
    for (int j = 0; j < ch_stats.GetEntries(); ++j) {
        ch_stats.GetEntry(j);
        if (ecm == -1)
            ecm = stats_values[3];
        else if (ecm != stats_values[3])
            throw runtime_error("Merged data with different ecm");
        stats_tuple.Fill(stats_values);
    }

    stats_tuple.Write();

    cout << "done" << RESET << endl;
    return ecm;
}

void copy_data(Float_t ecm) {
    cout << BOLDGREEN << "[rescale]" << BOLDWHITE << " Rescaling data chain ...";

    TChain ch_data("data");
    ch_data.Add(input_file.c_str());

    const int n_data_fields = 29;
    string data_vars[n_data_fields];
    data_vars[0] = "matr2";
    data_vars[1] = "wt";
    data_vars[2] = "scale2";
    data_vars[3] = "alpha5";
    data_vars[4] = "pdf1";
    data_vars[5] = "pdf2";
    data_vars[6] = "hat_s";
    data_vars[7] = "e_pair";
    data_vars[8] = "y_pair";
    data_vars[9] = "pT_pair";
    data_vars[10] = "dphi";
    // p1
    data_vars[11] = "k3_e";
    data_vars[12] = "k3_px";
    data_vars[13] = "k3_py";
    data_vars[14] = "k3_pz";
    data_vars[15] = "k3_pT";
    data_vars[16] = "k3_y";
    // p2
    data_vars[17] = "p2_e";
    data_vars[18] = "p2_px";
    data_vars[19] = "p2_py";
    data_vars[20] = "p2_pz";
    data_vars[21] = "p2_pT";
    data_vars[22] = "p2_y";
    // k3
    data_vars[23] = "k3_e";
    data_vars[24] = "k3_px";
    data_vars[25] = "k3_py";
    data_vars[26] = "k3_pz";
    data_vars[27] = "k3_pT";
    data_vars[28] = "k3_y";

    Float_t data_values[n_data_fields];
    for (int i = 0; i < n_data_fields; ++i)
        if (ch_data.GetBranch(data_vars[i].c_str()))
            ch_data.SetBranchAddress(data_vars[i].c_str(), data_values + i);

    string out_data_vars = "";
    for (int i = 0; i < n_data_fields; ++i) {
        out_data_vars += data_vars[i];
        if (i < n_data_fields - 1)
            out_data_vars += ":";
    };

    int alpha_power;
    if (ch_data.GetBranch("k3_x"))
        alpha_power = 5;
    else
        alpha_power = 4;


    TNtuple out_data_tuple("data", "data", out_data_vars.c_str());

    Float_t out_data_values[n_data_fields];
    PDF *pdf = mkPDF(pdf_name, 0);

    if (n_events < 0)
        n_events = ch_data.GetEntries();


    Float_t _x1_, _x2_;
    bool has_x1x2 = false;
    if (ch_data.GetBranch("x1")) {
        ch_data.SetBranchAddress("x1", &_x1_);
        ch_data.SetBranchAddress("x2", &_x2_);
        has_x1x2 = true;
    }
    for (int i = 0; i < n_events; ++i) {
        ch_data.GetEntry(i);
        for (int iF = 0; iF < n_data_fields; ++iF)
            out_data_values[iF] = data_values[iF];

        set_v4(p1, data_values[12], data_values[13], data_values[14], data_values[11]);
        set_v4(p2, data_values[18], data_values[19], data_values[20], data_values[17]);
        set_v4(k3, data_values[24], data_values[25], data_values[26], data_values[23]);

        dbl_type x1, x2;
        if (!has_x1x2) {
            dbl_type p_cm[4];
            sum(p1, p2, k3, p_cm);
            dbl_type y = -rapidity(p_cm);
            dbl_type hat_s = data_values[6];
            x1 = sqrt(hat_s / ecm / ecm) * exp(y);
            x2 = sqrt(hat_s / ecm / ecm) * exp(-y);
        } else {
            x1 = _x1_;
            x2 = _x2_;
        }

        if (x1 != x1 || x2 != x2 || x1 < 0 || x1 > 1 || x2 < 0 || x2 > 1) {
            cout << BOLDRED << "[rescale] Error: unphysical x1=" << x1 << ", x2=" << x2 << " at iEv=" << i << RESET <<
            endl;
            continue;
        };

        dbl_type Q2 = scale();
        out_data_values[2] = Q2;

        double xpdf1 = pdf->xfxQ2(21, x1, Q2);
        double xpdf2 = pdf->xfxQ2(21, x2, Q2);

        out_data_values[4] = xpdf1;
        out_data_values[5] = xpdf2;
        if (data_values[4] == 0 || data_values[5] == 0)
            out_data_values[1] = 0;
        else
            out_data_values[1] =
                    data_values[1] * (out_data_values[4] / data_values[4]) * (out_data_values[5] / data_values[5]);

        double alpha5 = pow(pdf->alphasQ2(Q2), alpha_power);
        out_data_values[3] = alpha5;
        out_data_tuple.Fill(out_data_values);

    };
    out_data_tuple.Write();
    cout << "done" << RESET << endl;
}

int main(int argc, char **argv) {
    parse_args(argc, argv);
    TFile out_file(output_file_name.c_str(), "RECREATE");
    Float_t ecm = copy_stats();
    copy_data(ecm);
    out_file.Save();
    return 0;
}
