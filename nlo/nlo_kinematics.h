#ifndef GGGPSIPSI_NLO_KINEMATICS_H
#define GGGPSIPSI_NLO_KINEMATICS_H

#include "global_kinematics.h"

//mandelstam variables

//polarizations
extern cmplx epsG4[4];

//momentums
extern dbl_type k4[4];

// NLO scalar products
extern cmplx epsG3epsG4,epsG1k4,epsG2epsG4,epsG4epsPsi,epsG4k1,epsG1epsG4,
        epsPsik4,k1k4,k2k4,k3k4,epsG2k4,epsG4k2,epsG3k4,epsG4k3;

//SU(N) table
extern cmplx IFABC, DABC, DPLUSIF, DMINUSIF;

void calc_sp_nlo();

// color multiplication table
extern dbl_type cMult[nColors][nColors];
void init_mult_table();

// switching on/off diagrams
void swich_all_diags(bool state);
void switch_ggPsi_diags(bool state);   // J/psi produced in gg fusion 
void switch_gPsi_diags(bool state);    // final gluon emitted from J/psi
dbl_type var_hat_s();

dbl_type pT_psi();
dbl_type y_psi();
dbl_type pT_g_min();
dbl_type pT_g_max();
dbl_type y_g_min();
dbl_type y_g_max();
dbl_type pT_psig_min();
dbl_type pT_psig_max();
dbl_type y_psig_min();
dbl_type y_psig_max();
dbl_type m_psig_min();
dbl_type m_psig_max();
dbl_type pT_psigg();
dbl_type y_psigg();
dbl_type m_psigg();


#endif //GGGPSIPSI_VARIABLES_H
