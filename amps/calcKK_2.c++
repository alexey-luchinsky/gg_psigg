#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_2() {
	 abbr[20]=abbr[17]*pow(MC,0.5)*pow(abbr[18],-1)*pow(abbr[19],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[21]=2*epsG1k2*epsG2epsPsi*epsG3epsG4 + epsG1epsG4*epsG2k1*epsG3epsPsi - epsG1epsG4*epsG2k3*epsG3epsPsi - epsG1epsG4*epsG2k4*epsG3epsPsi - epsG1epsG4*epsG2epsPsi*epsG3k2 + epsG1epsG3*epsG2k1*epsG4epsPsi - epsG1epsG3*epsG2k3*epsG4epsPsi - epsG1epsG3*epsG2k4*epsG4epsPsi - epsG1epsG3*epsG2epsPsi*epsG4k2 + epsG1epsG4*epsG2epsG3*epsPsik2 + epsG1epsG3*epsG2epsG4*epsPsik2 - 2*epsG1epsG2*epsG3epsG4*epsPsik2 + 2*epsG1epsPsi*epsG3epsG4*abbr[16];
	 abbr[22]=abbr[21]*pow(MC,0.5)*pow(abbr[18],-1)*pow(abbr[19],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[23]=epsG1k2*epsG2epsPsi*epsG3epsG4 + 2*epsG1epsG4*epsG2k1*epsG3epsPsi - 2*epsG1epsG4*epsG2k3*epsG3epsPsi - 2*epsG1epsG4*epsG2k4*epsG3epsPsi - 2*epsG1epsG4*epsG2epsPsi*epsG3k2 - epsG1epsG3*epsG2k1*epsG4epsPsi + epsG1epsG3*epsG2k3*epsG4epsPsi + epsG1epsG3*epsG2k4*epsG4epsPsi + epsG1epsG3*epsG2epsPsi*epsG4k2 + 2*epsG1epsG4*epsG2epsG3*epsPsik2 - epsG1epsG3*epsG2epsG4*epsPsik2 - epsG1epsG2*epsG3epsG4*epsPsik2 + epsG1epsPsi*epsG3epsG4*abbr[16];
	 abbr[24]=abbr[23]*pow(MC,0.5)*pow(abbr[18],-1)*pow(abbr[19],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[25]=epsG3k1 + epsG3k2 - epsG3k4;
	 abbr[26]=epsG2k3*epsG3epsPsi - epsG2epsG3*epsPsik3 + epsG2epsPsi*abbr[25];
	 abbr[27]=2*epsG1k3*epsG2epsG4*epsG3epsPsi + 2*epsG1epsPsi*epsG2epsG4*epsG3k1 + 2*epsG1epsPsi*epsG2epsG4*epsG3k2 - 2*epsG1epsPsi*epsG2epsG4*epsG3k4 - epsG1epsG2*epsG3k1*epsG4epsPsi - epsG1epsG2*epsG3k2*epsG4epsPsi + epsG1epsG2*epsG3k4*epsG4epsPsi - epsG1epsG2*epsG3epsPsi*epsG4k3 - 2*epsG1epsG3*epsG2epsG4*epsPsik3 + epsG1epsG2*epsG3epsG4*epsPsik3 - epsG1epsG4*abbr[26];
	 abbr[28]=k1k3 + k2k3 - k3k4;
	 abbr[29]=k1k3 + k2k3 - k3k4 + 2*pow(MC,2);
};
