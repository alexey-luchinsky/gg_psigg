#include "nlo_kinematics.h"

//dbl_type s, t1, t2, u1, u2;

//dbl_type k3[4] = {(dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0};

cmplx IFABC, DABC, DPLUSIF, DMINUSIF;
dbl_type k4[4] = {(dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0, (dbl_type) 0.0};
cmplx epsG4[4] = {};

// NLO scalar products
cmplx epsG3epsG4, epsG1k4, epsG2epsG4, epsG4epsPsi, epsG4k1, epsG1epsG4, epsPsik4,
k1k4, k2k4, k3k4, epsG2k4, epsG4k2, epsG3k4, epsG4k3;

dbl_type var_hat_s() {
    return sum_mass2(k3, k4, pPsi);
}

void calc_sp_nlo() {
    epsG3epsG4 = sp(epsG3, epsG4);
    epsG1k4 = sp(epsG1, k4);
    epsG2epsG4 = sp(epsG2, epsG4);
    epsG4epsPsi = sp(epsG4, epsPsi);
    epsG4k1 = sp(epsG4, k1);
    epsG1epsG4 = sp(epsG1, epsG4);
    epsPsik4 = sp(epsPsi, k4);
    k1k4 = sp(k1, k4);
    k2k4 = sp(k2, k4);
    k3k4 = sp(k3, k4);
    epsG2k4 = sp(epsG2, k4);
    epsG4k2 = sp(epsG4, k2);
    epsG3k4 = sp(epsG3, k4);
    epsG4k3 = sp(epsG4, k3);
}

dbl_type cMult[nColors][nColors];

void init_mult_table() {
    cMult[0][0] = 19. / 6;
    cMult[0][1] = -1. / 3;
    cMult[0][2] = -1. / 3;
    cMult[0][3] = -1. / 3;
    cMult[0][4] = -1. / 3;
    cMult[0][5] = 2. / 3;
    cMult[1][0] = -1. / 3;
    cMult[1][1] = 19. / 6;
    cMult[1][2] = -1. / 3;
    cMult[1][3] = 2. / 3;
    cMult[1][4] = -1. / 3;
    cMult[1][5] = -1. / 3;
    cMult[2][0] = -1. / 3;
    cMult[2][1] = -1. / 3;
    cMult[2][2] = 19. / 6;
    cMult[2][3] = -1. / 3;
    cMult[2][4] = 2. / 3;
    cMult[2][5] = -1. / 3;
    cMult[3][0] = -1. / 3;
    cMult[3][1] = 2. / 3;
    cMult[3][2] = -1. / 3;
    cMult[3][3] = 19. / 6;
    cMult[3][4] = -1. / 3;
    cMult[3][5] = -1. / 3;
    cMult[4][0] = -1. / 3;
    cMult[4][1] = -1. / 3;
    cMult[4][2] = 2. / 3;
    cMult[4][3] = -1. / 3;
    cMult[4][4] = 19. / 6;
    cMult[4][5] = -1. / 3;
    cMult[5][0] = 2. / 3;
    cMult[5][1] = -1. / 3;
    cMult[5][2] = -1. / 3;
    cMult[5][3] = -1. / 3;
    cMult[5][4] = -1. / 3;
    cMult[5][5] = 19. / 6;
};

bool diag[nDiags];

void swich_all_diags(bool state) {
    for (int i = 0; i < nDiags; ++i) diag[i] = state;
};

void switch_ggPsi_diags(bool state) {
    diag[1] = state;
    diag[2] = state;
    diag[6] = state;
    diag[7] = state;
    diag[14] = state;
    diag[15] = state;
    diag[16] = state;
    diag[17] = state;
    diag[23] = state;
    diag[26] = state;
    diag[28] = state;
    diag[30] = state;
    diag[31] = state;
    diag[32] = state;
    diag[37] = state;
    diag[42] = state;
    diag[47] = state;
    diag[53] = state;
    diag[58] = state;
    diag[62] = state;
    diag[64] = state;
    diag[69] = state;
    diag[74] = state;
    diag[77] = state;
    diag[82] = state;
    diag[86] = state;
    diag[99] = state;
    diag[100] = state;
    diag[101] = state;
    diag[103] = state;
    diag[105] = state;
    diag[106] = state;
    diag[107] = state;
    diag[109] = state;
    diag[111] = state;
    diag[113] = state;
    diag[117] = state;
    diag[119] = state;
};

dbl_type pT_psi() {
    return pT(pPsi);
};

dbl_type y_psi() {
    return rapidity(pPsi);
};

dbl_type pT_g_min() {
    return min(pT(k3), pT(k4));
};

dbl_type pT_g_max() {
    return max(pT(k3), pT(k4));
};

dbl_type y_g_min() {
    return min(rapidity(k3), rapidity(k4));
};

dbl_type y_g_max() {
    return max(rapidity(k3), rapidity(k4));
};
//

dbl_type pT_psig_min() {
    return min(sum_pT(pPsi, k3), sum_pT(pPsi, k4));
};

dbl_type pT_psig_max() {
    return max(sum_pT(pPsi, k3), sum_pT(pPsi, k4));
};

dbl_type y_psig_min() {
    return min(sum_rapidity(pPsi, k3), sum_rapidity(pPsi, k4));
};

dbl_type y_psig_max() {
    return max(sum_rapidity(pPsi, k3), sum_rapidity(pPsi, k4));
};

dbl_type m_psig_min() {
    return min(sum_mass(pPsi, k3), sum_mass(pPsi, k4));
};

dbl_type m_psig_max() {
    return max(sum_mass(pPsi, k3), sum_mass(pPsi, k4));
};
//

dbl_type pT_psigg() {
    return sum_pT(pPsi, k3, k4);
};

dbl_type y_psigg() {
    return sum_rapidity(pPsi, k3, k4);
};

dbl_type m_psigg() {
    return sum_mass(pPsi, k3, k4);
};



