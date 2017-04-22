#include "TFile.h"
#include "TNtuple.h"
#include "TChain.h"
#include "TROOT.h"

#include "color_util.h"
#include "tclap/CmdLine.h"
#include "root-utils.h"
#include "globals/algebra.h"

using namespace std;
using namespace TCLAP;

/** Run configuration **/
static bool stats_only;
static vector<var_descriptor> export_vars;
static string histogram_prefix;


/******** STATIC STUFF *******/
static const string histo_prefix("histogram_");
static vector<string> default_set_of_args;

void initialize_default_args() {
    default_set_of_args.push_back("pT_psi:100");
    default_set_of_args.push_back("pT_psig_min:100");
    default_set_of_args.push_back("pT_psig_max:100");
    default_set_of_args.push_back("y_psi:100");
    default_set_of_args.push_back("m_psig_min:100");

//    default_set_of_args.push_back("k3_pT:100");
//    default_set_of_args.push_back("k4_pT:100");
//    default_set_of_args.push_back("k3_y:50");
//    default_set_of_args.push_back("k4_y:50");
//    default_set_of_args.push_back("m_pair:100");
//    default_set_of_args.push_back("pT_pair:100");
//    default_set_of_args.push_back("y_pair:50");
//    default_set_of_args.push_back("delta_y:50");
//    default_set_of_args.push_back("delta_phi:50");
//    default_set_of_args.push_back("delta_pT:50");
//    default_set_of_args.push_back("hat_s:100");
//    default_set_of_args.push_back("angle:50");
}

bool psi_decay;
dbl_type minMuonPT2, minMuonEta, maxMuonEta;

void initialize(int argc, char **argv) {
    initialize_default_args();

    CmdLine cmd("this is a message", ' ', "0.99");
    root_utils_insert_default_args(cmd);
    MultiArg<string> arg_vars("x", "xvar", "variable to export", false, "var:[bins]:[min]:[max]", cmd);
    SwitchArg arg_suppress_defaults("", "no-default", "Clear list of default args to export", cmd, false);
    SwitchArg arg_stats_only("s", "stats", "Prints only statistics", cmd, false);
    ValueArg<string> arg_prefix("p", "prefix", "Prefix for output histograms", false, "", "string", cmd);
    SwitchArg arg_decay("", "psi-decay", "Decay psi-mesons?", cmd, false);
    ValueArg<double> arg_muonPT("", "muonPT", "minimal value of muon pT", false, -1, "number", cmd);
    ValueArg<double> arg_muonEtaMin("", "muonEtaMin", "minimal value of muon pseudorapidity", false, -DBL_MAX, "number", cmd);
    ValueArg<double> arg_muonEtaMax("", "muonEtaMax", "maximum value of muon pseudorapidity", false, DBL_MAX, "number", cmd);


    cmd.parse(argc, argv);
    root_utils_initialize_from_cmd();
    psi_decay = arg_decay.getValue();
    minMuonPT2 = pow(arg_muonPT.getValue(), 2);
    minMuonEta = arg_muonEtaMin.getValue();
    maxMuonEta = arg_muonEtaMax.getValue();

    histogram_prefix = arg_prefix.getValue();
    stats_only = arg_stats_only.getValue();

    vector<string> args_strings = arg_vars.getValue();
    for (int i = 0; i < args_strings.size(); ++i) {
        var_descriptor descr = parse_descriptor(args_strings[i]);
        export_vars.push_back(descr);
    }

    if (!arg_suppress_defaults.getValue()) {
        for (int i = 0; i < default_set_of_args.size(); ++i) {
            var_descriptor descr = parse_descriptor(default_set_of_args[i]);
            bool exists = false;
            for (int j = 0; j < export_vars.size(); ++j) {
                if (export_vars[j].var_name == descr.var_name) {
                    exists = true;
                    break;
                }
            }
            if (!exists)
                export_vars.push_back(descr);
        }
    }
}

#include "Random.h"

dbl_type k_mu1[4], k_mu2[4], k_mu3[4], k_mu4[4];
dbl_type m_mu = 0.106, m_mu2 = pow(m_mu, 2), mPsi = -1;
extern Random random_generator;
dbl_type PI = acos(-1);

void print_vec4(string name, dbl_type(&v)[4]) {
    cout << name << "={" << v[0] << "," << v[1] << "," << v[2] << "," << v[3] << "}; mass=" << sqrt(mass2(v)) << ";" << endl;
}

// kinematics of psi-meson leptonic decay

void decay_psi(dbl_type(&v_psi)[4], dbl_type(&v_mu1)[4], dbl_type(&v_mu2)[4]) {

    dbl_type e = mPsi / 2, // final muon energy, should be constant!!!
            mom = sqrt(e * e - m_mu2), // final muon momentum
            cosT = random_generator.rand(-1, 1), // polar angle
            sinT = sqrt(1. - cosT * cosT),
            phi = random_generator.rand(0, 2 * PI), // azimuthal angle
            cosPhi = cos(phi), sinPhi = sin(phi);
    set_v4(v_mu1, mom * sinT*cosPhi, mom * sinT*sinPhi, mom*cosT, e);
    set_v4(v_mu2, -mom * sinT*cosPhi, -mom * sinT*sinPhi, -mom*cosT, e);
    apply_boost_to(v_psi, v_mu1);
    apply_boost_to(v_psi, v_mu2);
    //    cout<<"------------"<<endl;
    //    print_vec4("vpsi",v_psi);
    //    print_vec4("vmu1",v_mu1);
    //    print_vec4("vmu2",v_mu2);
    //    for(int i=0; i<4; ++i) {
    //        cout<<"\t "<<i<<" "<<v_psi[i]<<" "<<v_mu1[i]+v_mu2[i]<<" "<<v_mu1[i]+v_mu2[i]-v_psi[i]<<endl;
    //        assert(are_equal(v_psi[i],v_mu1[i]+v_mu2[i],0.01));
    //    }
    assert(are_equal(mass(v_mu1), m_mu));
    assert(are_equal(mass(v_mu2), m_mu));
    assert(are_equal(sum_mass2(v_mu1, v_mu2), pow(mPsi, 2)));
}

dbl_type pseudo_rapidity(dbl_type(&v)[4]) {
    dbl_type mom = sqrt(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    return log((mom + v[2]) / (mom - v[2])) / 2;
}


template<typename T>
inline
void println_4v_math(const string &name, T (&v4)[4]) {
    cout << name << "=";
    cout << "(" << v4[3] << ", " << v4[0] << ", " << v4[1] << ", " << v4[2] << ");"<<endl;
}

int main(int argc, char **argv) {
    initialize(argc, argv);
    for(int i=0; i<argc; ++i)
        cout<<argv[i]<<" ";
    cout<<endl;

    gROOT->ProcessLine("gErrorIgnoreLevel=kError");

    //    TFile fileMuon("muon.root","RECREATE");
    //    TNtuple tupMuon("tupMuon","tupMuon","muonPT");

    // data fields
    TChain data_chain("data");
    TChain stats_chain("stats");
    data_chain.Add(input_file.c_str());
    stats_chain.Add(input_file.c_str());

    cout << BOLDGREEN << "[export]" << RESET << " Will export the following variables:   " << BOLDMAGENTA;
    for (int i = 0; i < export_vars.size(); ++i)
        cout << export_vars[i] << "   ";
    cout << RESET << endl;

    if (cuts.size() != 0) {
        cout << BOLDGREEN << "[export]" << RESET << " Using the following cuts:   " << BOLDMAGENTA;
        for (int i = 0; i < cuts.size(); ++i)
            cout << cut_to_string(cuts[i]) << "   ";
        cout << RESET << endl;
    }

    cout << BOLDGREEN << "[export] " << RESET << "Retrieving branches ... ";
    Float_t k4_e, k4_px, k4_py, k4_pz,
            pPsi_e, pPsi_px, pPsi_py, pPsi_pz,
            k3_e, k3_px, k3_py, k3_pz;
    data_chain.SetBranchAddress("k3_e", &k3_e);
    data_chain.SetBranchAddress("k3_px", &k3_px);
    data_chain.SetBranchAddress("k3_py", &k3_py);
    data_chain.SetBranchAddress("k3_pz", &k3_pz);
    data_chain.SetBranchAddress("k4_e", &k4_e);
    data_chain.SetBranchAddress("k4_px", &k4_px);
    data_chain.SetBranchAddress("k4_py", &k4_py);
    data_chain.SetBranchAddress("k4_pz", &k4_pz);
    data_chain.SetBranchAddress("pPsi_e", &pPsi_e);
    data_chain.SetBranchAddress("pPsi_px", &pPsi_px);
    data_chain.SetBranchAddress("pPsi_py", &pPsi_py);
    data_chain.SetBranchAddress("pPsi_pz", &pPsi_pz);
//    if (data_chain.GetBranch("k3_e")) {
//        data_chain.SetBranchAddress("k3_e", &k3_e);
//        data_chain.SetBranchAddress("k3_px", &k3_px);
//        data_chain.SetBranchAddress("k3_py", &k3_py);
//        data_chain.SetBranchAddress("k3_pz", &k3_pz);
//    }

    Float_t matr2, wt, alpha5;
    data_chain.SetBranchAddress("matr2", &matr2);
    data_chain.SetBranchAddress("wt", &wt);
    data_chain.SetBranchAddress("alpha5", &alpha5);
    cout << "done" << endl;

    //filling temp tuple
    cout << BOLDGREEN << "[export] " << RESET << "Building local tuple ... ";
    string tmp_tuple_vars("");
    for (int i = 0; i < export_vars.size(); ++i) {
        tmp_tuple_vars += export_vars[i].var_name;
        tmp_tuple_vars += ":";
    }
    tmp_tuple_vars += "wt:matr2:alpha5";
    TNtuple *tup = new TNtuple("tup", "tup", tmp_tuple_vars.c_str());

    Float_t *tuple_vals = new Float_t[export_vars.size() + 3];
    Float_t sigma_total = 0.0;
    Float_t sigma_total_err = 0.0;
    long filtered = 0;
    for (int i = 0; i < data_chain.GetEntries(); ++i) {
        data_chain.GetEntry(i);
        set_v4(k3, k3_px, k3_py, k3_pz, k3_e);
        set_v4(k4, k4_px, k4_py, k4_pz, k4_e);
        set_v4(pPsi, pPsi_px, pPsi_py, pPsi_pz, pPsi_e);
//        if(i<10 || pT_psig_min()<1) {
//            cout<<"\n(* ===== i="<<i<<"======*)"<<endl;
//            println_4v_math("k3",k3);
//            cout<<" k3^2="<<mass2(k3)<<endl;
//            println_4v_math("k4",k4);
//            cout<<" k4^2="<<mass2(k4)<<endl;
//            println_4v_math("pPsi",pPsi);
//            cout<<" pPsi^2="<<mass2(pPsi)<<endl;
//
//            cout<<" pT(pPsi,k3}="<<sum_pT(k3,pPsi)<<endl;
//            cout<<" pT(pPsi,k4}="<<sum_pT(k4,pPsi)<<endl;
//            cout<<"DDD: k3_e="<<k3_e<<" pT_psig_min = "<<pT_psig_min()<<endl;
//        };
        if (mPsi < 0) mPsi = mass(pPsi);
        bool passed = true;
//        if (psi_decay) {
//            decay_psi(pPsi, k_mu1, k_mu2);
//            decay_psi(p2, k_mu3, k_mu4);
//            assert(are_equal(mass(k_mu1), m_mu));
//            assert(are_equal(mass(k_mu2), m_mu));
//            assert(are_equal(sum_mass2(k_mu1, k_mu2), pow(mPsi, 2)));
//            assert(are_equal(mass(k_mu3), m_mu));
//            assert(are_equal(mass(k_mu4), m_mu));
//            assert(are_equal(sum_mass2(k_mu3, k_mu4), pow(mPsi, 2)));
//            if (pT_squared(k_mu1) < minMuonPT2 || pT_squared(k_mu2) < minMuonPT2 ||
//                    pT_squared(k_mu3) < minMuonPT2 || pT_squared(k_mu4) < minMuonPT2 ||
//                    pseudo_rapidity(k_mu1)<minMuonEta || pseudo_rapidity(k_mu1)>maxMuonEta ||
//                    pseudo_rapidity(k_mu2)<minMuonEta || pseudo_rapidity(k_mu2)>maxMuonEta ||
//                    pseudo_rapidity(k_mu3)<minMuonEta || pseudo_rapidity(k_mu3)>maxMuonEta ||
//                    pseudo_rapidity(k_mu4)<minMuonEta || pseudo_rapidity(k_mu3)>maxMuonEta
//                    ) {
//                //                cout<<" failed muon cut"<<endl;
//                ++filtered;
//                passed = false;
//                continue;
//            };
            //            if(passed) {
            //                tupMuon.Fill(pT_squared(k_mu1));
            //                tupMuon.Fill(pT_squared(k_mu2));
            //                tupMuon.Fill(pT_squared(k_mu3));
            //                tupMuon.Fill(pT_squared(k_mu4));
            //            };
//        };
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

        int k = 0;
        for (; k < export_vars.size(); ++k)
            tuple_vals[k] = (Float_t) export_vars[k].calculator();
        tuple_vals[k] = wt;
        tuple_vals[k + 1] = matr2;
        tuple_vals[k + 2] = alpha5;
        tup->Fill(tuple_vals);

        Float_t sigma = wt * alpha5 * matr2;
        sigma_total += sigma;
        sigma_total_err += sigma * sigma;
    };
    delete[] tuple_vals;
    cout << "done (filtered " << filtered << " events)" << endl;

    Long64_t n_events = data_chain.GetEntries();
    Long64_t n_iterations = (Long64_t) sum_branch_vals(stats_chain, "n_iterations");
    sigma_total /= n_iterations;
    sigma_total_err /= n_iterations;
    sigma_total_err = sqrt((sigma_total_err - pow(sigma_total, 2)) / n_iterations);

    sigma_total *= 0.384 * 1e6;
    sigma_total_err *= 0.384 * 1e6;

    cout << BOLDGREEN << "[export] " << RESET;
    cout << "Stats:" << endl << endl;
    cout << LIGHTCYAN;
    cout << "         SIGMA       = " << sigma_total << " nb" << endl;
    cout << "         SIGMA_ERR   = " << sigma_total_err << " nb" << endl;
    cout << "         EVENTS      = " << n_events << endl;
    cout << "         ITERATIONS  = " << n_iterations << endl;
    cout << "         input_file  = " << input_file << endl;
    cout << "         psi_decay   = " << (psi_decay ? "T" : "F") << endl;
    cout << "         muonPT      = " << sqrt(minMuonPT2) << endl;
    cout << "         minMuonEta  = " << minMuonEta << endl;
    cout << "         maxMuonEta  = " << maxMuonEta << endl;
    cout << "         filtered    = " << filtered << "(" << 100. * filtered / data_chain.GetEntries() << "%)" << endl;
    cout << RESET;
    cout << endl;
    cout << BOLDGREEN << "[export]" << RESET << " Will write to " << BOLDMAGENTA << output_dir << RESET <<
            endl;

    if (stats_only)
        return 1;

    //writing histograms
    for (int i = 0; i < export_vars.size(); ++i) {
        string &var = export_vars[i].var_name;
        const char *var_c_str = var.c_str();
        double min = export_vars[i].min, max = export_vars[i].max;
        if (min == -DBL_MAX)
            min = tup->GetMinimum(var_c_str);
        if (max == DBL_MAX)
            max = tup->GetMaximum(var_c_str);

        string concat("");
        concat += histo_prefix;
        concat += var;
        const char *h_name = concat.c_str();

        cout
                << BOLDGREEN << "[export]" << RESET << " Exporting " << h_name
                << BOLDBLUE << " (min = " << min << ", max = " << max << ", bins = " << export_vars[i].n_bins << ")" << RESET
                << " ...";

        TH1F h(h_name, h_name, export_vars[i].n_bins, min, max);
        h.Sumw2();
        tup->Project(h_name, var_c_str, "matr2*wt*alpha5");
        h.Scale(1.0 / n_iterations);
        write_histogram_to_output_with_prefix(h, output_dir, histogram_prefix);

        cout << " done" << endl;
    }
    //    tupMuon.Write();
    //    fileMuon.Save();
    cout << endl;
    return 0;
}