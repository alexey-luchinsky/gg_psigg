#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_11() {
	 abbr[110]=2*epsG2epsPsi*epsG3k1*epsG4k1 - 2*epsG2epsPsi*epsG3k2*epsG4k1 - 2*epsG2epsPsi*epsG3k4*epsG4k1 - 2*epsG2epsPsi*epsG3k1*epsG4k2 + 2*epsG2epsPsi*epsG3k2*epsG4k2 + 2*epsG2epsPsi*epsG3k4*epsG4k2 + 2*epsG2epsPsi*epsG3k1*epsG4k3 - 2*epsG2epsPsi*epsG3k2*epsG4k3 - 2*epsG2epsG4*epsG3k4*epsPsik3 + 2*epsG2epsG3*epsG4k1*epsPsik3 - 2*epsG2epsG3*epsG4k2*epsPsik3 + 2*epsG2epsG3*epsG4k3*epsPsik3 + 2*epsG2epsG4*epsG3k1*epsPsik4 - 2*epsG2epsG4*epsG3k2*epsPsik4 - 2*epsG2epsG4*epsG3k4*epsPsik4 + 2*epsG2epsG3*epsG4k3*epsPsik4 - 2*epsG2epsPsi*epsG3epsG4*k1k3 + 2*epsG2epsG4*epsG3epsPsi*k1k3 - 2*epsG2epsG3*epsG4epsPsi*k1k3 - 2*epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG2epsG4*epsG3epsPsi*k2k4 - 2*epsG2epsG3*epsG4epsPsi*k2k4 + epsG2epsPsi*epsG3epsG4*s - epsG2epsG4*epsG3epsPsi*s + epsG2epsG3*epsG4epsPsi*s + 2*epsG2k4*abbr[106] + 2*epsG2k3*abbr[109];
	 abbr[111]=-2*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi + 2*epsG1k3*epsG2k1*epsG3k4*epsG4epsPsi - 2*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi - 2*epsG1k3*epsG2k4*epsG3k4*epsG4epsPsi - 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k1 + 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 + 2*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 - 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k1 + 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 + 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 + 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k1 - 2*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 + 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k1 - 2*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 - 2*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 + 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 - 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 + 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 - 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 - 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 - 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 - 2*epsG1k3*epsG2epsPsi*epsG3k4*epsG4k2 - 2*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 - 2*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k3 + 2*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 + 2*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k3 - 2*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k3 + 2*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + 2*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k3 + 2*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + 2*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 - 2*epsG1k3*epsG2k4*epsG3epsG4*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 - 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 + 2*epsG1k3*epsG2epsG4*epsG3k4*epsPsik2 - 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 - 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 - 2*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 + 2*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 - 2*epsG1epsG2*epsG3k1*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k2*epsG4k1*epsPsik2 + 2*epsG1epsG2*epsG3k4*epsG4k1*epsPsik2 + 2*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 - 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 + 2*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 - 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 - 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - 2*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik2 - 2*epsG1epsG2*epsG3k1*epsG4k3*epsPsik2 + 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 + 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 - 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik3 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 + 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 + 2*epsG1epsG3*epsG2k1*epsG4k1*epsPsik3 - 2*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 - 2*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 - 2*epsG1epsG2*epsG3k2*epsG4k1*epsPsik3 - 2*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 + 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 + 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 + 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 + 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik3 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik3 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 - 2*epsG1k3*epsG2k1*epsG3epsG4*epsPsik4 + 2*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 + 2*epsG1k3*epsG2k4*epsG3epsG4*epsPsik4 + 2*epsG1epsG4*epsG2k1*epsG3k1*epsPsik4 - 2*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 - 2*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 + 2*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k2*epsPsik4 + 2*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 - 2*epsG1epsG4*epsG2k1*epsG3k4*epsPsik4 + 2*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 + 2*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 - 2*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 + 2*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 - 2*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 + 2*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 + 2*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 + 2*epsG1epsG3*epsG2k1*epsG4k3*epsPsik4 - 2*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - 2*epsG1epsG3*epsG2k4*epsG4k3*epsPsik4 - 2*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 + 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k1k3 - 2*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k3 - 2*epsG1epsPsi*epsG2k4*epsG3epsG4*k1k3 + 2*epsG1epsG4*epsG2k1*epsG3epsPsi*k1k3 - 2*epsG1epsG4*epsG2k3*epsG3epsPsi*k1k3 - 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k1k3 - 2*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k3 - 2*epsG1epsG4*epsG2epsPsi*epsG3k2*k1k3 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k1k3 + 2*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k3 + 2*epsG1epsG3*epsG2k4*epsG4epsPsi*k1k3 + 2*epsG1epsG2*epsG3k2*epsG4epsPsi*k1k3 + 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k3 + 2*epsG1epsG3*epsG2epsPsi*epsG4k2*k1k3 - 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k1k3 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k1k3 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k1k3 + 2*epsG1epsG2*epsG3epsG4*epsPsik2*k1k3 + 2*epsG1k3*epsG2epsPsi*epsG3epsG4*k2k4 + 2*epsG1epsPsi*epsG2k1*epsG3epsG4*k2k4 - 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k2k4 + 2*epsG1epsG4*epsG2k1*epsG3epsPsi*k2k4 - 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k2k4 - 2*epsG1epsG4*epsG2epsPsi*epsG3k1*k2k4 + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k4 - 2*epsG1epsG3*epsG2k1*epsG4epsPsi*k2k4 + 2*epsG1epsG2*epsG3k1*epsG4epsPsi*k2k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k2k4 + 2*epsG1epsG3*epsG2epsPsi*epsG4k1*k2k4 - 2*epsG1epsG2*epsG3epsPsi*epsG4k1*k2k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k2k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik2*k2k4 + 2*epsG1epsG2*epsG3epsG4*epsPsik2*k2k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik3*k2k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik3*k2k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik3*k2k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik4*k2k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik4*k2k4 - 2*epsG1epsG2*epsG3epsG4*epsPsik4*k2k4 - epsG1epsPsi*epsG2k1*epsG3epsG4*s + epsG1epsPsi*epsG2k3*epsG3epsG4*s - epsG1epsG4*epsG2k1*epsG3epsPsi*s + epsG1epsG4*epsG2k3*epsG3epsPsi*s + epsG1epsPsi*epsG2epsG4*epsG3k2*s + epsG1epsG4*epsG2epsPsi*epsG3k2*s + epsG1epsPsi*epsG2epsG4*epsG3k4*s + epsG1epsG4*epsG2epsPsi*epsG3k4*s + epsG1epsG3*epsG2k1*epsG4epsPsi*s - epsG1epsG3*epsG2k3*epsG4epsPsi*s - epsG1epsG2*epsG3k2*epsG4epsPsi*s - epsG1epsG2*epsG3k4*epsG4epsPsi*s - epsG1epsPsi*epsG2epsG3*epsG4k1*s - epsG1epsG3*epsG2epsPsi*epsG4k1*s + epsG1epsG2*epsG3epsPsi*epsG4k1*s - epsG1epsPsi*epsG2epsG3*epsG4k3*s - epsG1epsG3*epsG2epsPsi*epsG4k3*s + epsG1epsG2*epsG3epsPsi*epsG4k3*s - epsG1epsG4*epsG2epsG3*epsPsik2*s + epsG1epsG3*epsG2epsG4*epsPsik2*s - epsG1epsG2*epsG3epsG4*epsPsik2*s + epsG1epsG4*epsG2epsG3*epsPsik4*s - epsG1epsG3*epsG2epsG4*epsPsik4*s + epsG1epsG2*epsG3epsG4*epsPsik4*s + epsG1k4*abbr[107] + epsG1k2*abbr[110];
	 abbr[112]=abbr[111]*pow(abbr[3],-1)*pow(abbr[85],-1)*pow(abbr[104],-1)*pow(pow(MC,-1),-0.5);
	 abbr[113]=-2*epsG2k4*epsG3k2*epsG4epsPsi - 2*epsG2epsPsi*epsG3k2*epsG4k1 - 2*epsG2epsPsi*epsG3k2*epsG4k2 + 2*epsG2epsPsi*epsG3k2*epsG4k3 + 2*epsG2epsG3*epsG4k1*epsPsik3 + 2*epsG2epsG3*epsG4k2*epsPsik3 - 2*epsG2epsG3*epsG4k3*epsPsik3 + 2*epsG2epsG4*epsG3k2*epsPsik4 - 2*epsG2epsG3*epsG4k3*epsPsik4 + epsG2epsG3*epsG4epsPsi*k1k4 + epsG2epsG3*epsG4epsPsi*k2k4 + epsG2epsG3*epsG4epsPsi*k3k4 - 2*epsG2k3*abbr[51];
	 abbr[114]=epsG3k1*epsG4epsPsi + epsG3k4*epsG4epsPsi + epsG3epsPsi*epsG4k2 - epsG3epsPsi*epsG4k3 - epsG3epsG4*epsPsik2 + epsG3epsG4*epsPsik3;
	 abbr[115]=-4*epsG2k1*epsG3k2*epsG4epsPsi - 4*epsG2k4*epsG3k2*epsG4epsPsi - 4*epsG2epsPsi*epsG3k2*epsG4k2 + 4*epsG2epsPsi*epsG3k2*epsG4k3 + 4*epsG2epsG4*epsG3k2*epsPsik2 - 4*epsG2epsG3*epsG4k3*epsPsik2 - 4*epsG2epsG4*epsG3k2*epsPsik3 + 4*epsG2epsG3*epsG4k2*epsPsik3 + 2*epsG2epsG3*epsG4epsPsi*k1k3 + 2*epsG2epsG3*epsG4epsPsi*k2k4 + 2*epsG2epsG3*epsG4epsPsi*k3k4 + epsG2epsG3*epsG4epsPsi*s - 4*epsG2k3*abbr[114];
	 abbr[116]=-4*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi - 4*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 - 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 - 4*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 + 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 - 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 - 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 - 4*epsG1epsG2*epsG3k2*epsG4k1*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 - 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 + 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 + 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 + 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 + 4*epsG1epsG2*epsG3k2*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 + 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 - 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 + 4*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 + 4*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 + 4*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 + 4*epsG1epsG4*epsG2k1*epsG3k2*epsPsik4 + 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 + 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 - 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 + 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 - 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k1k3 + 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k3 - 2*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k3 - 2*epsG1epsG4*epsG2epsG3*epsPsik4*k1k3 + 4*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 - 4*epsG1epsG4*epsG2k3*epsG3epsPsi*k1k4 + 4*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k4 - 4*epsG1epsG4*epsG2epsPsi*epsG3k2*k1k4 - 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k1k4 + 4*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 + 4*epsG1epsG2*epsG3k2*epsG4epsPsi*k1k4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k1k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik3*k1k4 + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k2k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k2k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik3*k2k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik4*k2k4 + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k3k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k3k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik2*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik3*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik4*k3k4 + epsG1epsPsi*epsG2epsG3*epsG4k1*s + epsG1epsPsi*epsG2epsG3*epsG4k2*s - epsG1epsPsi*epsG2epsG3*epsG4k3*s - epsG1epsG4*epsG2epsG3*epsPsik4*s - 2*epsG1k2*abbr[113] + epsG1k4*abbr[115];
	 abbr[117]=abbr[116]*pow(k2k3,-1)*pow(abbr[3],-1)*pow(abbr[40],-1)*pow(pow(MC,-1),-0.5);
	 abbr[118]=4*epsG2k1*epsG3k2*epsG4epsPsi + 4*epsG2k4*epsG3k2*epsG4epsPsi + 4*epsG2epsPsi*epsG3k2*epsG4k2 - 4*epsG2epsPsi*epsG3k2*epsG4k3 - 4*epsG2epsG4*epsG3k2*epsPsik2 + 4*epsG2epsG3*epsG4k3*epsPsik2 + 4*epsG2epsG4*epsG3k2*epsPsik3 - 4*epsG2epsG3*epsG4k2*epsPsik3 - 2*epsG2epsG3*epsG4epsPsi*k1k3 - 2*epsG2epsG3*epsG4epsPsi*k2k4 - 2*epsG2epsG3*epsG4epsPsi*k3k4 - epsG2epsG3*epsG4epsPsi*s + 4*epsG2k3*abbr[114];
	 abbr[119]=4*epsG1k3*epsG2k4*epsG3k2*epsG4epsPsi + 4*epsG1k3*epsG2k3*epsG3k4*epsG4epsPsi + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k1 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k1 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k1 + 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k1 + 4*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 + 4*epsG1epsPsi*epsG2k3*epsG3k4*epsG4k1 + 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k2 + 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k2 + 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k2 + 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 - 4*epsG1k3*epsG2k3*epsG3epsPsi*epsG4k3 - 4*epsG1epsPsi*epsG2k3*epsG3k1*epsG4k3 - 4*epsG1k3*epsG2epsPsi*epsG3k2*epsG4k3 - 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k3 + 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 + 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k1*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik2 + 4*epsG1epsG2*epsG3k2*epsG4k1*epsPsik2 - 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik2 + 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik2 + 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 + 4*epsG1k3*epsG2epsG3*epsG4k3*epsPsik2 - 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik2 - 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 - 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k1*epsPsik3 - 4*epsG1epsG2*epsG3k2*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik3 - 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik3 + 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik3 - 4*epsG1k3*epsG2k3*epsG3epsG4*epsPsik4 - 4*epsG1epsG4*epsG2k3*epsG3k1*epsPsik4 - 4*epsG1k3*epsG2epsG4*epsG3k2*epsPsik4 - 4*epsG1epsG4*epsG2k1*epsG3k2*epsPsik4 - 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 - 4*epsG1epsG4*epsG2k3*epsG3k4*epsPsik4 + 4*epsG1k3*epsG2epsG3*epsG4k2*epsPsik4 - 4*epsG1epsG3*epsG2k3*epsG4k2*epsPsik4 - 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 + 4*epsG1epsG3*epsG2k3*epsG4k3*epsPsik4 + 4*epsG1epsG2*epsG3k2*epsG4k3*epsPsik4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k1k3 - 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k3 + 2*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k3 + 2*epsG1epsG4*epsG2epsG3*epsPsik4*k1k3 - 4*epsG1epsPsi*epsG2k3*epsG3epsG4*k1k4 + 4*epsG1epsG4*epsG2k3*epsG3epsPsi*k1k4 - 4*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k4 + 4*epsG1epsG4*epsG2epsPsi*epsG3k2*k1k4 + 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k1k4 - 4*epsG1epsG3*epsG2k3*epsG4epsPsi*k1k4 - 4*epsG1epsG2*epsG3k2*epsG4epsPsi*k1k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k2*k1k4 + 2*epsG1epsPsi*epsG2epsG3*epsG4k3*k1k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik2*k1k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik3*k1k4 - 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k2k4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k2k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik2*k2k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik3*k2k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik4*k2k4 - 2*epsG1k3*epsG2epsG3*epsG4epsPsi*k3k4 - 2*epsG1epsPsi*epsG2epsG3*epsG4k1*k3k4 - 2*epsG1epsG4*epsG2epsG3*epsPsik2*k3k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik3*k3k4 + 2*epsG1epsG4*epsG2epsG3*epsPsik4*k3k4 - epsG1epsPsi*epsG2epsG3*epsG4k1*s - epsG1epsPsi*epsG2epsG3*epsG4k2*s + epsG1epsPsi*epsG2epsG3*epsG4k3*s + epsG1epsG4*epsG2epsG3*epsPsik4*s + 2*epsG1k2*abbr[113] + epsG1k4*abbr[118];
};