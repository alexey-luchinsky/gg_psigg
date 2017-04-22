#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_9() {
	 abbr[90]=abbr[89]*pow(k3k4,-1)*pow(abbr[3],-1)*pow(abbr[85],-1)*pow(pow(MC,-1),-0.5);
	 abbr[91]=-4*epsG2k4*epsG3k4*epsG4epsPsi - 4*epsG2epsPsi*epsG3k4*epsG4k2 + 4*epsG2k4*epsG3epsPsi*epsG4k3 + 4*epsG2epsPsi*epsG3k2*epsG4k3 + 4*epsG2epsG4*epsG3k4*epsPsik2 - 4*epsG2epsG3*epsG4k3*epsPsik2 - 4*epsG2k4*epsG3epsG4*epsPsik3 - 2*epsG2epsPsi*epsG3epsG4*k2k3 + 2*epsG2epsPsi*epsG3epsG4*k2k4 - epsG2epsPsi*epsG3epsG4*s + 4*epsG2k1*abbr[78] - 4*epsG2k3*abbr[87];
	 abbr[92]=-4*epsG2k4*epsG3k4*epsG4epsPsi - 4*epsG2epsPsi*epsG3k4*epsG4k2 + 4*epsG2k4*epsG3epsPsi*epsG4k3 + 4*epsG2epsPsi*epsG3k2*epsG4k3 - 4*epsG2k4*epsG3epsG4*epsPsik2 + 4*epsG2epsG4*epsG3k4*epsPsik2 - 4*epsG2epsG3*epsG4k3*epsPsik2 + 4*epsG2k4*epsG3epsG4*epsPsik4 - 2*epsG2epsPsi*epsG3epsG4*k2k3 + 2*epsG2epsPsi*epsG3epsG4*k2k4 + epsG2epsPsi*epsG3epsG4*s + 4*epsG2k1*abbr[79] + 4*epsG2k3*abbr[82];
	 abbr[93]=4*epsG1k2*epsG2k3*epsG3k4*epsG4epsPsi + 4*epsG1k2*epsG2k4*epsG3k4*epsG4epsPsi - 4*epsG1k2*epsG2epsPsi*epsG3k4*epsG4k1 + 4*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k1 - 4*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 + 4*epsG1k2*epsG2epsPsi*epsG3k4*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 - 4*epsG1k2*epsG2k3*epsG3epsPsi*epsG4k3 - 4*epsG1k2*epsG2k4*epsG3epsPsi*epsG4k3 + 4*epsG1k2*epsG2epsPsi*epsG3k1*epsG4k3 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 - 4*epsG1k2*epsG2epsPsi*epsG3k2*epsG4k3 + 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 - 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 + 4*epsG1epsG2*epsG3k4*epsG4k1*epsPsik2 - 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 + 4*epsG1k2*epsG2k4*epsG3epsG4*epsPsik3 - 4*epsG1k2*epsG2epsG4*epsG3k4*epsPsik3 - 4*epsG1epsG4*epsG2k1*epsG3k4*epsPsik3 + 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 + 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 + 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 + 4*epsG1k2*epsG2epsG3*epsG4k3*epsPsik3 + 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 - 4*epsG1k2*epsG2k3*epsG3epsG4*epsPsik4 - 4*epsG1k2*epsG2epsG4*epsG3k4*epsPsik4 - 4*epsG1epsG4*epsG2k1*epsG3k4*epsPsik4 + 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 + 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 + 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 + 4*epsG1k2*epsG2epsG3*epsG4k3*epsPsik4 + 4*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - 4*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 - 2*epsG1k2*epsG2epsPsi*epsG3epsG4*k1k3 + 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k1k3 - 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k3 - 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 + 2*epsG1epsG2*epsG3epsG4*epsPsik2*k1k3 + 2*epsG1k2*epsG2epsPsi*epsG3epsG4*k1k4 - 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k1k4 + 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 + 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik2*k1k4 + 2*epsG1k2*epsG2epsPsi*epsG3epsG4*k2k3 - 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k3 - 2*epsG1epsG2*epsG3epsG4*epsPsik2*k2k3 + 2*epsG1epsG2*epsG3epsG4*epsPsik3*k2k3 + 2*epsG1epsG2*epsG3epsG4*epsPsik4*k2k3 - 2*epsG1k2*epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k4 + 2*epsG1epsG2*epsG3epsG4*epsPsik2*k2k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik3*k2k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik4*k2k4 + epsG1epsPsi*epsG2k3*epsG3epsG4*s - epsG1epsPsi*epsG2k4*epsG3epsG4*s + 2*epsG1epsPsi*epsG2epsG4*epsG3k4*s + 2*epsG1epsG4*epsG2epsPsi*epsG3k4*s - 2*epsG1epsG2*epsG3k4*epsG4epsPsi*s - 2*epsG1epsPsi*epsG2epsG3*epsG4k3*s - 2*epsG1epsG3*epsG2epsPsi*epsG4k3*s + 2*epsG1epsG2*epsG3epsPsi*epsG4k3*s - epsG1epsG2*epsG3epsG4*epsPsik3*s + epsG1epsG2*epsG3epsG4*epsPsik4*s + epsG1k4*abbr[91] + epsG1k3*abbr[92];
	 abbr[94]=abbr[93]*pow(k3k4,-1)*pow(abbr[3],-1)*pow(abbr[85],-1)*pow(pow(MC,-1),-0.5);
	 abbr[95]=2*k1k4 + 2*k2k3 - 2*k3k4 - s;
	 abbr[96]=epsG3k1*epsG4epsPsi - epsG3k2*epsG4epsPsi + epsG3k4*epsG4epsPsi - epsG3epsPsi*epsG4k3 + epsG3epsG4*epsPsik3;
	 abbr[97]=epsG3k1*epsG4epsPsi + epsG3k4*epsG4epsPsi - epsG3epsPsi*epsG4k2 - epsG3epsPsi*epsG4k3 - epsG3epsG4*epsPsik2 + epsG3epsG4*epsPsik3;
	 abbr[98]=epsG2k4*epsG3k1*epsG4epsPsi - epsG2k4*epsG3k2*epsG4epsPsi + epsG2k4*epsG3k4*epsG4epsPsi + epsG2epsPsi*epsG3k1*epsG4k2 - epsG2epsPsi*epsG3k2*epsG4k2 + epsG2epsPsi*epsG3k4*epsG4k2 - epsG2k4*epsG3epsPsi*epsG4k3 - epsG2epsPsi*epsG3k2*epsG4k3 - epsG2epsG4*epsG3k1*epsPsik2 + epsG2epsG4*epsG3k2*epsPsik2 - epsG2epsG4*epsG3k4*epsPsik2 + epsG2epsG3*epsG4k3*epsPsik2 + epsG2k4*epsG3epsG4*epsPsik3 - epsG2epsG4*epsG3k2*epsPsik3 + epsG2epsG3*epsG4k2*epsPsik3 + epsG2epsPsi*epsG3epsG4*k2k3 + epsG2epsG4*epsG3epsPsi*k2k3 - epsG2epsG3*epsG4epsPsi*k2k3 - epsG2k1*abbr[96] + epsG2k3*abbr[97];
	 abbr[99]=-epsG4k1 + epsG4k2 + epsG4k3;
};
