#include "../globals/global_kinematics.h"
#include "../nlo/nlo_kinematics.h"
void calc_KK_29() {
	 abbr[290]=abbr[289]*pow(abbr[28],-1)*pow(abbr[104],-1)*pow(abbr[205],-1)*pow(pow(MC,-1),-0.5);
	 abbr[291]=4*epsG2k3*epsG3epsPsi*epsG4k2 + 4*epsG2epsPsi*epsG3k1*epsG4k2 + 4*epsG2epsPsi*epsG3k2*epsG4k2 - 4*epsG2epsPsi*epsG3k4*epsG4k2 + 4*epsG2epsG4*epsG3k4*epsPsik3 - 4*epsG2epsG3*epsG4k2*epsPsik3 - 4*epsG2epsG4*epsG3k1*epsPsik4 - 4*epsG2epsG4*epsG3k2*epsPsik4 + 4*epsG2epsG4*epsG3k4*epsPsik4 - epsG2epsG4*epsG3epsPsi*k1k3 - epsG2epsG4*epsG3epsPsi*k2k3 - 3*epsG2epsG4*epsG3epsPsi*k3k4 + 4*epsG2k4*abbr[50];
	 abbr[292]=-4*epsG2k3*epsG3epsPsi*epsG4k2 - 4*epsG2epsPsi*epsG3k1*epsG4k2 - 4*epsG2epsPsi*epsG3k2*epsG4k2 + 4*epsG2epsPsi*epsG3k4*epsG4k2 + 4*epsG2epsG4*epsG3k1*epsPsik2 + 4*epsG2epsG4*epsG3k2*epsPsik2 - 4*epsG2epsG4*epsG3k4*epsPsik2 - 4*epsG2epsG4*epsG3k2*epsPsik3 + 4*epsG2epsG3*epsG4k2*epsPsik3 - epsG2epsG4*epsG3epsPsi*k1k3 + 3*epsG2epsG4*epsG3epsPsi*k2k3 + epsG2epsG4*epsG3epsPsi*k3k4 - 4*epsG2k4*abbr[50];
	 abbr[293]=-4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 + 4*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 - 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 + 4*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 - 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 + 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 - 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 - 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 + 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 + 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 - 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 + 4*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 + 4*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 + 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 - 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 + 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 + 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 - 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 + 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 + 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 - 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 + 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k1k3 + 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k1k3 + 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k1k4 + 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k1k4 + 2*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k4 - 2*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k4 - 2*epsG1epsG3*epsG2epsG4*epsPsik3*k1k4 - 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k2k3 - 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k2k3 + 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k3k4 + 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k3k4 + epsG1k3*epsG2epsG4*epsG3epsPsi*s + epsG1epsPsi*epsG2epsG4*epsG3k1*s + epsG1epsPsi*epsG2epsG4*epsG3k2*s - epsG1epsPsi*epsG2epsG4*epsG3k4*s - epsG1epsG3*epsG2epsG4*epsPsik3*s + epsG1k2*abbr[291] + epsG1k4*abbr[292];
	 abbr[294]=abbr[293]*pow(k2k4,-1)*pow(abbr[28],-1)*pow(abbr[29],-1)*pow(pow(MC,-1),-0.5);
	 abbr[295]=4*epsG2k3*epsG3epsPsi*epsG4k2 + 4*epsG2epsPsi*epsG3k1*epsG4k2 + 4*epsG2epsPsi*epsG3k2*epsG4k2 - 4*epsG2epsPsi*epsG3k4*epsG4k2 - 4*epsG2epsG4*epsG3k1*epsPsik2 - 4*epsG2epsG4*epsG3k2*epsPsik2 + 4*epsG2epsG4*epsG3k4*epsPsik2 + 4*epsG2epsG4*epsG3k2*epsPsik3 - 4*epsG2epsG3*epsG4k2*epsPsik3 + epsG2epsG4*epsG3epsPsi*k1k3 - 3*epsG2epsG4*epsG3epsPsi*k2k3 - epsG2epsG4*epsG3epsPsi*k3k4 + 4*epsG2k4*abbr[50];
	 abbr[296]=-4*epsG2k3*epsG3epsPsi*epsG4k2 - 4*epsG2epsPsi*epsG3k1*epsG4k2 - 4*epsG2epsPsi*epsG3k2*epsG4k2 + 4*epsG2epsPsi*epsG3k4*epsG4k2 - 4*epsG2epsG4*epsG3k4*epsPsik3 + 4*epsG2epsG3*epsG4k2*epsPsik3 + 4*epsG2epsG4*epsG3k1*epsPsik4 + 4*epsG2epsG4*epsG3k2*epsPsik4 - 4*epsG2epsG4*epsG3k4*epsPsik4 + epsG2epsG4*epsG3epsPsi*k1k3 + epsG2epsG4*epsG3epsPsi*k2k3 + 3*epsG2epsG4*epsG3epsPsi*k3k4 - 4*epsG2k4*abbr[50];
	 abbr[297]=4*epsG1k3*epsG2k4*epsG3epsPsi*epsG4k1 + 4*epsG1epsPsi*epsG2k4*epsG3k1*epsG4k1 + 4*epsG1epsPsi*epsG2k4*epsG3k2*epsG4k1 - 4*epsG1epsPsi*epsG2k4*epsG3k4*epsG4k1 + 4*epsG1k3*epsG2k1*epsG3epsPsi*epsG4k2 + 4*epsG1epsPsi*epsG2k1*epsG3k1*epsG4k2 + 4*epsG1epsPsi*epsG2k1*epsG3k2*epsG4k2 - 4*epsG1epsPsi*epsG2k1*epsG3k4*epsG4k2 + 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik2 + 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik2 + 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik2 + 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik2 - 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik2 - 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik3 + 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik3 - 4*epsG1epsG3*epsG2k4*epsG4k1*epsPsik3 - 4*epsG1epsG3*epsG2k1*epsG4k2*epsPsik3 - 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik3 + 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik3 - 4*epsG1epsG4*epsG2k4*epsG3k1*epsPsik4 - 4*epsG1epsG4*epsG2k4*epsG3k2*epsPsik4 + 4*epsG1epsG4*epsG2k4*epsG3k4*epsPsik4 - 4*epsG1epsG2*epsG3k1*epsG4k2*epsPsik4 - 4*epsG1epsG2*epsG3k2*epsG4k2*epsPsik4 + 4*epsG1epsG2*epsG3k4*epsG4k2*epsPsik4 - 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k1k3 - 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k1k3 - 2*epsG1k3*epsG2epsG4*epsG3epsPsi*k1k4 - 2*epsG1epsPsi*epsG2epsG4*epsG3k1*k1k4 - 2*epsG1epsPsi*epsG2epsG4*epsG3k2*k1k4 + 2*epsG1epsPsi*epsG2epsG4*epsG3k4*k1k4 + 2*epsG1epsG3*epsG2epsG4*epsPsik3*k1k4 + 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k2k3 + 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k2k3 - 2*epsG1epsG4*epsG2k4*epsG3epsPsi*k3k4 - 2*epsG1epsG2*epsG3epsPsi*epsG4k2*k3k4 - epsG1k3*epsG2epsG4*epsG3epsPsi*s - epsG1epsPsi*epsG2epsG4*epsG3k1*s - epsG1epsPsi*epsG2epsG4*epsG3k2*s + epsG1epsPsi*epsG2epsG4*epsG3k4*s + epsG1epsG3*epsG2epsG4*epsPsik3*s + epsG1k4*abbr[295] + epsG1k2*abbr[296];
	 abbr[298]=abbr[297]*pow(k2k4,-1)*pow(abbr[28],-1)*pow(abbr[29],-1)*pow(pow(MC,-1),-0.5);
	 abbr[299]=epsG2k3*epsG3epsPsi*epsG4k2 + epsG2epsPsi*epsG3k1*epsG4k2 + epsG2epsPsi*epsG3k2*epsG4k2 - epsG2epsPsi*epsG3k4*epsG4k2 - epsG2epsG4*epsG3k1*epsPsik2 - epsG2epsG4*epsG3k2*epsPsik2 + epsG2epsG4*epsG3k4*epsPsik2 + epsG2epsG4*epsG3k2*epsPsik3 - epsG2epsG3*epsG4k2*epsPsik3 - epsG2epsG4*epsG3epsPsi*k2k3 + epsG2k4*abbr[50];
};