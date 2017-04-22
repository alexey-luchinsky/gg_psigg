#ifndef GGGPSIPSI_GLOBAL_KINEMATICS_H
#define GGGPSIPSI_GLOBAL_KINEMATICS_H

#include <vector>
#include <map>
#include <iostream>
#include <float.h>

#include "algebra.h"


//#define M_CHARM 1.5

/** COMMON VARIABLES **/
extern dbl_type MC, MC2, MC4, MC6, MC8, MC10, MC12, MC14, MC16, MC18, MC20, MC22, MC24;
extern const dbl_type TWO_PI_4;
extern const dbl_type FOUR_PI_4;
extern const dbl_type FOUR_PI_5;

//momentums
extern dbl_type k1[4], k2[4], k3[4], pPsi[4];
extern cmplx epsG1[4], epsG2[4], epsG3[4], epsPsi[4];

//center of mass energy
extern dbl_type ecm;
extern dbl_type hadrons_s;

const int nKK=314;
extern cmplx abbr[nKK];

const int nColors = 6;
extern cmplx Amp[nColors];

const int nDiags=123;
extern bool diag[nDiags];



extern dbl_type s;

// scalar products

extern cmplx epsG1k2,epsG2epsPsi,epsG1k3,epsG1epsPsi,epsG2k1,epsG3epsPsi,
        epsG3k1,epsG2epsG3,epsPsik2,epsG1epsG3,epsG1epsG2,epsPsik3,k1k3,k2k3,
        epsG2k3,epsG3k2;


/******** KINEMATIC FUNCTIONS *******/

//function that calculates actual variable
typedef dbl_type (*__calculator__)();

typedef map<string, __calculator__>::iterator it_str_calculator;

extern map<string, __calculator__> variables_mapping;

__calculator__ get_var_calculator(string &);

/******** KINEMATICS *******/


//dbl_type var_m_pair();
//
//dbl_type pT_g_min();
//dbl_type var_pT1();
//
//dbl_type var_pT2();
//
//dbl_type var_pT_pair();
//
//dbl_type var_delta_y();
//
//dbl_type var_delta_phi();
//
//dbl_type var_y_pair();
//
//dbl_type var_y1();
//
//dbl_type var_y2();
//
//dbl_type var_delta_pT();
//
//dbl_type var_angle();

/* scales */
extern const string SCALE_FIXED;
extern const string SCALE_INV;
extern const string SCALE_PT_A;
extern const string SCALE_PT_B;
extern const string SCALE_PT_A_HALF;
extern const string SCALE_PT_B_HALF;
extern const string SCALE_PT_A_DOUBLE;
extern const string SCALE_PT_B_DOUBLE;
extern const string SCALE_PT_SINGLE;

dbl_type scale_fixed();

dbl_type scale_inv_mass();

dbl_type scale_pT_a();

dbl_type scale_pT_a_half();

dbl_type scale_pT_a_double();

dbl_type scale_pT_b();

dbl_type scale_pT_b_half();

dbl_type scale_pT_b_double();

dbl_type scale_pT_single();


void initialize_variables_mapping();

void register_var(string, __calculator__);

void print_available_vars();

void calc_sp_global();

#endif
