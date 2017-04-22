#include "config.h"

/** RUN PARAMETERS: READ FROM COMMAND LINE **/
long random_seed;
double n_events;
int n_print_step;
bool print_debug = false;
string pdf_set_name;
string scale_choice;
string output_file_name;
int test_ward_only;
bool parton_level_only;

/** RUNTIME **/
unsigned long n_passed = 0;
unsigned long n_dropped = 0;
Random random_generator;
int iteration_number = 0;
LHAPDF::PDF *lhapdf_pdf;
__calculator__ hard_scale;


/** CUTS */
int s_max_factor = 100;
dbl_type cut_y_psi_min, cut_y_psi_max;
dbl_type cut_pT_gluon_min = 1.0;
dbl_type cut_pT_psi_min = 0.0;
dbl_type cut_pT_psig_min=0.0;
dbl_type cut_m_psig_min=0;

TCLAP::ValueArg<int> arg_s_max_factor("", "smax-factor", "Bound on the upper \\hat{s} limit", false, s_max_factor, "int");
TCLAP::ValueArg<long> arg_random_seed("s", "seed", "Random seed", false, -1, "long");
TCLAP::ValueArg<double> arg_n_step("t", "step", "Step to print progress", false, 100, "number");
TCLAP::ValueArg<double> arg_n_events("n", "number-of-events", "Number of evenets", true, 1e3, "number");
TCLAP::ValueArg<double> arg_ecm("e", "energy", "C.m. energy", true, -1.0, "number");
TCLAP::ValueArg<double> arg_cut_y_psi_min("", "y-min", "Minimal rapidity of the  J/psi", false, -DBL_MAX, "number");
TCLAP::ValueArg<double> arg_cut_y_psi_max("", "y-max", "Maximal rapidity of the  J/psi", false, DBL_MAX, "number");
TCLAP::ValueArg<double> arg_cut_pT_psig_min("", "psig-pT", "Minimal pT of psi g", false, 0.0, "number");
TCLAP::ValueArg<double> arg_cut_pT_psi("", "psi-pT", "Minimal pT of final psi", false, 0.0, "number");
TCLAP::ValueArg<double> arg_cut_m_psig("", "m-psig", "Minimal psig mass", false, 0.0, "number");
TCLAP::ValueArg<string> arg_pdf_set("p", "pdf", "LHAPDF pdf set to use", false, string("CT10"), "string");
TCLAP::ValueArg<int> arg_do_ward_test("w", "test-ward", "Test ward identities only (values 1,2 and 3 for corr. gluons)", false, -1, "int");
TCLAP::SwitchArg arg_parton_level("", "parton-level", "Run only parton level", false);

TCLAP::ValueArg<string> arg_scale_choice("q", "scale", "Scale (fixed, inv, pT)", false, SCALE_INV, "");
TCLAP::SwitchArg arg_debug("v", "verbose", "Print debugging info", false);
TCLAP::UnlabeledValueArg<string> arg_output_file_name("output", "Output ROOT file", true, string(""), "string", false);
TCLAP::ValueArg<double> arg_mass("", "mass", "Mass of the final quarkonium", false, 3.0, "number");

void insert_default_args(TCLAP::CmdLine &cmd) {
    try {
        vector<string> allowed_scales_vals;
        allowed_scales_vals.push_back(SCALE_FIXED);
        allowed_scales_vals.push_back(SCALE_INV);
        allowed_scales_vals.push_back(SCALE_PT_A);
        allowed_scales_vals.push_back(SCALE_PT_B);
        allowed_scales_vals.push_back(SCALE_PT_SINGLE);

        new(&arg_scale_choice) TCLAP::ValueArg<string>("q", "scale", "Scale (fixed, inv, pT)", false, SCALE_INV, new TCLAP::ValuesConstraint<string>(allowed_scales_vals));
//        arg_scale_choice.ValueArg("q", "scale", "Scale (fixed, inv, pT)", false, SCALE_INV, new TCLAP::ValuesConstraint<string>(allowed_scales_vals));


        cmd.add(arg_s_max_factor);
        cmd.add(arg_random_seed);
        cmd.add(arg_n_step);
        cmd.add(arg_n_events);
        cmd.add(arg_ecm);
        cmd.add(arg_cut_y_psi_min);
        cmd.add(arg_cut_y_psi_max);
        cmd.add(arg_cut_pT_psig_min);
        cmd.add(arg_cut_pT_psi);
        cmd.add(arg_cut_m_psig);
        cmd.add(arg_pdf_set);
        cmd.add(arg_scale_choice);
        cmd.add(arg_debug);
        cmd.add(arg_output_file_name);
        cmd.add(arg_do_ward_test);
        cmd.add(arg_parton_level);
		cmd.add(arg_mass);
    } catch (TCLAP::ArgException &e) {
        std::cerr << "error: " << e.error() << " for arg " << e.argId() << std::endl;
    }
}

void initialize_from_cmd() {
    try {
        n_events = arg_n_events.getValue();
        n_print_step = (int) arg_n_step.getValue();
        ecm = arg_ecm.getValue();
        random_seed = arg_random_seed.getValue();
        s_max_factor = arg_s_max_factor.getValue();
        print_debug = arg_debug.getValue();
        pdf_set_name = arg_pdf_set.getValue();
        scale_choice = arg_scale_choice.getValue();
        cut_y_psi_min = arg_cut_y_psi_min.getValue();
        cut_y_psi_max = arg_cut_y_psi_max.getValue();
        cut_pT_gluon_min = arg_cut_pT_psig_min.getValue();
        cut_pT_psi_min = arg_cut_pT_psi.getValue();
        cut_m_psig_min = arg_cut_m_psig.getValue();
        output_file_name = arg_output_file_name.getValue();
        test_ward_only = arg_do_ward_test.getValue();
        parton_level_only = arg_parton_level.getValue();
        cut_pT_psig_min = arg_cut_pT_psig_min.getValue();
		MC=arg_mass.getValue()/2;
		
        if (random_seed == -1) {
            srand(std::time(0));
            random_seed = rand();
        }

        scale_choice = string("scale_") + scale_choice;
        hard_scale = get_var_calculator(scale_choice);
    } catch (TCLAP::ArgException &e) {
        std::cerr << "error: " << e.error() << " for arg " << e.argId() << std::endl;
        throw e;
    }
}