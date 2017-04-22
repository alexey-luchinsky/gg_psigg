#include "root-utils.h"

int default_n_bins;
vector<var_descriptor> cuts;
string input_file;
string output_dir;


ostream &operator<<(ostream &stream, const var_descriptor &descr) {
    stream << descr.var_name << ":" << descr.n_bins;
    stream << ":";
    if (descr.min == -DBL_MAX)
        stream << '-';
    else
        stream << descr.min;
    stream << ":";
    if (descr.max == DBL_MAX)
        stream << '-';
    else
        stream << descr.max;
    return stream;
}

string cut_to_string(var_descriptor &descr) {
    return descr.var_name + ":" + to_string(descr.min) + ":" + to_string(descr.max);
}

var_descriptor parse_descriptor(const string &descr) {
    vector<string> parts = split_string(descr, ':');
    string var_name = parts[0];
    var_descriptor result;
    result.var_name = var_name;
    result.n_bins = default_n_bins;
    result.calculator = get_var_calculator(var_name);

    if (parts.size() > 1)
        result.n_bins = atoi(parts[1].c_str());
    result.min = -DBL_MAX, result.max = DBL_MAX;
    if (parts.size() > 2)
        result.min = parse_min(parts[2]);
    if (parts.size() > 3)
        result.max = parse_max(parts[3]);

    return result;
}

var_descriptor parse_cut(const string &descr) {
    vector<string> parts = split_string(descr, ':');
    string var_name = parts[0];
    if (parts.size() < 3)
        throw runtime_error("Illegal syntax for cut (should be `var:min:max`): " + var_name);

    var_descriptor result;
    result.var_name = var_name;
    result.calculator = get_var_calculator(var_name);
    result.min = parse_min(parts[1]);
    result.max = parse_max(parts[2]);

    return result;
}

TCLAP::ValueArg<int> arg_n_bins("b", "default-bins", "number of bins", false, 50, "int");
TCLAP::ValueArg<string> arg_in("i", "input", "wild card for input files", true, "", "string");
TCLAP::MultiArg<string> arg_cuts("c", "cut", "cut", false, "var:min:max");
TCLAP::ValueArg<string> arg_output("o", "output", "Path to output directory", false, "", "string");
TCLAP::SwitchArg arg_cout_possible_vars("l", "list-args", "Print available variables", false);

void root_utils_insert_default_args(TCLAP::CmdLine &cmd) {
    cmd.add(arg_n_bins);
    cmd.add(arg_in);
    cmd.add(arg_cuts);
    cmd.add(arg_output);
    cmd.add(arg_cout_possible_vars);
}

void root_utils_initialize_from_cmd() {
    register_var(string("hat_s"), &var_hat_s);
    try {
        if (arg_cout_possible_vars.getValue()) {
            print_available_vars();
            exit(0);
        }

        default_n_bins = arg_n_bins.getValue();
        input_file = arg_in.getValue();
        output_dir = arg_output.getValue();

        if (input_file.empty()) {
            cout << RED << "Input source is not specified" << RESET << endl;
            throw runtime_error("Input source is not specified");
        }
        //process output
        if (output_dir.empty()) {
            output_dir = get_wdir();
            output_dir = output_dir + "/";
        } else {
            if (!ends_with(output_dir, "/"))
                output_dir = output_dir + "/";
            if (output_dir[0] != '/')
                output_dir = get_wdir() + "/" + output_dir;
        }

        vector<string> cuts_strings = arg_cuts.getValue();
        for (int i = 0; i < cuts_strings.size(); ++i) {
            var_descriptor descr = parse_cut(cuts_strings[i]);
            cuts.push_back(descr);
        }
    } catch (TCLAP::ArgException &e) {
        std::cout << "error: " << e.error() << " for arg " << e.argId() << endl;
        throw e;
    }
}
