#ifndef GGGPSIPSI_CONFIG_H
#define GGGPSIPSI_CONFIG_H

#include "LHAPDF/LHAPDF.h"

#include <string>
#include <map>
#include <stdexcept>
#include <unistd.h>

#include "global_kinematics.h"
#include "Random.h"

using namespace std;

/** RUN PARAMETERS: READ FROM COMMAND LINE **/
extern long random_seed;
extern double n_events;
extern int n_print_step;
extern bool print_debug;
extern string pdf_set_name;
extern string scale_choice;
extern string output_file_name;
extern int test_ward_only;
extern bool parton_level_only;

/** RUNTIME **/
extern unsigned long n_passed;
extern unsigned long n_dropped;
extern Random random_generator;
extern int iteration_number;
extern LHAPDF::PDF *lhapdf_pdf;
//returns Q^2
extern __calculator__ hard_scale;

/** CUTS */
extern int s_max_factor;
extern dbl_type cut_y_psi_min, cut_y_psi_max;
extern dbl_type cut_pT_gluon_min;
extern dbl_type cut_pT_psi_min;
extern dbl_type cut_pT_psig_min;
extern dbl_type cut_m_psig_min;

inline
bool debug() { return print_debug && n_passed < 20; }

/**
 * Check PDF set correctness
 */
inline
void checkPDFs() {
    double xmin = lhapdf_pdf->xMin();
    static const int di = 10000;
    int i;
    for (i = 0; i < di; ++i)
        if (lhapdf_pdf->xfxQ2(21, xmin + i * di, 90) != 0.0)
            break;
    if (i == di)
        throw runtime_error("PDF functions are zero. Check pdf option.");
}


/******* COMMAND LINE *********/

#include <tclap/CmdLine.h>

extern TCLAP::ValueArg<int> arg_s_max_factor;
extern TCLAP::ValueArg<long> arg_random_seed;
extern TCLAP::ValueArg<double> arg_n_step;
extern TCLAP::ValueArg<double> arg_n_events;
extern TCLAP::ValueArg<double> arg_ecm;
extern TCLAP::ValueArg<double> arg_cut_y_psi_min;
extern TCLAP::ValueArg<double> arg_cut_y_psi_max;
extern TCLAP::ValueArg<double> arg_cut_pT_psig_min;
extern TCLAP::ValueArg<string> arg_pdf_set;
extern TCLAP::ValueArg<string> arg_scale_choice;
extern TCLAP::SwitchArg arg_debug;
extern TCLAP::UnlabeledValueArg<string> arg_output_file_name;
extern TCLAP::ValueArg<int> arg_do_ward_test;
extern TCLAP::SwitchArg arg_parton_level;

//TCLAP::ValuesConstraint<string> scale_constraint();

void insert_default_args(TCLAP::CmdLine &cmd);

void initialize_from_cmd();

inline
void __global_init__() {
    hadrons_s = ecm * ecm;
    random_generator = Random(random_seed);
    lhapdf_pdf = LHAPDF::mkPDF(pdf_set_name, 0);
    checkPDFs();

//	MC = (dbl_type) M_CHARM;
	MC2 = (dbl_type) pow(MC, 2);
	MC4 = (dbl_type) pow(MC, 4);
	MC6 = (dbl_type) pow(MC, 6);
	MC8 = (dbl_type) pow(MC, 8);
	MC10 = (dbl_type) pow(MC, 10);
	MC12 = (dbl_type) pow(MC, 12);
	MC14 = (dbl_type) pow(MC, 14);
	MC16 = (dbl_type) pow(MC, 16);
	MC18 = (dbl_type) pow(MC, 18);
	MC20 = (dbl_type) pow(MC, 20);
	MC22 = (dbl_type) pow(MC, 22);
	MC24 = (dbl_type) pow(MC, 24);


    k1[0] = k1[1] = k2[0] = k2[1] = 0;
    k1[3] = ecm / 2.;
    k2[3] = ecm / 2.;
    k1[2] = ecm / 2.;
    k2[2] = -ecm / 2.;
}


inline
void print_starting_configuration() {
    char hostname[1024];
    gethostname(hostname, 1024);

    cout << BOLDGREEN << "[gggpsipsi] " << RESET << "Started with the parameters:" << endl;
    static const string prefix("            ");
    cout << LIGHTCYAN;
    cout << endl;
    cout << prefix << "Hostname             : " << string(hostname) << endl;
    cout << prefix << "Random seed          : " << random_seed << endl;
    cout << prefix << "C.m. energy          : " << ecm << " (GeV)" << endl;
    cout << prefix << "Number of events     : " << n_events << endl;
    cout << prefix << "PDF set              : " << pdf_set_name << endl;
    cout << prefix << "Scale scheme         : " << scale_choice << endl;
    cout << prefix << "Psi  rapidity cut   : " << cut_y_psi_min << " < y1 < " << cut_y_psi_max << endl;
//    cout << prefix << "Psi 2 rapidity cut   : " << cut_y_psi2_min << " < y2 < " << cut_y_psi2_max << endl;
    cout << prefix << "pT psig cut         : " << "pT > " << cut_pT_psig_min << endl;
    cout << prefix << "Psi pT cut           : " << "pT > " << cut_pT_psi_min << endl;
    cout << prefix << "\\hat{s}_max factor   : " << s_max_factor << endl;
    cout << prefix << "Test Ward identities : " << test_ward_only << endl;
    cout << prefix << "MC : " << MC << endl;
    cout << endl;
    cout << RESET;
}


#endif //GGGPSIPSI_CONFIG_H
