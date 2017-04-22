#ifndef GGGPSIPSI_ROOT_UTILS_H
#define GGGPSIPSI_ROOT_UTILS_H

#include "common_util.h"
#include "color_util.h"

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <fstream>

#include "TH1F.h"
#include "TChain.h"

#include "nlo_kinematics.h"
#include "common_util.h"

using namespace std;

/******** KINEMATIC FUNCTIONS *******/

struct var_descriptor {
    string var_name;
    int n_bins;
    double min;
    double max;

    double (*calculator)();
};

extern int default_n_bins;
extern vector<var_descriptor> cuts;
extern string input_file;
extern string output_dir;

ostream &operator<<(ostream &stream, const var_descriptor &descr);

string cut_to_string(var_descriptor &descr);

var_descriptor parse_descriptor(const string &descr);

var_descriptor parse_cut(const string &descr);

inline
double parse_min(string &v) {
    return v == "-" ? -DBL_MAX : atof(v.c_str());
}

inline
double parse_max(string &v) {
    return v == "-" ? DBL_MAX : atof(v.c_str());
}

/******* COMMAND LINE *********/


#include <tclap/CmdLine.h>

extern TCLAP::ValueArg<int> arg_n_bins;
extern TCLAP::ValueArg<string> arg_in;
extern TCLAP::MultiArg<string> arg_cuts;
extern TCLAP::ValueArg<string> arg_prefix;
extern TCLAP::ValueArg<string> arg_output;
extern TCLAP::SwitchArg arg_cout_possible_vars;

void root_utils_insert_default_args(TCLAP::CmdLine &cmd);

void root_utils_initialize_from_cmd();

/******** HISTOGRAMS *******/
inline
void write_histogram_to_file(TH1F &histogram, string file_name) {
    const char *__file_name__ = file_name.c_str();
    remove(__file_name__);
    ofstream file;

    file.open(__file_name__);
    for (int i = 1; i <= histogram.GetNbinsX(); i++)
        file << setiosflags(ios::scientific) << histogram.GetBinCenter(i) <<
        " " << setiosflags(ios::scientific) << histogram.GetBinContent(i) / histogram.GetBinWidth(i) <<
        " " << setiosflags(ios::scientific) << histogram.GetBinError(i) / histogram.GetBinWidth(i) << endl;

    file.close();
}

inline
void write_histogram_to_output_with_prefix(TH1F &histogram, string &output_dir, string &histogram_prefix) {
    string tmp = output_dir;
    tmp += histogram_prefix;
    tmp += string(histogram.GetName());
    tmp += string(".dat");
    write_histogram_to_file(histogram, tmp);
}

inline
Float_t sum_branch_vals(TChain &chain, const char *var, Long64_t size) {
    Float_t element, total = 0.0;
    chain.SetBranchAddress(var, &element);
    for (int i = 0; i < size; ++i) {
        chain.GetEntry(i);
        total += element;
    }
    return total;
}

inline
Float_t sum_branch_vals_squared(TChain &chain, const char *var, Long64_t size) {
    Float_t element, total = 0.0;
    chain.SetBranchAddress(var, &element);
    for (int i = 0; i < size; ++i) {
        chain.GetEntry(i);
        total += element * element;
    }
    return total;
}

inline
Float_t sum_branch_vals(TChain &chain, const char *var) {
    return sum_branch_vals(chain, var, chain.GetEntries());
}

inline
Float_t branch_mean(TChain &chain, const char *var) {
    Long64_t size = chain.GetEntries();
    Float_t total = sum_branch_vals(chain, var, chain.GetEntries());
    return total / size;
}

inline
Float_t branch_square_mean(TChain &chain, const char *var) {
    Long64_t size = chain.GetEntries();
    Float_t total = sum_branch_vals_squared(chain, var, chain.GetEntries());
    return (Float_t) (sqrt(total) / size);
}

#endif //GGGPSIPSI_ROOT_UTILS_H
