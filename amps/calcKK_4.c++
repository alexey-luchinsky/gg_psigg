#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_4() {
	 abbr[40]=k1k4 + k2k4 - k3k4;
	 abbr[41]=k1k4 + k2k4 - k3k4 + 2*pow(MC,2);
	 abbr[42]=abbr[39]*pow(MC,0.5)*pow(6*PI,-0.5)*pow(abbr[40],-1)*pow(abbr[41],-1);
	 abbr[43]=epsG1k4*epsG2epsG3*epsG4epsPsi - 2*epsG1epsG2*epsG3k4*epsG4epsPsi + epsG1epsPsi*epsG2epsG3*epsG4k1 - 2*epsG1epsG2*epsG3epsPsi*epsG4k1 + epsG1epsPsi*epsG2epsG3*epsG4k2 - 2*epsG1epsG2*epsG3epsPsi*epsG4k2 - epsG1epsPsi*epsG2epsG3*epsG4k3 + 2*epsG1epsG2*epsG3epsPsi*epsG4k3 - epsG1epsG4*epsG2epsG3*epsPsik4 + 2*epsG1epsG2*epsG3epsG4*epsPsik4 + epsG1epsG3*abbr[38];
	 abbr[44]=abbr[43]*pow(MC,0.5)*pow(6*PI,-0.5)*pow(abbr[40],-1)*pow(abbr[41],-1);
	 abbr[45]=2*epsG1k4*epsG2epsG3*epsG4epsPsi - epsG1epsG2*epsG3k4*epsG4epsPsi + 2*epsG1epsPsi*epsG2epsG3*epsG4k1 - epsG1epsG2*epsG3epsPsi*epsG4k1 + 2*epsG1epsPsi*epsG2epsG3*epsG4k2 - epsG1epsG2*epsG3epsPsi*epsG4k2 - 2*epsG1epsPsi*epsG2epsG3*epsG4k3 + epsG1epsG2*epsG3epsPsi*epsG4k3 - 2*epsG1epsG4*epsG2epsG3*epsPsik4 + epsG1epsG2*epsG3epsG4*epsPsik4 - epsG1epsG3*abbr[38];
	 abbr[46]=abbr[45]*pow(MC,0.5)*pow(6*PI,-0.5)*pow(abbr[40],-1)*pow(abbr[41],-1);
	 abbr[47]=-2*epsG1k4*epsG2epsG3*epsG4epsPsi + epsG1epsG2*epsG3k4*epsG4epsPsi - 2*epsG1epsPsi*epsG2epsG3*epsG4k1 + epsG1epsG2*epsG3epsPsi*epsG4k1 - 2*epsG1epsPsi*epsG2epsG3*epsG4k2 + epsG1epsG2*epsG3epsPsi*epsG4k2 + 2*epsG1epsPsi*epsG2epsG3*epsG4k3 - epsG1epsG2*epsG3epsPsi*epsG4k3 + 2*epsG1epsG4*epsG2epsG3*epsPsik4 - epsG1epsG2*epsG3epsG4*epsPsik4 + epsG1epsG3*abbr[38];
	 abbr[48]=abbr[47]*pow(MC,0.5)*pow(6*PI,-0.5)*pow(abbr[40],-1)*pow(abbr[41],-1);
	 abbr[49]=-k1k4 - k2k4 + k3k4;
};
