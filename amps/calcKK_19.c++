#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_19() {
	 abbr[190]=epsG2k1*epsG4epsPsi - epsG2k3*epsG4epsPsi - epsG2k4*epsG4epsPsi - epsG2epsPsi*epsG4k2 + epsG2epsG4*epsPsik2;
	 abbr[191]=-4*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi + 4*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 - 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 - 4*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 + 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 - 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 + 4*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 + 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 4*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 + 4*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 + 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 - 4*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 + 4*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 + 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 + 4*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 - 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 - 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 + 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k1k4 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k2k3 + 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k3 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k2k3 - 2*epsG1epsG3*epsG2epsPsi*epsG4k3*k2k3 - 2*epsG1epsG3*epsG2epsG4*epsPsik4*k2k3 + 4*epsG1k3*epsG2epsPsi*epsG3epsG4*k2k4 - 4*epsG1k3*epsG2epsG4*epsG3epsPsi*k2k4 - 4*epsG1epsPsi*epsG2epsG4*epsG3k1*k2k4 + 4*epsG1epsG4*epsG2epsPsi*epsG3k1*k2k4 + 4*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k4 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k2k4 - 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k2k4 + 4*epsG1epsG2*epsG3k1*epsG4epsPsi*k2k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k3*k2k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k2k4 + 4*epsG1epsG3*epsG2epsG4*epsPsik3*k2k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik4*k2k4 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k3k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k3k4 + epsG1epsG3*epsG2k4*epsG4epsPsi*s + epsG1epsG3*epsG2epsPsi*epsG4k1*s + epsG1epsG3*epsG2epsPsi*epsG4k2*s - epsG1epsG3*epsG2epsPsi*epsG4k3*s - epsG1epsG3*epsG2epsG4*epsPsik4*s - 4*epsG1k2*epsG3k1*abbr[38] + 4*epsG1k4*epsG3k1*abbr[190];
	 abbr[192]=abbr[191]*pow(MC,0.5)*pow(abbr[18],-1)*pow(abbr[40],-1)*pow(abbr[189],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[193]=-(epsG2k1*epsG4epsPsi) + epsG2k3*epsG4epsPsi + epsG2k4*epsG4epsPsi + epsG2epsPsi*epsG4k2 - epsG2epsG4*epsPsik2;
	 abbr[194]=4*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi - 4*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 + 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 + 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 + 4*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 - 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 + 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 - 4*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 - 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 + 4*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 - 4*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 - 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 + 4*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 - 4*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 - 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 - 4*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 + 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 + 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 - 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k1k4 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k2k3 - 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k3 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k2k3 + 2*epsG1epsG3*epsG2epsPsi*epsG4k3*k2k3 + 2*epsG1epsG3*epsG2epsG4*epsPsik4*k2k3 - 4*epsG1k3*epsG2epsPsi*epsG3epsG4*k2k4 + 4*epsG1k3*epsG2epsG4*epsG3epsPsi*k2k4 + 4*epsG1epsPsi*epsG2epsG4*epsG3k1*k2k4 - 4*epsG1epsG4*epsG2epsPsi*epsG3k1*k2k4 - 4*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k4 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k2k4 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k2k4 - 4*epsG1epsG2*epsG3k1*epsG4epsPsi*k2k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k3*k2k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k2k4 - 4*epsG1epsG3*epsG2epsG4*epsPsik3*k2k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik4*k2k4 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k3k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k3k4 - epsG1epsG3*epsG2k4*epsG4epsPsi*s - epsG1epsG3*epsG2epsPsi*epsG4k1*s - epsG1epsG3*epsG2epsPsi*epsG4k2*s + epsG1epsG3*epsG2epsPsi*epsG4k3*s + epsG1epsG3*epsG2epsG4*epsPsik4*s + 4*epsG1k2*epsG3k1*abbr[38] + 4*epsG1k4*epsG3k1*abbr[193];
	 abbr[195]=abbr[194]*pow(MC,0.5)*pow(abbr[18],-1)*pow(abbr[40],-1)*pow(abbr[189],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[196]=epsG2k4*epsG4epsPsi - epsG2epsG4*epsPsik4 + epsG2epsPsi*abbr[179];
	 abbr[197]=-4*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi - 4*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 + 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 + 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 + 4*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 - 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 + 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 - 4*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 - 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 + 4*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 - 4*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 - 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 + 4*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 - 4*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 - 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 + 4*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 - 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 - 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 - 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k1k4 + 4*epsG1k3*epsG2epsPsi*epsG3epsG4*k2k3 + 4*epsG1k3*epsG2epsG4*epsG3epsPsi*k2k3 + 4*epsG1epsPsi*epsG2epsG4*epsG3k1*k2k3 + 4*epsG1epsG4*epsG2epsPsi*epsG3k1*k2k3 - 4*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k3 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k2k3 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k2k3 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k2k3 - 4*epsG1epsG2*epsG3k1*epsG4epsPsi*k2k3 - 4*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k3 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k2k3 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k2k3 - 4*epsG1epsG3*epsG2epsG4*epsPsik3*k2k3 - 4*epsG1epsG3*epsG2epsG4*epsPsik4*k2k3 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k3k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k3k4 - 2*epsG1k3*epsG2epsPsi*epsG3epsG4*s - 2*epsG1k3*epsG2epsG4*epsG3epsPsi*s - 2*epsG1epsPsi*epsG2epsG4*epsG3k1*s - 2*epsG1epsG4*epsG2epsPsi*epsG3k1*s + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*s - epsG1epsG3*epsG2k1*epsG4epsPsi*s - epsG1epsG3*epsG2k3*epsG4epsPsi*s + epsG1epsG3*epsG2k4*epsG4epsPsi*s + 2*epsG1epsG2*epsG3k1*epsG4epsPsi*s + epsG1epsG3*epsG2epsPsi*epsG4k2*s + 2*epsG1epsG3*epsG2epsPsi*epsG4k3*s - epsG1epsG3*epsG2epsG4*epsPsik2*s + 2*epsG1epsG3*epsG2epsG4*epsPsik3*s + 4*epsG1k4*epsG3k1*abbr[193] - 4*epsG1k2*epsG3k1*abbr[196];
	 abbr[198]=abbr[197]*pow(MC,0.5)*pow(abbr[18],-1)*pow(abbr[95],-1)*pow(abbr[189],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[199]=4*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi + 4*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 - 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 - 4*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 + 4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 - 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 + 4*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 + 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 4*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 + 4*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 + 4*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 - 4*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 + 4*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 + 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 - 4*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 + 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 + 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 + 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k1k4 - 4*epsG1k3*epsG2epsPsi*epsG3epsG4*k2k3 - 4*epsG1k3*epsG2epsG4*epsG3epsPsi*k2k3 - 4*epsG1epsPsi*epsG2epsG4*epsG3k1*k2k3 - 4*epsG1epsG4*epsG2epsPsi*epsG3k1*k2k3 + 4*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k3 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k2k3 - 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k2k3 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k2k3 + 4*epsG1epsG2*epsG3k1*epsG4epsPsi*k2k3 + 4*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k3 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k2k3 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k2k3 + 4*epsG1epsG3*epsG2epsG4*epsPsik3*k2k3 + 4*epsG1epsG3*epsG2epsG4*epsPsik4*k2k3 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k3k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k3k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k3k4 + 2*epsG1k3*epsG2epsPsi*epsG3epsG4*s + 2*epsG1k3*epsG2epsG4*epsG3epsPsi*s + 2*epsG1epsPsi*epsG2epsG4*epsG3k1*s + 2*epsG1epsG4*epsG2epsPsi*epsG3k1*s - 2*epsG1k3*epsG2epsG3*epsG4epsPsi*s + epsG1epsG3*epsG2k1*epsG4epsPsi*s + epsG1epsG3*epsG2k3*epsG4epsPsi*s - epsG1epsG3*epsG2k4*epsG4epsPsi*s - 2*epsG1epsG2*epsG3k1*epsG4epsPsi*s - epsG1epsG3*epsG2epsPsi*epsG4k2*s - 2*epsG1epsG3*epsG2epsPsi*epsG4k3*s + epsG1epsG3*epsG2epsG4*epsPsik2*s - 2*epsG1epsG3*epsG2epsG4*epsPsik3*s + 4*epsG1k4*epsG3k1*abbr[190] + 4*epsG1k2*epsG3k1*abbr[196];
};
