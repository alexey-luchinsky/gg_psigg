#include "global_kinematics.h"

dbl_type MC, MC2, MC4, MC6, MC8, MC10, MC12, MC14, MC16, MC18, MC20, MC22, MC24;

const dbl_type TWO_PI_4 = pow(2.0 * M_PI, 4);
const dbl_type FOUR_PI_5 = pow(4.0 * M_PI, 5);
const dbl_type FOUR_PI_4 = pow(4.0 * M_PI, 4);

dbl_type k1[4] = {(dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0};
dbl_type k2[4] = {(dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0};
dbl_type k3[4] = {(dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0};
dbl_type pPsi[4] = {(dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0};
cmplx epsG1[4] = {};
cmplx epsG2[4] = {};
cmplx epsG3[4] = {};
cmplx epsPsi[4] = {};

cmplx epsG1k2, epsG2epsPsi, epsG1k3, epsG1epsPsi, epsG2k1, epsG3epsPsi,
epsG3k1, epsG2epsG3, epsPsik2, epsG1epsG3, epsG1epsG2, epsPsik3, k1k3, k2k3,
epsG2k3, epsG3k2;

dbl_type ecm;
dbl_type hadrons_s;
dbl_type s;

dbl_type PI=acos(-1);

map<string, __calculator__> variables_mapping;


/* scales */
const string SCALE_FIXED = string("fixed");
const string SCALE_INV = string("inv");
const string SCALE_PT_A = string("pTa");
const string SCALE_PT_B = string("pTb");
const string SCALE_PT_SINGLE = string("pT_single");
const string SCALE_PT_A_HALF = string("pTa_half");
const string SCALE_PT_B_HALF = string("pTb_half");
const string SCALE_PT_A_DOUBLE = string("pTa_double");
const string SCALE_PT_B_DOUBLE = string("pTb_double");
;

dbl_type scale_fixed() {
    return 16 * MC2;
}

dbl_type scale_inv_mass() {
    return 4*MC2+pT_squared(pPsi);
}

dbl_type scale_pT_a() {
    return 8 * MC2 + pT_squared(k3) + pT_squared(pPsi);
}

dbl_type scale_pT_a_half() {
    return 0.5 * scale_pT_a();
}

dbl_type scale_pT_a_double() {
    return 2.0 * scale_pT_a();
}

dbl_type scale_pT_b() {
    return 16 * MC2 + sum_pT_squared(k3, pPsi);
}

dbl_type scale_pT_b_half() {
    return 0.5 * scale_pT_b();
}

dbl_type scale_pT_b_double() {
    return 2.0 * scale_pT_b();
}

dbl_type scale_pT_single() {
    return 4 * MC2 + pT_squared(pPsi);
}

double var_delta_pT() {
    dbl_type p1_pT = pT(pPsi);
    return fabs(p1_pT);
}

double var_angle() {
    return angle(k3, pPsi);
}

dbl_type pT_psi();
dbl_type y_psi();
dbl_type pT_g_min();
dbl_type pT_g_max();
dbl_type y_g_min();
dbl_type y_g_max();
dbl_type eta_psi();
dbl_type pT_psig_min();
dbl_type pT_psig_max();
dbl_type y_psig_min();
dbl_type y_psig_max();
dbl_type m_psig_min();
dbl_type m_psig_max();
dbl_type pT_psigg();
dbl_type y_psigg();
dbl_type m_psigg();


void initialize_variables_mapping() {
    static bool initialized = false;
    if (!initialized) {
        initialized = true;
//        variables_mapping["pT_k3"] = &pT_g_min;
        variables_mapping["pT_psi"] = &pT_psi;
        variables_mapping["pT_psig_min"] = &pT_psig_min;
        variables_mapping["pT_psig_max"] = &pT_psig_max;
        variables_mapping["y_psi"] = &y_psi;
        variables_mapping["m_psig_min"] = &m_psig_min;
        variables_mapping["eta_psi"] = &eta_psi;
        
//        variables_mapping["p2_pT"] = &var_pT2;
//        variables_mapping["p1_y"] = &var_y1;
//        variables_mapping["p2_y"] = &var_y2;
//        variables_mapping["m_pair"] = &var_m_pair;
//        variables_mapping["pT_pair"] = &var_pT_pair;
//        variables_mapping["y_pair"] = &var_y_pair;
//        variables_mapping["delta_y"] = &var_delta_y;
//        variables_mapping["delta_phi"] = &var_delta_phi;
//        variables_mapping["delta_pT"] = &var_delta_pT;
//        variables_mapping["angle"] = &var_angle;

        variables_mapping["scale_" + SCALE_FIXED] = &scale_fixed;
        variables_mapping["scale_" + SCALE_INV] = &scale_inv_mass;
        variables_mapping["scale_" + SCALE_PT_A] = &scale_pT_a;
        variables_mapping["scale_" + SCALE_PT_A_HALF] = &scale_pT_a_half;
        variables_mapping["scale_" + SCALE_PT_A_DOUBLE] = &scale_pT_a_double;
        variables_mapping["scale_" + SCALE_PT_B] = &scale_pT_b;
        variables_mapping["scale_" + SCALE_PT_B_HALF] = &scale_pT_b_half;
        variables_mapping["scale_" + SCALE_PT_B_DOUBLE] = &scale_pT_b_double;
        variables_mapping["scale_" + SCALE_PT_SINGLE] = &scale_pT_single;
    }
}

void register_var(string var_name, __calculator__ calculator) {
    variables_mapping[var_name] = calculator;
}

void print_available_vars() {
    initialize_variables_mapping();
    cout << BOLDGREEN << "Available args:   " << LIGHTCYAN;
    for (it_str_calculator it = variables_mapping.begin(); it != variables_mapping.end(); it++)
        cout << it->first << "   ";
    cout << RESET << endl;
}

__calculator__ get_var_calculator(string &var_name) {
    initialize_variables_mapping();
    if (variables_mapping.find(var_name) == variables_mapping.end()) {
        print_available_vars();
        throw runtime_error("Unknown variable name: " + var_name);
    }
    return variables_mapping[var_name];
}

void calc_sp_global() {
    epsG1k2 = sp(epsG1, k2);
    epsG2epsPsi = sp(epsG2, epsPsi);
    epsG1k3 = sp(epsG1, k3);
    epsG1epsPsi = sp(epsG1, epsPsi);
    epsG2k1 = sp(epsG2, k1);
    epsG3epsPsi = sp(epsG3, epsPsi);
    epsG3k1 = sp(epsG3, k1);
    epsG2epsG3 = sp(epsG2, epsG3);
    epsPsik2 = sp(epsPsi, k2);
    epsG1epsG3 = sp(epsG1, epsG3);
    epsG1epsG2 = sp(epsG1, epsG2);
    epsPsik3 = sp(epsPsi, k3);
    k1k3 = sp(k1, k3);
    k2k3 = sp(k2, k3);
    epsG2k3 = sp(epsG2, k3);
    epsG3k2 = sp(epsG3, k2);
}