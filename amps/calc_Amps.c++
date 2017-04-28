#include "../globals/global_kinematics.h"

cmplx II = IMAGE_ONE;

void calc_amps() {
    for (int i = 0; i < nColors; ++i)
        Amp[i] = COMPLEX_ZERO;
// diag 0
// diag 1
	 if(diag[1]) Amp[0] += II*abbr[4];
	 if(diag[1]) Amp[1] += II*abbr[8];
	 if(diag[1]) Amp[2] += II*abbr[11];
	 if(diag[1]) Amp[3] += II*abbr[8];
	 if(diag[1]) Amp[4] += II*abbr[11];
	 if(diag[1]) Amp[5] += II*abbr[4];
// diag 2
	 if(diag[2]) Amp[0] += II*abbr[13];
	 if(diag[2]) Amp[1] += II*abbr[14];
	 if(diag[2]) Amp[2] += II*abbr[15];
	 if(diag[2]) Amp[3] += II*abbr[14];
	 if(diag[2]) Amp[4] += II*abbr[15];
	 if(diag[2]) Amp[5] += II*abbr[13];
// diag 3
// diag 4
// diag 5
// diag 6
	 if(diag[6]) Amp[0] += 2*II*abbr[20];
	 if(diag[6]) Amp[1] += -2*II*abbr[22];
	 if(diag[6]) Amp[2] += 2*II*abbr[24];
	 if(diag[6]) Amp[3] += -2*II*abbr[22];
	 if(diag[6]) Amp[4] += 2*II*abbr[24];
	 if(diag[6]) Amp[5] += 2*II*abbr[20];
// diag 7
	 if(diag[7]) Amp[0] += -2*II*abbr[20];
	 if(diag[7]) Amp[1] += 2*II*abbr[22];
	 if(diag[7]) Amp[2] += -2*II*abbr[24];
	 if(diag[7]) Amp[3] += 2*II*abbr[22];
	 if(diag[7]) Amp[4] += -2*II*abbr[24];
	 if(diag[7]) Amp[5] += -2*II*abbr[20];
// diag 8
// diag 9
// diag 10
// diag 11
// diag 12
// diag 13
// diag 14
	 if(diag[14]) Amp[0] += II*abbr[30];
	 if(diag[14]) Amp[1] += -(II*abbr[32]);
	 if(diag[14]) Amp[2] += -(II*abbr[34]);
	 if(diag[14]) Amp[3] += -(II*abbr[32]);
	 if(diag[14]) Amp[4] += -(II*abbr[34]);
	 if(diag[14]) Amp[5] += II*abbr[30];
// diag 15
	 if(diag[15]) Amp[0] += II*abbr[36];
	 if(diag[15]) Amp[1] += II*abbr[32];
	 if(diag[15]) Amp[2] += II*abbr[34];
	 if(diag[15]) Amp[3] += II*abbr[32];
	 if(diag[15]) Amp[4] += II*abbr[34];
	 if(diag[15]) Amp[5] += II*abbr[36];
// diag 16
	 if(diag[16]) Amp[0] += -(II*abbr[42]);
	 if(diag[16]) Amp[1] += -(II*abbr[44]);
	 if(diag[16]) Amp[2] += II*abbr[46];
	 if(diag[16]) Amp[3] += -(II*abbr[44]);
	 if(diag[16]) Amp[4] += II*abbr[46];
	 if(diag[16]) Amp[5] += -(II*abbr[42]);
// diag 17
	 if(diag[17]) Amp[0] += II*abbr[42];
	 if(diag[17]) Amp[1] += II*abbr[44];
	 if(diag[17]) Amp[2] += II*abbr[48];
	 if(diag[17]) Amp[3] += II*abbr[44];
	 if(diag[17]) Amp[4] += II*abbr[48];
	 if(diag[17]) Amp[5] += II*abbr[42];
// diag 18
// diag 19
// diag 20
// diag 21
	 if(diag[21]) Amp[4] += II*abbr[55];
	 if(diag[21]) Amp[5] += -(II*abbr[55]);
// diag 22
	 if(diag[22]) Amp[0] += -(II*abbr[61]);
	 if(diag[22]) Amp[2] += II*abbr[61];
// diag 23
	 if(diag[23]) Amp[0] += (II*abbr[65])/2.;
	 if(diag[23]) Amp[2] += (II*abbr[67])/2.;
	 if(diag[23]) Amp[4] += (II*abbr[67])/2.;
	 if(diag[23]) Amp[5] += (II*abbr[65])/2.;
// diag 24
	 if(diag[24]) Amp[0] += II*abbr[55];
	 if(diag[24]) Amp[2] += -(II*abbr[55]);
// diag 25
	 if(diag[25]) Amp[4] += -(II*abbr[61]);
	 if(diag[25]) Amp[5] += II*abbr[61];
// diag 26
	 if(diag[26]) Amp[0] += (II*abbr[67])/2.;
	 if(diag[26]) Amp[2] += (II*abbr[65])/2.;
	 if(diag[26]) Amp[4] += (II*abbr[65])/2.;
	 if(diag[26]) Amp[5] += (II*abbr[67])/2.;
// diag 27
	 if(diag[27]) Amp[4] += -(II*abbr[71]);
	 if(diag[27]) Amp[5] += II*abbr[71];
// diag 28
	 if(diag[28]) Amp[0] += (II*abbr[75])/2.;
	 if(diag[28]) Amp[2] += (II*abbr[77])/2.;
	 if(diag[28]) Amp[4] += (II*abbr[77])/2.;
	 if(diag[28]) Amp[5] += (II*abbr[75])/2.;
// diag 29
	 if(diag[29]) Amp[0] += -(II*abbr[71]);
	 if(diag[29]) Amp[2] += II*abbr[71];
// diag 30
	 if(diag[30]) Amp[0] += (II*abbr[77])/2.;
	 if(diag[30]) Amp[2] += (II*abbr[75])/2.;
	 if(diag[30]) Amp[4] += (II*abbr[75])/2.;
	 if(diag[30]) Amp[5] += (II*abbr[77])/2.;
// diag 31
	 if(diag[31]) Amp[0] += (II*abbr[81])/2.;
	 if(diag[31]) Amp[2] += (II*abbr[84])/2.;
	 if(diag[31]) Amp[4] += (II*abbr[84])/2.;
	 if(diag[31]) Amp[5] += (II*abbr[81])/2.;
// diag 32
	 if(diag[32]) Amp[0] += (II*abbr[84])/2.;
	 if(diag[32]) Amp[2] += (II*abbr[81])/2.;
	 if(diag[32]) Amp[4] += (II*abbr[81])/2.;
	 if(diag[32]) Amp[5] += (II*abbr[84])/2.;
// diag 33
	 if(diag[33]) Amp[2] += II*abbr[90];
	 if(diag[33]) Amp[5] += II*abbr[94];
// diag 34
	 if(diag[34]) Amp[2] += 4*II*abbr[103];
// diag 35
	 if(diag[35]) Amp[5] += 4*II*abbr[112];
// diag 36
	 if(diag[36]) Amp[0] += II*abbr[117];
	 if(diag[36]) Amp[1] += II*abbr[120];
// diag 37
	 if(diag[37]) Amp[0] += (II*abbr[125])/2.;
	 if(diag[37]) Amp[1] += -(II*abbr[125])/2.;
	 if(diag[37]) Amp[3] += -(II*abbr[125])/2.;
	 if(diag[37]) Amp[5] += (II*abbr[125])/2.;
// diag 38
	 if(diag[38]) Amp[3] += II*abbr[130];
	 if(diag[38]) Amp[5] += II*abbr[134];
// diag 39
	 if(diag[39]) Amp[3] += II*abbr[138];
	 if(diag[39]) Amp[4] += -(II*abbr[138]);
// diag 40
	 if(diag[40]) Amp[4] += -2*II*abbr[142];
// diag 41
	 if(diag[41]) Amp[3] += -2*II*abbr[146];
// diag 42
	 if(diag[42]) Amp[1] += -(II*abbr[152])/2.;
	 if(diag[42]) Amp[2] += (II*abbr[152])/2.;
	 if(diag[42]) Amp[3] += -(II*abbr[152])/2.;
	 if(diag[42]) Amp[4] += (II*abbr[152])/2.;
// diag 43
	 if(diag[43]) Amp[1] += -(II*abbr[156]);
	 if(diag[43]) Amp[2] += II*abbr[156];
// diag 44
	 if(diag[44]) Amp[0] += -2*II*abbr[159];
// diag 45
	 if(diag[45]) Amp[1] += -2*II*abbr[163];
// diag 46
	 if(diag[46]) Amp[0] += -(II*abbr[167]);
	 if(diag[46]) Amp[4] += II*abbr[167];
// diag 47
	 if(diag[47]) Amp[0] += (II*abbr[172])/2.;
	 if(diag[47]) Amp[2] += (II*abbr[176])/2.;
	 if(diag[47]) Amp[4] += (II*abbr[176])/2.;
	 if(diag[47]) Amp[5] += (II*abbr[172])/2.;
// diag 48
	 if(diag[48]) Amp[0] += II*abbr[90];
	 if(diag[48]) Amp[4] += II*abbr[94];
// diag 49
	 if(diag[49]) Amp[4] += 4*II*abbr[183];
// diag 50
	 if(diag[50]) Amp[0] += 4*II*abbr[188];
// diag 51
	 if(diag[51]) Amp[2] += II*abbr[192];
	 if(diag[51]) Amp[3] += II*abbr[195];
// diag 52
	 if(diag[52]) Amp[1] += 2*II*abbr[198];
	 if(diag[52]) Amp[4] += 2*II*abbr[200];
// diag 53
	 if(diag[53]) Amp[1] += -(II*abbr[204]);
	 if(diag[53]) Amp[2] += II*abbr[204];
	 if(diag[53]) Amp[3] += -(II*abbr[204]);
	 if(diag[53]) Amp[4] += II*abbr[204];
// diag 54
	 if(diag[54]) Amp[1] += II*abbr[209];
	 if(diag[54]) Amp[5] += II*abbr[213];
// diag 55
	 if(diag[55]) Amp[5] += 2*II*abbr[215];
// diag 56
	 if(diag[56]) Amp[1] += -2*II*abbr[218];
// diag 57
	 if(diag[57]) Amp[0] += 2*II*abbr[220];
	 if(diag[57]) Amp[3] += 2*II*abbr[222];
// diag 58
	 if(diag[58]) Amp[0] += II*abbr[227];
	 if(diag[58]) Amp[1] += -(II*abbr[227]);
	 if(diag[58]) Amp[3] += -(II*abbr[227]);
	 if(diag[58]) Amp[5] += II*abbr[227];
// diag 59
	 if(diag[59]) Amp[2] += 2*II*abbr[230];
// diag 60
	 if(diag[60]) Amp[3] += -2*II*abbr[233];
// diag 61
	 if(diag[61]) Amp[2] += II*abbr[237];
	 if(diag[61]) Amp[5] += II*abbr[239];
// diag 62
	 if(diag[62]) Amp[0] += II*abbr[243];
	 if(diag[62]) Amp[2] += II*abbr[247];
	 if(diag[62]) Amp[4] += II*abbr[247];
	 if(diag[62]) Amp[5] += II*abbr[243];
// diag 63
	 if(diag[63]) Amp[3] += II*abbr[117];
	 if(diag[63]) Amp[5] += II*abbr[120];
// diag 64
	 if(diag[64]) Amp[0] += -(II*abbr[125])/2.;
	 if(diag[64]) Amp[1] += (II*abbr[125])/2.;
	 if(diag[64]) Amp[3] += (II*abbr[125])/2.;
	 if(diag[64]) Amp[5] += -(II*abbr[125])/2.;
// diag 65
	 if(diag[65]) Amp[0] += II*abbr[130];
	 if(diag[65]) Amp[1] += II*abbr[134];
// diag 66
	 if(diag[66]) Amp[1] += -(II*abbr[138]);
	 if(diag[66]) Amp[2] += II*abbr[138];
// diag 67
	 if(diag[67]) Amp[2] += 2*II*abbr[142];
// diag 68
	 if(diag[68]) Amp[1] += 2*II*abbr[146];
// diag 69
	 if(diag[69]) Amp[1] += (II*abbr[152])/2.;
	 if(diag[69]) Amp[2] += -(II*abbr[152])/2.;
	 if(diag[69]) Amp[3] += (II*abbr[152])/2.;
	 if(diag[69]) Amp[4] += -(II*abbr[152])/2.;
// diag 70
	 if(diag[70]) Amp[3] += II*abbr[156];
	 if(diag[70]) Amp[4] += -(II*abbr[156]);
// diag 71
	 if(diag[71]) Amp[5] += 2*II*abbr[159];
// diag 72
	 if(diag[72]) Amp[3] += 2*II*abbr[163];
// diag 73
	 if(diag[73]) Amp[2] += -(II*abbr[167]);
	 if(diag[73]) Amp[5] += II*abbr[167];
// diag 74
	 if(diag[74]) Amp[0] += (II*abbr[176])/2.;
	 if(diag[74]) Amp[2] += (II*abbr[172])/2.;
	 if(diag[74]) Amp[4] += (II*abbr[172])/2.;
	 if(diag[74]) Amp[5] += (II*abbr[176])/2.;
// diag 75
	 if(diag[75]) Amp[1] += II*abbr[192];
	 if(diag[75]) Amp[4] += II*abbr[195];
// diag 76
	 if(diag[76]) Amp[2] += 2*II*abbr[198];
	 if(diag[76]) Amp[3] += 2*II*abbr[200];
// diag 77
	 if(diag[77]) Amp[1] += II*abbr[204];
	 if(diag[77]) Amp[2] += -(II*abbr[204]);
	 if(diag[77]) Amp[3] += II*abbr[204];
	 if(diag[77]) Amp[4] += -(II*abbr[204]);
// diag 78
	 if(diag[78]) Amp[0] += II*abbr[209];
	 if(diag[78]) Amp[3] += II*abbr[213];
// diag 79
	 if(diag[79]) Amp[0] += 2*II*abbr[249];
// diag 80
	 if(diag[80]) Amp[3] += 2*II*abbr[218];
// diag 81
	 if(diag[81]) Amp[1] += 2*II*abbr[220];
	 if(diag[81]) Amp[5] += 2*II*abbr[222];
// diag 82
	 if(diag[82]) Amp[0] += -(II*abbr[227]);
	 if(diag[82]) Amp[1] += II*abbr[227];
	 if(diag[82]) Amp[3] += II*abbr[227];
	 if(diag[82]) Amp[5] += -(II*abbr[227]);
// diag 83
	 if(diag[83]) Amp[4] += -2*II*abbr[230];
// diag 84
	 if(diag[84]) Amp[1] += 2*II*abbr[233];
// diag 85
	 if(diag[85]) Amp[0] += II*abbr[237];
	 if(diag[85]) Amp[4] += II*abbr[239];
// diag 86
	 if(diag[86]) Amp[0] += II*abbr[247];
	 if(diag[86]) Amp[2] += II*abbr[243];
	 if(diag[86]) Amp[4] += II*abbr[243];
	 if(diag[86]) Amp[5] += II*abbr[247];
// diag 87
// diag 88
// diag 89
// diag 90
// diag 91
// diag 92
// diag 93
// diag 94
// diag 95
// diag 96
// diag 97
// diag 98
// diag 99
	 if(diag[99]) Amp[1] += -(II*abbr[253]);
	 if(diag[99]) Amp[2] += II*abbr[253];
	 if(diag[99]) Amp[3] += -(II*abbr[253]);
	 if(diag[99]) Amp[4] += II*abbr[253];
// diag 100
	 if(diag[100]) Amp[1] += II*abbr[253];
	 if(diag[100]) Amp[2] += -(II*abbr[253]);
	 if(diag[100]) Amp[3] += II*abbr[253];
	 if(diag[100]) Amp[4] += -(II*abbr[253]);
// diag 101
	 if(diag[101]) Amp[1] += II*abbr[256];
	 if(diag[101]) Amp[2] += II*abbr[259];
	 if(diag[101]) Amp[3] += II*abbr[256];
	 if(diag[101]) Amp[4] += II*abbr[259];
// diag 102
	 if(diag[102]) Amp[2] += II*abbr[262];
	 if(diag[102]) Amp[3] += II*abbr[264];
// diag 103
	 if(diag[103]) Amp[1] += II*abbr[259];
	 if(diag[103]) Amp[2] += II*abbr[256];
	 if(diag[103]) Amp[3] += II*abbr[259];
	 if(diag[103]) Amp[4] += II*abbr[256];
// diag 104
	 if(diag[104]) Amp[1] += II*abbr[262];
	 if(diag[104]) Amp[4] += II*abbr[264];
// diag 105
	 if(diag[105]) Amp[0] += II*abbr[268];
	 if(diag[105]) Amp[1] += -(II*abbr[268]);
	 if(diag[105]) Amp[3] += -(II*abbr[268]);
	 if(diag[105]) Amp[5] += II*abbr[268];
// diag 106
	 if(diag[106]) Amp[0] += -(II*abbr[268]);
	 if(diag[106]) Amp[1] += II*abbr[268];
	 if(diag[106]) Amp[3] += II*abbr[268];
	 if(diag[106]) Amp[5] += -(II*abbr[268]);
// diag 107
	 if(diag[107]) Amp[0] += -(II*abbr[273])/2.;
	 if(diag[107]) Amp[1] += (II*abbr[273])/2.;
	 if(diag[107]) Amp[3] += (II*abbr[273])/2.;
	 if(diag[107]) Amp[5] += -(II*abbr[273])/2.;
// diag 108
	 if(diag[108]) Amp[0] += II*abbr[276];
	 if(diag[108]) Amp[1] += II*abbr[278];
// diag 109
	 if(diag[109]) Amp[0] += (II*abbr[273])/2.;
	 if(diag[109]) Amp[1] += -(II*abbr[273])/2.;
	 if(diag[109]) Amp[3] += -(II*abbr[273])/2.;
	 if(diag[109]) Amp[5] += (II*abbr[273])/2.;
// diag 110
	 if(diag[110]) Amp[3] += II*abbr[276];
	 if(diag[110]) Amp[5] += II*abbr[278];
// diag 111
	 if(diag[111]) Amp[0] += II*abbr[282];
	 if(diag[111]) Amp[1] += II*abbr[285];
	 if(diag[111]) Amp[3] += II*abbr[285];
	 if(diag[111]) Amp[5] += II*abbr[282];
// diag 112
	 if(diag[112]) Amp[1] += II*abbr[288];
	 if(diag[112]) Amp[5] += II*abbr[290];
// diag 113
	 if(diag[113]) Amp[1] += (II*abbr[294])/2.;
	 if(diag[113]) Amp[2] += (II*abbr[298])/2.;
	 if(diag[113]) Amp[3] += (II*abbr[294])/2.;
	 if(diag[113]) Amp[4] += (II*abbr[298])/2.;
// diag 114
	 if(diag[114]) Amp[3] += -(II*abbr[302]);
	 if(diag[114]) Amp[4] += II*abbr[302];
// diag 115
	 if(diag[115]) Amp[4] += 2*II*abbr[306];
// diag 116
	 if(diag[116]) Amp[5] += 2*II*abbr[308];
// diag 117
	 if(diag[117]) Amp[0] += II*abbr[285];
	 if(diag[117]) Amp[1] += II*abbr[282];
	 if(diag[117]) Amp[3] += II*abbr[282];
	 if(diag[117]) Amp[5] += II*abbr[285];
// diag 118
	 if(diag[118]) Amp[0] += II*abbr[288];
	 if(diag[118]) Amp[3] += II*abbr[290];
// diag 119
	 if(diag[119]) Amp[1] += (II*abbr[298])/2.;
	 if(diag[119]) Amp[2] += (II*abbr[294])/2.;
	 if(diag[119]) Amp[3] += (II*abbr[298])/2.;
	 if(diag[119]) Amp[4] += (II*abbr[294])/2.;
// diag 120
	 if(diag[120]) Amp[1] += II*abbr[302];
	 if(diag[120]) Amp[2] += -(II*abbr[302]);
// diag 121
	 if(diag[121]) Amp[0] += 2*II*abbr[311];
// diag 122
	 if(diag[122]) Amp[2] += 2*II*abbr[313];
};