#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_0() {
	 abbr[0]=epsG2epsPsi*epsG3epsG4 - 2*epsG2epsG4*epsG3epsPsi + epsG2epsG3*epsG4epsPsi;
	 abbr[1]=epsG1k4*epsG2epsPsi*epsG3epsG4 + epsG1epsPsi*epsG2k1*epsG3epsG4 - 2*epsG1k4*epsG2epsG4*epsG3epsPsi - 2*epsG1epsPsi*epsG2epsG4*epsG3k1 + epsG1k4*epsG2epsG3*epsG4epsPsi + epsG1epsPsi*epsG2epsG3*epsG4k1 + epsG1epsG4*epsG2epsG3*epsPsik2 - 2*epsG1epsG3*epsG2epsG4*epsPsik2 + epsG1epsG2*epsG3epsG4*epsPsik2 - epsG1epsG4*epsG2epsG3*epsPsik3 + 2*epsG1epsG3*epsG2epsG4*epsPsik3 - epsG1epsG2*epsG3epsG4*epsPsik3 - epsG1epsG4*epsG2epsG3*epsPsik4 + 2*epsG1epsG3*epsG2epsG4*epsPsik4 - epsG1epsG2*epsG3epsG4*epsPsik4 - epsG1k2*abbr[0] + epsG1k3*abbr[0];
	 abbr[2]=k2k3 + k2k4 - k3k4;
	 abbr[3]=2*k1k3 + 2*k1k4 - s;
	 abbr[4]=abbr[1]*pow(abbr[2],-1)*pow(abbr[3],-1)*pow(pow(MC,-1),-0.5);
	 abbr[5]=2*epsG2epsPsi*epsG3epsG4 - epsG2epsG4*epsG3epsPsi - epsG2epsG3*epsG4epsPsi;
	 abbr[6]=-2*epsG2epsPsi*epsG3epsG4 + epsG2epsG4*epsG3epsPsi + epsG2epsG3*epsG4epsPsi;
	 abbr[7]=-2*epsG1k4*epsG2epsPsi*epsG3epsG4 - 2*epsG1epsPsi*epsG2k1*epsG3epsG4 + epsG1k4*epsG2epsG4*epsG3epsPsi + epsG1epsPsi*epsG2epsG4*epsG3k1 + epsG1k4*epsG2epsG3*epsG4epsPsi + epsG1epsPsi*epsG2epsG3*epsG4k1 + epsG1epsG4*epsG2epsG3*epsPsik2 + epsG1epsG3*epsG2epsG4*epsPsik2 - 2*epsG1epsG2*epsG3epsG4*epsPsik2 - epsG1epsG4*epsG2epsG3*epsPsik3 - epsG1epsG3*epsG2epsG4*epsPsik3 + 2*epsG1epsG2*epsG3epsG4*epsPsik3 - epsG1epsG4*epsG2epsG3*epsPsik4 - epsG1epsG3*epsG2epsG4*epsPsik4 + 2*epsG1epsG2*epsG3epsG4*epsPsik4 + epsG1k2*abbr[5] + epsG1k3*abbr[6];
	 abbr[8]=abbr[7]*pow(abbr[2],-1)*pow(abbr[3],-1)*pow(pow(MC,-1),-0.5);
	 abbr[9]=epsG2epsPsi*epsG3epsG4 + epsG2epsG4*epsG3epsPsi - 2*epsG2epsG3*epsG4epsPsi;
};
