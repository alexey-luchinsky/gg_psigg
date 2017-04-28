#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_16() {
	 abbr[160]=epsG2epsPsi*epsG3k1*epsG4k1 - epsG2epsPsi*epsG3k2*epsG4k1 + epsG2epsPsi*epsG3k4*epsG4k1 + epsG2epsPsi*epsG3k1*epsG4k2 - epsG2epsPsi*epsG3k2*epsG4k2 + epsG2epsPsi*epsG3k4*epsG4k2 - epsG2epsPsi*epsG3k1*epsG4k3 + epsG2epsPsi*epsG3k2*epsG4k3 - epsG2epsG4*epsG3k4*epsPsik3 + epsG2epsG3*epsG4k1*epsPsik3 + epsG2epsG3*epsG4k2*epsPsik3 - epsG2epsG3*epsG4k3*epsPsik3 - epsG2epsG4*epsG3k1*epsPsik4 + epsG2epsG4*epsG3k2*epsPsik4 - epsG2epsG4*epsG3k4*epsPsik4 - epsG2epsG3*epsG4k3*epsPsik4 - epsG2epsPsi*epsG3epsG4*k3k4 + epsG2epsG4*epsG3epsPsi*k3k4 + epsG2epsG3*epsG4epsPsi*k3k4 - epsG2k3*abbr[51] + epsG2k4*abbr[97];
	 abbr[161]=2*epsG2k4*epsG3k1*epsG4epsPsi - 2*epsG2k4*epsG3k2*epsG4epsPsi + 2*epsG2k4*epsG3k4*epsG4epsPsi + 2*epsG2epsPsi*epsG3k1*epsG4k2 - 2*epsG2epsPsi*epsG3k2*epsG4k2 + 2*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG2k4*epsG3epsPsi*epsG4k3 + 2*epsG2epsPsi*epsG3k2*epsG4k3 - 2*epsG2epsG4*epsG3k1*epsPsik2 + 2*epsG2epsG4*epsG3k2*epsPsik2 - 2*epsG2epsG4*epsG3k4*epsPsik2 - 2*epsG2epsG3*epsG4k3*epsPsik2 + 2*epsG2k4*epsG3epsG4*epsPsik3 - 2*epsG2epsG4*epsG3k2*epsPsik3 + 2*epsG2epsG3*epsG4k2*epsPsik3 + 2*epsG2epsPsi*epsG3epsG4*k1k4 - 2*epsG2epsG4*epsG3epsPsi*k1k4 - 2*epsG2epsG3*epsG4epsPsi*k1k4 - 2*epsG2epsPsi*epsG3epsG4*k3k4 + 2*epsG2epsG4*epsG3epsPsi*k3k4 + 2*epsG2epsG3*epsG4epsPsi*k3k4 - epsG2epsPsi*epsG3epsG4*s + epsG2epsG4*epsG3epsPsi*s + epsG2epsG3*epsG4epsPsi*s + 2*epsG2k1*abbr[97] - 2*epsG2k3*abbr[114];
	 abbr[162]=-2*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi + 2*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi - 2*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi + 2*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi + 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 - 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 + 2*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 - 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 + 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 - 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 - 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k1 - 2*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k1 - 2*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 + 2*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 + 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 - 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 + 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 - 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 - 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 - 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 + 2*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 + 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 - 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 + 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 - 2*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 - 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 + 2*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 - 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 - 2*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 - 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 + 2*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 - 2*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 - 2*epsG1epsG2*epsG3k2*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k4*epsG4k1*epsPsik2 + 2*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 - 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 + 2*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 - 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 + 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - 2*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 2*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 - 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik3 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 - 2*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 + 2*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 - 2*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 + 2*epsG1epsG2*epsG3k2*epsG4k1*epsPsik3 - 2*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 + 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 + 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 + 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 - 2*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 + 2*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 - 2*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 + 2*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 - 2*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 + 2*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 + 2*epsG1epsG4*epsG2k1*epsG3k2*epsPsik4 + 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik4 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 - 2*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 + 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 - 2*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 + 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 + 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 + 2*epsG1k3*epsG2epsPsi*epsG3epsG4*k1k4 + 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 - 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k4 - 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k1k4 - 2*epsG1epsG4*epsG2k3*epsG3epsPsi*k1k4 + 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k1k4 - 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k1k4 + 2*epsG1epsG4*epsG2epsPsi*epsG3k1*k1k4 + 2*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k4 - 2*epsG1epsG4*epsG2epsPsi*epsG3k2*k1k4 - 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k1k4 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 - 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k4 - 2*epsG1epsG2*epsG3k1*epsG4epsPsi*k1k4 + 2*epsG1epsG2*epsG3k2*epsG4epsPsi*k1k4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k1k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k1k4 + 2*epsG1epsG2*epsG3epsPsi*epsG4k1*k1k4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k4 + 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k1k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik3*k1k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik3*k1k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik3*k1k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik4*k1k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik4*k1k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik4*k1k4 - 2*epsG1k3*epsG2epsPsi*epsG3epsG4*k3k4 - 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k3k4 + 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k3k4 + 2*epsG1epsG4*epsG2k1*epsG3epsPsi*k3k4 + 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k3k4 - 2*epsG1epsG4*epsG2epsPsi*epsG3k1*k3k4 + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k3k4 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k3k4 + 2*epsG1epsG2*epsG3k1*epsG4epsPsi*k3k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k3k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k3k4 - 2*epsG1epsG2*epsG3epsPsi*epsG4k1*k3k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k3k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik2*k3k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik2*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik3*k3k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik3*k3k4 + 2*epsG1epsG2*epsG3epsG4*epsPsik3*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik4*k3k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik4*k3k4 + 2*epsG1epsG2*epsG3epsG4*epsPsik4*k3k4 + epsG1epsPsi*epsG2k4*epsG3epsG4*s - epsG1epsG4*epsG2k4*epsG3epsPsi*s - epsG1epsPsi*epsG2epsG4*epsG3k4*s + epsG1epsG4*epsG2epsPsi*epsG3k4*s + epsG1epsG3*epsG2k4*epsG4epsPsi*s - epsG1epsG2*epsG3k4*epsG4epsPsi*s + epsG1epsPsi*epsG2epsG3*epsG4k1*s + epsG1epsG3*epsG2epsPsi*epsG4k1*s - epsG1epsG2*epsG3epsPsi*epsG4k1*s + epsG1epsPsi*epsG2epsG3*epsG4k2*s + epsG1epsG3*epsG2epsPsi*epsG4k2*s - epsG1epsG2*epsG3epsPsi*epsG4k2*s - epsG1epsPsi*epsG2epsG3*epsG4k3*s - epsG1epsG3*epsG2epsPsi*epsG4k3*s + epsG1epsG2*epsG3epsPsi*epsG4k3*s - epsG1epsG4*epsG2epsG3*epsPsik4*s - epsG1epsG3*epsG2epsG4*epsPsik4*s + epsG1epsG2*epsG3epsG4*epsPsik4*s - 2*epsG1k2*abbr[160] + epsG1k4*abbr[161];
	 abbr[163]=abbr[162]*pow(MC,0.5)*pow(abbr[12],-1)*pow(abbr[40],-1)*pow(abbr[95],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[164]=2*epsG2k4*epsG3k4*epsG4epsPsi + 2*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG2k4*epsG3epsPsi*epsG4k3 - 2*epsG2epsPsi*epsG3k2*epsG4k3 - 2*epsG2epsG4*epsG3k4*epsPsik2 + 2*epsG2epsG3*epsG4k3*epsPsik2 + 2*epsG2k4*epsG3epsG4*epsPsik3 - epsG2epsPsi*epsG3epsG4*k1k3 - epsG2epsPsi*epsG3epsG4*k1k4 + epsG2epsPsi*epsG3epsG4*k2k3 - epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG2k1*abbr[78] + 2*epsG2k3*abbr[86];
	 abbr[165]=2*epsG2k4*epsG3k4*epsG4epsPsi + 2*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG2k4*epsG3epsPsi*epsG4k3 - 2*epsG2epsPsi*epsG3k2*epsG4k3 + 2*epsG2k4*epsG3epsG4*epsPsik2 - 2*epsG2epsG4*epsG3k4*epsPsik2 + 2*epsG2epsG3*epsG4k3*epsPsik2 - 2*epsG2k4*epsG3epsG4*epsPsik4 + epsG2epsPsi*epsG3epsG4*k1k3 + epsG2epsPsi*epsG3epsG4*k1k4 + epsG2epsPsi*epsG3epsG4*k2k3 - epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG2k1*abbr[82] + 2*epsG2k3*abbr[82];
	 abbr[166]=-2*epsG1k2*epsG2k3*epsG3k4*epsG4epsPsi - 2*epsG1k2*epsG2k4*epsG3k4*epsG4epsPsi - 2*epsG1k2*epsG2epsPsi*epsG3k4*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k1 + 2*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 + 2*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 - 2*epsG1k2*epsG2epsPsi*epsG3k4*epsG4k2 + 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 + 2*epsG1k2*epsG2k3*epsG3epsPsi*epsG4k3 + 2*epsG1k2*epsG2k4*epsG3epsPsi*epsG4k3 + 2*epsG1k2*epsG2epsPsi*epsG3k1*epsG4k3 - 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 - 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 2*epsG1k2*epsG2epsPsi*epsG3k2*epsG4k3 - 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 + 2*epsG1epsG2*epsG3k4*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 2*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 - 2*epsG1k2*epsG2k4*epsG3epsG4*epsPsik3 + 2*epsG1k2*epsG2epsG4*epsG3k4*epsPsik3 - 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik3 - 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 - 2*epsG1k2*epsG2epsG3*epsG4k3*epsPsik3 + 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 + 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 + 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 + 2*epsG1k2*epsG2k3*epsG3epsG4*epsPsik4 + 2*epsG1k2*epsG2epsG4*epsG3k4*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik4 - 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 - 2*epsG1k2*epsG2epsG3*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 + 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 - epsG1k2*epsG2epsPsi*epsG3epsG4*k1k3 + epsG1epsPsi*epsG2k1*epsG3epsG4*k1k3 + 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 - 2*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k3 + 2*epsG1epsG4*epsG2epsPsi*epsG3k4*k1k3 - 2*epsG1epsG2*epsG3k4*epsG4epsPsi*k1k3 + 2*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k3 - 2*epsG1epsG3*epsG2epsPsi*epsG4k3*k1k3 + 2*epsG1epsG2*epsG3epsPsi*epsG4k3*k1k3 + epsG1epsG2*epsG3epsG4*epsPsik2*k1k3 - epsG1epsG2*epsG3epsG4*epsPsik3*k1k3 + epsG1epsG2*epsG3epsG4*epsPsik4*k1k3 + epsG1k2*epsG2epsPsi*epsG3epsG4*k1k4 - epsG1epsPsi*epsG2k1*epsG3epsG4*k1k4 - 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 - 2*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k4 + 2*epsG1epsG4*epsG2epsPsi*epsG3k4*k1k4 - 2*epsG1epsG2*epsG3k4*epsG4epsPsi*k1k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k4 - 2*epsG1epsG3*epsG2epsPsi*epsG4k3*k1k4 + 2*epsG1epsG2*epsG3epsPsi*epsG4k3*k1k4 - epsG1epsG2*epsG3epsG4*epsPsik2*k1k4 - epsG1epsG2*epsG3epsG4*epsPsik3*k1k4 + epsG1epsG2*epsG3epsG4*epsPsik4*k1k4 - epsG1k2*epsG2epsPsi*epsG3epsG4*k2k3 + epsG1epsPsi*epsG2k1*epsG3epsG4*k2k3 + epsG1epsG2*epsG3epsG4*epsPsik2*k2k3 - epsG1epsG2*epsG3epsG4*epsPsik3*k2k3 - epsG1epsG2*epsG3epsG4*epsPsik4*k2k3 + epsG1k2*epsG2epsPsi*epsG3epsG4*k2k4 - epsG1epsPsi*epsG2k1*epsG3epsG4*k2k4 - epsG1epsG2*epsG3epsG4*epsPsik2*k2k4 + epsG1epsG2*epsG3epsG4*epsPsik3*k2k4 + epsG1epsG2*epsG3epsG4*epsPsik4*k2k4 + epsG1k4*abbr[164] + epsG1k3*abbr[165];
	 abbr[167]=abbr[166]*pow(k3k4,-1)*pow(MC,0.5)*pow(abbr[12],-1)*pow(abbr[56],-1)*pow((2*pow(PI,-1))/3.,0.5);
	 abbr[168]=epsG3k4*epsG4epsPsi - epsG3epsPsi*epsG4k3 + epsG3epsG4*epsPsik2 - epsG3epsG4*epsPsik4;
	 abbr[169]=2*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG2epsPsi*epsG3k2*epsG4k3 - 2*epsG2epsG4*epsG3k4*epsPsik2 + 2*epsG2epsG3*epsG4k3*epsPsik2 + epsG2epsPsi*epsG3epsG4*k2k3 - epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG2k3*abbr[82] + 2*epsG2k4*abbr[168];
};
