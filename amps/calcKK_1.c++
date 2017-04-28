#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_1() {
	 abbr[10]=epsG1k4*epsG2epsPsi*epsG3epsG4 + epsG1epsPsi*epsG2k1*epsG3epsG4 + epsG1k4*epsG2epsG4*epsG3epsPsi + epsG1epsPsi*epsG2epsG4*epsG3k1 - 2*epsG1k4*epsG2epsG3*epsG4epsPsi - 2*epsG1epsPsi*epsG2epsG3*epsG4k1 - 2*epsG1epsG4*epsG2epsG3*epsPsik2 + epsG1epsG3*epsG2epsG4*epsPsik2 + epsG1epsG2*epsG3epsG4*epsPsik2 + 2*epsG1epsG4*epsG2epsG3*epsPsik3 - epsG1epsG3*epsG2epsG4*epsPsik3 - epsG1epsG2*epsG3epsG4*epsPsik3 + 2*epsG1epsG4*epsG2epsG3*epsPsik4 - epsG1epsG3*epsG2epsG4*epsPsik4 - epsG1epsG2*epsG3epsG4*epsPsik4 - epsG1k2*abbr[9] + epsG1k3*abbr[9];
	 abbr[11]=abbr[10]*pow(MC,0.5)*pow(abbr[2],-1)*pow(abbr[3],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[12]=2*k1k3 + 2*k1k4 - s;
	 abbr[13]=abbr[1]*pow(MC,0.5)*pow(abbr[2],-1)*pow(abbr[12],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[14]=abbr[7]*pow(MC,0.5)*pow(abbr[2],-1)*pow(abbr[12],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[15]=abbr[10]*pow(MC,0.5)*pow(abbr[2],-1)*pow(abbr[12],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[16]=-epsG2k1 + epsG2k3 + epsG2k4;
	 abbr[17]=epsG1k2*epsG2epsPsi*epsG3epsG4 - epsG1epsG4*epsG2k1*epsG3epsPsi + epsG1epsG4*epsG2k3*epsG3epsPsi + epsG1epsG4*epsG2k4*epsG3epsPsi + epsG1epsG4*epsG2epsPsi*epsG3k2 + 2*epsG1epsG3*epsG2k1*epsG4epsPsi - 2*epsG1epsG3*epsG2k3*epsG4epsPsi - 2*epsG1epsG3*epsG2k4*epsG4epsPsi - 2*epsG1epsG3*epsG2epsPsi*epsG4k2 - epsG1epsG4*epsG2epsG3*epsPsik2 + 2*epsG1epsG3*epsG2epsG4*epsPsik2 - epsG1epsG2*epsG3epsG4*epsPsik2 + epsG1epsPsi*epsG3epsG4*abbr[16];
	 abbr[18]=2*k2k3 + 2*k2k4 - s;
	 abbr[19]=2*k2k3 + 2*k2k4 - s + 4*pow(MC,2);
};
