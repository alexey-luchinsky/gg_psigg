#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_14() {
	 abbr[140]=epsG2k4*epsG3k1*epsG4epsPsi + epsG2k4*epsG3k2*epsG4epsPsi - epsG2k4*epsG3k4*epsG4epsPsi + epsG2epsPsi*epsG3k1*epsG4k2 + epsG2epsPsi*epsG3k2*epsG4k2 - epsG2epsPsi*epsG3k4*epsG4k2 + epsG2k4*epsG3epsPsi*epsG4k3 + epsG2epsPsi*epsG3k2*epsG4k3 - epsG2epsG4*epsG3k1*epsPsik2 - epsG2epsG4*epsG3k2*epsPsik2 + epsG2epsG4*epsG3k4*epsPsik2 - epsG2epsG3*epsG4k3*epsPsik2 - epsG2k4*epsG3epsG4*epsPsik3 + epsG2epsG4*epsG3k2*epsPsik3 - epsG2epsG3*epsG4k2*epsPsik3 - epsG2epsPsi*epsG3epsG4*k2k3 - epsG2epsG4*epsG3epsPsi*k2k3 + epsG2epsG3*epsG4epsPsi*k2k3 + epsG2k1*abbr[50] + epsG2k3*abbr[139];
	 abbr[141]=epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi - epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi - epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi - epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi + epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 + epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 + epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 + epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 + epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 + epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 + epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 + epsG1epsPsi*epsG2k1*epsG3k2*epsG4k1 + epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 - epsG1epsPsi*epsG2k1*epsG3k4*epsG4k1 - epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 - epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 + epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 + epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 + epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 + epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 + epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 + epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 - epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 - epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 + epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 + epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 + epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 + epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 - epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 + epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 + epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 + epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 - epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 - epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 - epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 + epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 + epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 + epsG1epsG2*epsG3k2*epsG4k1*epsPsik2 - epsG1epsG2*epsG3k4*epsG4k1*epsPsik2 - epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 + epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 + epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 + epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 - epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 + epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 - epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 + epsG1epsG4*epsG2k1*epsG3k4*epsPsik3 + epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 + epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 - epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 - epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 - epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 - epsG1epsG2*epsG3k2*epsG4k1*epsPsik3 - epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 - epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 - epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 + epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 - epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 + epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 + epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 + epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 - epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 - epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 - epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 - epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 - epsG1epsG4*epsG2k1*epsG3k2*epsPsik4 - epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 + epsG1epsG4*epsG2k1*epsG3k4*epsPsik4 + epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 + epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 + epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 - epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 - epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 - epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 + epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 - epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 - epsG1k3*epsG2epsPsi*epsG3epsG4*k1k3 - epsG1epsPsi*epsG2k1*epsG3epsG4*k1k3 - epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 - epsG1k3*epsG2epsG4*epsG3epsPsi*k1k3 - epsG1epsG4*epsG2k1*epsG3epsPsi*k1k3 - epsG1epsG4*epsG2k4*epsG3epsPsi*k1k3 - epsG1epsPsi*epsG2epsG4*epsG3k1*k1k3 + epsG1epsG4*epsG2epsPsi*epsG3k1*k1k3 + epsG1epsPsi*epsG2epsG4*epsG3k4*k1k3 - epsG1epsG4*epsG2epsPsi*epsG3k4*k1k3 + epsG1k3*epsG2epsG3*epsG4epsPsi*k1k3 + epsG1epsG3*epsG2k1*epsG4epsPsi*k1k3 + epsG1epsG3*epsG2k4*epsG4epsPsi*k1k3 - epsG1epsG2*epsG3k1*epsG4epsPsi*k1k3 + epsG1epsG2*epsG3k4*epsG4epsPsi*k1k3 - epsG1epsPsi*epsG2epsG3*epsG4k2*k1k3 + epsG1epsG3*epsG2epsPsi*epsG4k2*k1k3 - epsG1epsG2*epsG3epsPsi*epsG4k2*k1k3 - epsG1epsPsi*epsG2epsG3*epsG4k3*k1k3 + epsG1epsG3*epsG2epsPsi*epsG4k3*k1k3 - epsG1epsG2*epsG3epsPsi*epsG4k3*k1k3 + epsG1epsG4*epsG2epsG3*epsPsik2*k1k3 - epsG1epsG3*epsG2epsG4*epsPsik2*k1k3 - epsG1epsG2*epsG3epsG4*epsPsik2*k1k3 - epsG1epsG4*epsG2epsG3*epsPsik3*k1k3 + epsG1epsG3*epsG2epsG4*epsPsik3*k1k3 + epsG1epsG2*epsG3epsG4*epsPsik3*k1k3 - epsG1k3*epsG2epsPsi*epsG3epsG4*k1k4 + epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 - epsG1k3*epsG2epsG4*epsG3epsPsi*k1k4 + epsG1epsG4*epsG2k3*epsG3epsPsi*k1k4 - epsG1epsPsi*epsG2epsG4*epsG3k1*k1k4 + epsG1epsG4*epsG2epsPsi*epsG3k1*k1k4 - epsG1epsPsi*epsG2epsG4*epsG3k2*k1k4 + epsG1epsG4*epsG2epsPsi*epsG3k2*k1k4 + epsG1epsPsi*epsG2epsG4*epsG3k4*k1k4 - epsG1epsG4*epsG2epsPsi*epsG3k4*k1k4 + epsG1k3*epsG2epsG3*epsG4epsPsi*k1k4 - epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 - epsG1epsG2*epsG3k1*epsG4epsPsi*k1k4 - epsG1epsG2*epsG3k2*epsG4epsPsi*k1k4 + epsG1epsG2*epsG3k4*epsG4epsPsi*k1k4 - epsG1epsPsi*epsG2epsG3*epsG4k3*k1k4 + epsG1epsG3*epsG2epsPsi*epsG4k3*k1k4 - epsG1epsG2*epsG3epsPsi*epsG4k3*k1k4 - epsG1epsG4*epsG2epsG3*epsPsik3*k1k4 + epsG1epsG3*epsG2epsG4*epsPsik3*k1k4 + epsG1epsG2*epsG3epsG4*epsPsik3*k1k4 - epsG1k3*epsG2epsPsi*epsG3epsG4*k2k3 - epsG1epsPsi*epsG2k1*epsG3epsG4*k2k3 - epsG1k3*epsG2epsG4*epsG3epsPsi*k2k3 - epsG1epsG4*epsG2k1*epsG3epsPsi*k2k3 - epsG1epsPsi*epsG2epsG4*epsG3k1*k2k3 + epsG1epsG4*epsG2epsPsi*epsG3k1*k2k3 + epsG1k3*epsG2epsG3*epsG4epsPsi*k2k3 + epsG1epsG3*epsG2k1*epsG4epsPsi*k2k3 - epsG1epsG2*epsG3k1*epsG4epsPsi*k2k3 + epsG1epsPsi*epsG2epsG3*epsG4k1*k2k3 - epsG1epsG3*epsG2epsPsi*epsG4k1*k2k3 + epsG1epsG2*epsG3epsPsi*epsG4k1*k2k3 + epsG1epsG4*epsG2epsG3*epsPsik2*k2k3 - epsG1epsG3*epsG2epsG4*epsPsik2*k2k3 - epsG1epsG2*epsG3epsG4*epsPsik2*k2k3 - epsG1epsG4*epsG2epsG3*epsPsik3*k2k3 + epsG1epsG3*epsG2epsG4*epsPsik3*k2k3 + epsG1epsG2*epsG3epsG4*epsPsik3*k2k3 - epsG1epsG4*epsG2epsG3*epsPsik4*k2k3 + epsG1epsG3*epsG2epsG4*epsPsik4*k2k3 + epsG1epsG2*epsG3epsG4*epsPsik4*k2k3 - epsG1k2*abbr[59] + epsG1k4*abbr[140];
	 abbr[142]=abbr[141]*pow(MC,0.5)*pow(abbr[12],-1)*pow(abbr[28],-1)*pow(abbr[56],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[143]=-(epsG2epsPsi*epsG3k1*epsG4k1) - epsG2epsPsi*epsG3k2*epsG4k1 + epsG2epsPsi*epsG3k4*epsG4k1 + epsG2epsPsi*epsG3k1*epsG4k2 + epsG2epsPsi*epsG3k2*epsG4k2 - epsG2epsPsi*epsG3k4*epsG4k2 - epsG2epsPsi*epsG3k1*epsG4k3 - epsG2epsPsi*epsG3k2*epsG4k3 + epsG2epsG4*epsG3k4*epsPsik3 + epsG2epsG3*epsG4k1*epsPsik3 - epsG2epsG3*epsG4k2*epsPsik3 + epsG2epsG3*epsG4k3*epsPsik3 - epsG2epsG4*epsG3k1*epsPsik4 - epsG2epsG4*epsG3k2*epsPsik4 + epsG2epsG4*epsG3k4*epsPsik4 + epsG2epsG3*epsG4k3*epsPsik4 + epsG2epsPsi*epsG3epsG4*k3k4 - epsG2epsG4*epsG3epsPsi*k3k4 - epsG2epsG3*epsG4epsPsi*k3k4 + epsG2k4*abbr[50] + epsG2k3*abbr[127];
	 abbr[144]=-(epsG2k4*epsG3k1*epsG4epsPsi) - epsG2k4*epsG3k2*epsG4epsPsi + epsG2k4*epsG3k4*epsG4epsPsi - epsG2epsPsi*epsG3k1*epsG4k2 - epsG2epsPsi*epsG3k2*epsG4k2 + epsG2epsPsi*epsG3k4*epsG4k2 - epsG2k4*epsG3epsPsi*epsG4k3 + epsG2epsPsi*epsG3k2*epsG4k3 + epsG2epsG4*epsG3k1*epsPsik2 + epsG2epsG4*epsG3k2*epsPsik2 - epsG2epsG4*epsG3k4*epsPsik2 - epsG2epsG3*epsG4k3*epsPsik2 + epsG2k4*epsG3epsG4*epsPsik3 - epsG2epsG4*epsG3k2*epsPsik3 + epsG2epsG3*epsG4k2*epsPsik3 + epsG2epsPsi*epsG3epsG4*k1k3 - epsG2epsG4*epsG3epsPsi*k1k3 - epsG2epsG3*epsG4epsPsi*k1k3 - epsG2epsPsi*epsG3epsG4*k3k4 + epsG2epsG4*epsG3epsPsi*k3k4 + epsG2epsG3*epsG4epsPsi*k3k4 + epsG2k1*abbr[50] + epsG2k3*abbr[109];
	 abbr[145]=-2*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi - 2*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi - 2*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi + 2*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi + 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 + 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 - 2*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 + 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 - 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 + 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k1 - 2*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 - 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k1 - 2*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 + 2*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 - 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 - 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 - 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 - 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 - 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 - 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 + 2*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 + 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 + 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 + 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 - 2*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 + 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 + 2*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 - 2*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 - 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 - 2*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 - 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 - 2*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 + 2*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k2*epsG4k1*epsPsik2 - 2*epsG1epsG2*epsG3k4*epsG4k1*epsPsik2 + 2*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 - 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 - 2*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 - 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 + 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - 2*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 + 2*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 + 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik3 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 - 2*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 - 2*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 + 2*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 - 2*epsG1epsG2*epsG3k2*epsG4k1*epsPsik3 + 2*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 + 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 + 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 - 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 + 2*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 + 2*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 - 2*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 - 2*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 + 2*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 + 2*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k2*epsPsik4 + 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 + 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik4 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 - 2*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 + 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 + 2*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 + 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 - 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 + 2*epsG1k3*epsG2epsPsi*epsG3epsG4*k1k3 - 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k3 + 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 - 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k1k3 - 2*epsG1epsG4*epsG2k3*epsG3epsPsi*k1k3 + 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k1k3 - 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k1k3 - 2*epsG1epsG4*epsG2epsPsi*epsG3k1*k1k3 - 2*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k3 - 2*epsG1epsG4*epsG2epsPsi*epsG3k2*k1k3 - 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k1k3 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k3 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k3 + 2*epsG1epsG2*epsG3k1*epsG4epsPsi*k1k3 + 2*epsG1epsG2*epsG3k2*epsG4epsPsi*k1k3 - 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k1k3 + 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k1k3 - 2*epsG1epsG2*epsG3epsPsi*epsG4k1*k1k3 + 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k3 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k3 + 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k1k3 + 2*epsG1epsG4*epsG2epsG3*epsPsik3*k1k3 + 2*epsG1epsG3*epsG2epsG4*epsPsik3*k1k3 - 2*epsG1epsG2*epsG3epsG4*epsPsik3*k1k3 + 2*epsG1epsG4*epsG2epsG3*epsPsik4*k1k3 + 2*epsG1epsG3*epsG2epsG4*epsPsik4*k1k3 - 2*epsG1epsG2*epsG3epsG4*epsPsik4*k1k3 - 2*epsG1k3*epsG2epsPsi*epsG3epsG4*k3k4 - 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k3k4 + 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k3k4 - 2*epsG1epsG4*epsG2k1*epsG3epsPsi*k3k4 + 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k3k4 + 2*epsG1epsG4*epsG2epsPsi*epsG3k1*k3k4 + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k3k4 - 2*epsG1epsG2*epsG3k1*epsG4epsPsi*k3k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k3k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k3k4 + 2*epsG1epsG2*epsG3epsPsi*epsG4k1*k3k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k3k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k3k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik2*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik3*k3k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik3*k3k4 + 2*epsG1epsG2*epsG3epsG4*epsPsik3*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik4*k3k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik4*k3k4 + 2*epsG1epsG2*epsG3epsG4*epsPsik4*k3k4 - epsG1k3*epsG2epsPsi*epsG3epsG4*s + epsG1epsPsi*epsG2k3*epsG3epsG4*s + epsG1k3*epsG2epsG4*epsG3epsPsi*s + epsG1epsG4*epsG2k3*epsG3epsPsi*s + epsG1epsPsi*epsG2epsG4*epsG3k1*s + epsG1epsG4*epsG2epsPsi*epsG3k1*s + epsG1epsPsi*epsG2epsG4*epsG3k2*s + epsG1epsG4*epsG2epsPsi*epsG3k2*s - epsG1epsPsi*epsG2epsG4*epsG3k4*s - epsG1epsG4*epsG2epsPsi*epsG3k4*s + epsG1k3*epsG2epsG3*epsG4epsPsi*s - epsG1epsG3*epsG2k3*epsG4epsPsi*s - epsG1epsG2*epsG3k1*epsG4epsPsi*s - epsG1epsG2*epsG3k2*epsG4epsPsi*s + epsG1epsG2*epsG3k4*epsG4epsPsi*s - epsG1epsPsi*epsG2epsG3*epsG4k3*s + epsG1epsG3*epsG2epsPsi*epsG4k3*s - epsG1epsG2*epsG3epsPsi*epsG4k3*s - epsG1epsG4*epsG2epsG3*epsPsik3*s - epsG1epsG3*epsG2epsG4*epsPsik3*s + epsG1epsG2*epsG3epsG4*epsPsik3*s + 2*epsG1k2*abbr[143] + 2*epsG1k4*abbr[144];
	 abbr[146]=abbr[145]*pow(MC,0.5)*pow(abbr[12],-1)*pow(abbr[28],-1)*pow(abbr[104],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[147]=epsG3k2*epsG4epsPsi - epsG3k4*epsG4epsPsi + epsG3epsPsi*epsG4k3 - epsG3epsG4*epsPsik3;
	 abbr[148]=-2*epsG2k3*epsG3epsPsi*epsG4k2 - 2*epsG2epsPsi*epsG3k2*epsG4k2 + 2*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG2epsG4*epsG3k4*epsPsik3 + 2*epsG2epsG3*epsG4k2*epsPsik3 + 2*epsG2epsG4*epsG3k2*epsPsik4 - 2*epsG2epsG4*epsG3k4*epsPsik4 + epsG2epsG4*epsG3epsPsi*k2k3 + epsG2epsG4*epsG3epsPsi*k3k4 - 2*epsG2k4*abbr[147];
	 abbr[149]=epsG3k2*epsG4epsPsi - epsG3k4*epsG4epsPsi + epsG3epsPsi*epsG4k3 - epsG3epsG4*epsPsik2 + epsG3epsG4*epsPsik4;
};
