#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_3() {
	 abbr[30]=abbr[27]*pow(abbr[28],-1)*pow(abbr[29],-1)*pow(pow(MC,-1),-0.5);
	 abbr[31]=epsG1k3*epsG2epsG4*epsG3epsPsi + epsG1epsPsi*epsG2epsG4*epsG3k1 + epsG1epsPsi*epsG2epsG4*epsG3k2 - epsG1epsPsi*epsG2epsG4*epsG3k4 - 2*epsG1epsG2*epsG3k1*epsG4epsPsi - 2*epsG1epsG2*epsG3k2*epsG4epsPsi + 2*epsG1epsG2*epsG3k4*epsG4epsPsi - 2*epsG1epsG2*epsG3epsPsi*epsG4k3 - epsG1epsG3*epsG2epsG4*epsPsik3 + 2*epsG1epsG2*epsG3epsG4*epsPsik3 + epsG1epsG4*abbr[26];
	 abbr[32]=abbr[31]*pow(abbr[28],-1)*pow(abbr[29],-1)*pow(pow(MC,-1),-0.5);
	 abbr[33]=epsG1k3*epsG2epsG4*epsG3epsPsi + epsG1epsPsi*epsG2epsG4*epsG3k1 + epsG1epsPsi*epsG2epsG4*epsG3k2 - epsG1epsPsi*epsG2epsG4*epsG3k4 + epsG1epsG2*epsG3k1*epsG4epsPsi + epsG1epsG2*epsG3k2*epsG4epsPsi - epsG1epsG2*epsG3k4*epsG4epsPsi + epsG1epsG2*epsG3epsPsi*epsG4k3 - epsG1epsG3*epsG2epsG4*epsPsik3 - epsG1epsG2*epsG3epsG4*epsPsik3 - 2*epsG1epsG4*abbr[26];
	 abbr[34]=abbr[33]*pow(abbr[28],-1)*pow(abbr[29],-1)*pow(pow(MC,-1),-0.5);
	 abbr[35]=2*epsG1k3*epsG2epsG4*epsG3epsPsi + 2*epsG1epsPsi*epsG2epsG4*epsG3k1 + 2*epsG1epsPsi*epsG2epsG4*epsG3k2 - 2*epsG1epsPsi*epsG2epsG4*epsG3k4 - epsG1epsG2*epsG3k1*epsG4epsPsi - epsG1epsG2*epsG3k2*epsG4epsPsi + epsG1epsG2*epsG3k4*epsG4epsPsi - epsG1epsG2*epsG3epsPsi*epsG4k3 - 2*epsG1epsG3*epsG2epsG4*epsPsik3 + epsG1epsG2*epsG3epsG4*epsPsik3 - epsG1epsG4*abbr[26];
	 abbr[36]=abbr[35]*pow(abbr[28],-1)*pow(abbr[29],-1)*pow(pow(MC,-1),-0.5);
	 abbr[37]=epsG4k1 + epsG4k2 - epsG4k3;
	 abbr[38]=epsG2k4*epsG4epsPsi - epsG2epsG4*epsPsik4 + epsG2epsPsi*abbr[37];
	 abbr[39]=epsG1k4*epsG2epsG3*epsG4epsPsi + epsG1epsG2*epsG3k4*epsG4epsPsi + epsG1epsPsi*epsG2epsG3*epsG4k1 + epsG1epsG2*epsG3epsPsi*epsG4k1 + epsG1epsPsi*epsG2epsG3*epsG4k2 + epsG1epsG2*epsG3epsPsi*epsG4k2 - epsG1epsPsi*epsG2epsG3*epsG4k3 - epsG1epsG2*epsG3epsPsi*epsG4k3 - epsG1epsG4*epsG2epsG3*epsPsik4 - epsG1epsG2*epsG3epsG4*epsPsik4 - 2*epsG1epsG3*abbr[38];
};
