#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_17() {
	 abbr[170]=-8*epsG2epsPsi*epsG3k4*epsG4k2 + 8*epsG2epsPsi*epsG3k2*epsG4k3 + 8*epsG2epsG4*epsG3k4*epsPsik3 - 8*epsG2epsG3*epsG4k3*epsPsik3 + 8*epsG2epsG4*epsG3k4*epsPsik4 - 8*epsG2epsG3*epsG4k3*epsPsik4 - 4*epsG2epsPsi*epsG3epsG4*k2k3 + 4*epsG2epsPsi*epsG3epsG4*k2k4 - 8*epsG2k4*abbr[78] + 8*epsG2k3*abbr[79];
	 abbr[171]=8*epsG1k4*epsG2k3*epsG3k4*epsG4epsPsi + 8*epsG1k4*epsG2k4*epsG3k4*epsG4epsPsi + 8*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 + 8*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 + 8*epsG1k4*epsG2epsPsi*epsG3k4*epsG4k2 + 8*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 - 8*epsG1k4*epsG2k3*epsG3epsPsi*epsG4k3 - 8*epsG1k4*epsG2k4*epsG3epsPsi*epsG4k3 - 8*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 8*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 - 8*epsG1k4*epsG2epsPsi*epsG3k2*epsG4k3 - 8*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 - 8*epsG1k4*epsG2k3*epsG3epsG4*epsPsik2 - 8*epsG1k4*epsG2epsG4*epsG3k4*epsPsik2 + 8*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 + 8*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 + 8*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 + 8*epsG1k4*epsG2epsG3*epsG4k3*epsPsik2 - 8*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 8*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 8*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 + 8*epsG1k4*epsG2k3*epsG3epsG4*epsPsik3 + 8*epsG1k4*epsG2k4*epsG3epsG4*epsPsik3 - 8*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 - 8*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 - 8*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 + 8*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 8*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 + 8*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 - 8*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 - 8*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 - 8*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 + 8*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 8*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 + 8*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 + 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k3 + 6*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 - 4*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k3 + 4*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k3 - 6*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 - 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k4 - 4*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k4 + 4*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k4 + 4*epsG1k4*epsG2epsPsi*epsG3epsG4*k2k3 + 4*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k3 + 4*epsG1epsG2*epsG3epsG4*epsPsik2*k2k3 - 4*epsG1epsG2*epsG3epsG4*epsPsik3*k2k3 - 4*epsG1epsG2*epsG3epsG4*epsPsik4*k2k3 - 4*epsG1k4*epsG2epsPsi*epsG3epsG4*k2k4 - 4*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k4 - 4*epsG1epsG2*epsG3epsG4*epsPsik2*k2k4 + 4*epsG1epsG2*epsG3epsG4*epsPsik3*k2k4 + 4*epsG1epsG2*epsG3epsG4*epsPsik4*k2k4 - epsG1epsPsi*epsG2k3*epsG3epsG4*s + epsG1epsPsi*epsG2k4*epsG3epsG4*s - 2*epsG1epsPsi*epsG2epsG4*epsG3k4*s + 2*epsG1epsPsi*epsG2epsG3*epsG4k3*s + 4*epsG1k3*abbr[169] + epsG1k2*abbr[170];
	 abbr[172]=abbr[171]*pow(k3k4,-1)*pow(MC,0.5)*pow(6*PI,-0.5)*pow(abbr[2],-1)*pow(abbr[12],-1);
	 abbr[173]=2*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG2epsPsi*epsG3k2*epsG4k3 - 2*epsG2epsG4*epsG3k4*epsPsik3 + 2*epsG2epsG3*epsG4k3*epsPsik3 - 2*epsG2epsG4*epsG3k4*epsPsik4 + 2*epsG2epsG3*epsG4k3*epsPsik4 + epsG2epsPsi*epsG3epsG4*k2k3 - epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG2k4*abbr[78] + 2*epsG2k3*abbr[82];
	 abbr[174]=-8*epsG2epsPsi*epsG3k4*epsG4k2 + 8*epsG2epsPsi*epsG3k2*epsG4k3 + 8*epsG2epsG4*epsG3k4*epsPsik2 - 8*epsG2epsG3*epsG4k3*epsPsik2 - 4*epsG2epsPsi*epsG3epsG4*k2k3 + 4*epsG2epsPsi*epsG3epsG4*k2k4 + 8*epsG2k3*abbr[79] - 8*epsG2k4*abbr[168];
	 abbr[175]=-8*epsG1k4*epsG2k3*epsG3k4*epsG4epsPsi - 8*epsG1k4*epsG2k4*epsG3k4*epsG4epsPsi - 8*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 - 8*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 - 8*epsG1k4*epsG2epsPsi*epsG3k4*epsG4k2 - 8*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 + 8*epsG1k4*epsG2k3*epsG3epsPsi*epsG4k3 + 8*epsG1k4*epsG2k4*epsG3epsPsi*epsG4k3 + 8*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + 8*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 8*epsG1k4*epsG2epsPsi*epsG3k2*epsG4k3 + 8*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 + 8*epsG1k4*epsG2k3*epsG3epsG4*epsPsik2 + 8*epsG1k4*epsG2epsG4*epsG3k4*epsPsik2 - 8*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 - 8*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 - 8*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - 8*epsG1k4*epsG2epsG3*epsG4k3*epsPsik2 + 8*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + 8*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 + 8*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 - 8*epsG1k4*epsG2k3*epsG3epsG4*epsPsik3 - 8*epsG1k4*epsG2k4*epsG3epsG4*epsPsik3 + 8*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 + 8*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 + 8*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 - 8*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - 8*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 8*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 + 8*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 + 8*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 + 8*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 - 8*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - 8*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 8*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 - 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k3 - 6*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 + 4*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k3 - 4*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k3 + 6*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 + 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k4 + 4*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k4 - 4*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k4 - 4*epsG1k4*epsG2epsPsi*epsG3epsG4*k2k3 - 4*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k3 - 4*epsG1epsG2*epsG3epsG4*epsPsik2*k2k3 + 4*epsG1epsG2*epsG3epsG4*epsPsik3*k2k3 + 4*epsG1epsG2*epsG3epsG4*epsPsik4*k2k3 + 4*epsG1k4*epsG2epsPsi*epsG3epsG4*k2k4 + 4*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k4 + 4*epsG1epsG2*epsG3epsG4*epsPsik2*k2k4 - 4*epsG1epsG2*epsG3epsG4*epsPsik3*k2k4 - 4*epsG1epsG2*epsG3epsG4*epsPsik4*k2k4 + epsG1epsPsi*epsG2k3*epsG3epsG4*s - epsG1epsPsi*epsG2k4*epsG3epsG4*s + 2*epsG1epsPsi*epsG2epsG4*epsG3k4*s - 2*epsG1epsPsi*epsG2epsG3*epsG4k3*s + 4*epsG1k2*abbr[173] + epsG1k3*abbr[174];
	 abbr[176]=abbr[175]*pow(k3k4,-1)*pow(MC,0.5)*pow(6*PI,-0.5)*pow(abbr[2],-1)*pow(abbr[12],-1);
	 abbr[177]=epsG3k1*epsG4epsPsi + epsG3k4*epsG4epsPsi - epsG3epsPsi*epsG4k2 - epsG3epsPsi*epsG4k3 - epsG3epsG4*epsPsik2 + epsG3epsG4*epsPsik3;
	 abbr[178]=epsG2k4*epsG3k1*epsG4epsPsi - epsG2k4*epsG3k2*epsG4epsPsi + epsG2k4*epsG3k4*epsG4epsPsi + epsG2epsPsi*epsG3k1*epsG4k2 - epsG2epsPsi*epsG3k2*epsG4k2 + epsG2epsPsi*epsG3k4*epsG4k2 - epsG2k4*epsG3epsPsi*epsG4k3 - epsG2epsPsi*epsG3k2*epsG4k3 - epsG2epsG4*epsG3k1*epsPsik2 + epsG2epsG4*epsG3k2*epsPsik2 - epsG2epsG4*epsG3k4*epsPsik2 + epsG2epsG3*epsG4k3*epsPsik2 + epsG2k4*epsG3epsG4*epsPsik3 - epsG2epsG4*epsG3k2*epsPsik3 + epsG2epsG3*epsG4k2*epsPsik3 + epsG2epsPsi*epsG3epsG4*k2k3 + epsG2epsG4*epsG3epsPsi*k2k3 - epsG2epsG3*epsG4epsPsi*k2k3 - epsG2k1*abbr[97] + epsG2k3*abbr[177];
	 abbr[179]=-epsG4k1 + epsG4k2 + epsG4k3;
};
