unsigned int8 letters[672];
void LoadLetters()
{
   // Symbol [ ] space
   letters[0] = 0b00000000;
   letters[1] = 0b00000000;
   letters[2] = 0b00000000;
   letters[3] = 0b00000000;
   letters[4] = 0b00000000;
   letters[5] = 0b00000000;
   letters[6] = 0b00000000;
   letters[7] = 0b00000000;

   // Symbol !
   letters[8] = 0b00000000;
   letters[9] = 0b00000000;
   letters[10] = 0b00000000;
   letters[11] = 0b00000000;
   letters[12] = 0b11110011;
   letters[13] = 0b00000000;
   letters[14] = 0b00000000;
   letters[15] = 0b00000000;

   // Symbol "
   letters[16] = 0b00000000;
   letters[17] = 0b00000000;
   letters[18] = 0b00000000;
   letters[19] = 0b11100000;
   letters[20] = 0b00000000;
   letters[21] = 0b11100000;
   letters[22] = 0b00000000;
   letters[23] = 0b00000000;

   // Symbol #
   letters[24] = 0b00000000;
   letters[25] = 0b00100100;
   letters[26] = 0b11111111;
   letters[27] = 0b00100100;
   letters[28] = 0b00100100;
   letters[29] = 0b00100100;
   letters[30] = 0b11111111;
   letters[31] = 0b00100100;

   // Symbol $
   letters[32] = 0b00000000;
   letters[33] = 0b01001110;
   letters[34] = 0b10010001;
   letters[35] = 0b10010001;
   letters[36] = 0b11111111;
   letters[37] = 0b10010001;
   letters[38] = 0b10010001;
   letters[39] = 0b01100110;

   // Symbol %
   letters[40] = 0b00000000;
   letters[41] = 0b10000111;
   letters[42] = 0b01000101;
   letters[43] = 0b00110111;
   letters[44] = 0b00011000;
   letters[45] = 0b11100100;
   letters[46] = 0b10100010;
   letters[47] = 0b11100001;

   // Symbol &
   letters[48] = 0b00000000;
   letters[49] = 0b01100000;
   letters[50] = 0b10010101;
   letters[51] = 0b10010011;
   letters[52] = 0b10010101;
   letters[53] = 0b10011001;
   letters[54] = 0b01011001;
   letters[55] = 0b00111110;

   // Symbol '
   letters[56] = 0b00000000;
   letters[57] = 0b00000000;
   letters[58] = 0b00000000;
   letters[59] = 0b11100000;
   letters[60] = 0b00000000;
   letters[61] = 0b00000000;
   letters[62] = 0b00000000;
   letters[63] = 0b00000000;

   // Symbol (
   letters[64] = 0b00000000;
   letters[65] = 0b00000000;
   letters[66] = 0b10000001;
   letters[67] = 0b01000010;
   letters[68] = 0b00100100;
   letters[69] = 0b00011000;
   letters[70] = 0b00000000;
   letters[71] = 0b00000000;

   // Symbol )
   letters[72] = 0b00000000;
   letters[73] = 0b00000000;
   letters[74] = 0b00011000;
   letters[75] = 0b00100100;
   letters[76] = 0b01000010;
   letters[77] = 0b10000001;
   letters[78] = 0b00000000;
   letters[79] = 0b00000000;

   // Symbol *
   letters[80] = 0b00000000;
   letters[81] = 0b10010010;
   letters[82] = 0b01010100;
   letters[83] = 0b00111000;
   letters[84] = 0b11111111;
   letters[85] = 0b00111000;
   letters[86] = 0b01010100;
   letters[87] = 0b10010010;

   // Symbol +
   letters[88] = 0b00000000;
   letters[89] = 0b00010000;
   letters[90] = 0b00010000;
   letters[91] = 0b00010000;
   letters[92] = 0b11111111;
   letters[93] = 0b00010000;
   letters[94] = 0b00010000;
   letters[95] = 0b00010000;

   // Symbol ,
   letters[96] = 0b00000000;
   letters[97] = 0b00000000;
   letters[98] = 0b00000000;
   letters[99] = 0b00000110;
   letters[100] = 0b00000001;
   letters[101] = 0b00000000;
   letters[102] = 0b00000000;
   letters[103] = 0b00000000;

   // Symbol -
   letters[104] = 0b00000000;
   letters[105] = 0b00000000;
   letters[106] = 0b00000000;
   letters[107] = 0b00010000;
   letters[108] = 0b00010000;
   letters[109] = 0b00010000;
   letters[110] = 0b00000000;
   letters[111] = 0b00000000;

   // Symbol .
   letters[112] = 0b00000000;
   letters[113] = 0b00000000;
   letters[114] = 0b00000000;
   letters[115] = 0b00000011;
   letters[116] = 0b00000011;
   letters[117] = 0b00000000;
   letters[118] = 0b00000000;
   letters[119] = 0b00000000;

   // Symbol /
   letters[120] = 0b00000000;
   letters[121] = 0b10000000;
   letters[122] = 0b01000000;
   letters[123] = 0b00100000;
   letters[124] = 0b00011000;
   letters[125] = 0b00000100;
   letters[126] = 0b00000010;
   letters[127] = 0b00000001;

   // Number 0 - zero
   letters[128] = 0b00000000;
   letters[129] = 0b00111100;
   letters[130] = 0b01000010;
   letters[131] = 0b10100001;
   letters[132] = 0b10010001;
   letters[133] = 0b10001001;
   letters[134] = 0b01000010;
   letters[135] = 0b00111100;

   // Number 1
   letters[136] = 0b00000000;
   letters[137] = 0b00000000;
   letters[138] = 0b00000001;
   letters[139] = 0b11111111;
   letters[140] = 0b01000001;
   letters[141] = 0b00100001;
   letters[142] = 0b00000000;
   letters[143] = 0b00000000;

   // Number 2
   letters[144] = 0b00000000;
   letters[145] = 0b01100001;
   letters[146] = 0b10010001;
   letters[147] = 0b10001001;
   letters[148] = 0b10001001;
   letters[149] = 0b10000101;
   letters[150] = 0b10000011;
   letters[151] = 0b00000001;

   // Number 3
   letters[152] = 0b00000000;
   letters[153] = 0b01111110;
   letters[154] = 0b10011001;
   letters[155] = 0b10011001;
   letters[156] = 0b10011001;
   letters[157] = 0b10000001;
   letters[158] = 0b10000001;
   letters[159] = 0b01000110;

   // Number 4
   letters[160] = 0b00000000;
   letters[161] = 0b00000100;
   letters[162] = 0b11111111;
   letters[163] = 0b01000100;
   letters[164] = 0b00100100;
   letters[165] = 0b00010100;
   letters[166] = 0b00001100;
   letters[167] = 0b00000100;

   // Number 5
   letters[168] = 0b00000000;
   letters[169] = 0b10001110;
   letters[170] = 0b10010001;
   letters[171] = 0b10010001;
   letters[172] = 0b10010001;
   letters[173] = 0b10010001;
   letters[174] = 0b10010001;
   letters[175] = 0b11100010;

   // Number 6
   letters[176] = 0b00000000;
   letters[177] = 0b01001110;
   letters[178] = 0b10010001;
   letters[179] = 0b10010001;
   letters[180] = 0b10010001;
   letters[181] = 0b10010001;
   letters[182] = 0b10010001;
   letters[183] = 0b01111110;

   // Number 7
   letters[184] = 0b00000000;
   letters[185] = 0b11100000;
   letters[186] = 0b10010000;
   letters[187] = 0b10001000;
   letters[188] = 0b10000111;
   letters[189] = 0b00000000;
   letters[190] = 0b00000000;
   letters[191] = 0b00000000;

   // Number 8
   letters[192] = 0b00000000;
   letters[193] = 0b01100110;
   letters[194] = 0b10011001;
   letters[195] = 0b10011001;
   letters[196] = 0b10011001;
   letters[197] = 0b10011001;
   letters[198] = 0b10011001;
   letters[199] = 0b01100110;

   // Number 9
   letters[200] = 0b00000000;
   letters[201] = 0b01111110;
   letters[202] = 0b10001001;
   letters[203] = 0b10001001;
   letters[204] = 0b10001001;
   letters[205] = 0b10001001;
   letters[206] = 0b10001001;
   letters[207] = 0b01110010;

   // Symbol :
   letters[208] = 0b00000000;
   letters[209] = 0b00000000;
   letters[210] = 0b00000000;
   letters[211] = 0b00000000;
   letters[212] = 0b01100110;
   letters[213] = 0b00000000;
   letters[214] = 0b00000000;
   letters[215] = 0b00000000;

   // Symbol ;
   letters[216] = 0b00000000;
   letters[217] = 0b00000000;
   letters[218] = 0b00000000;
   letters[219] = 0b00000000;
   letters[220] = 0b01100110;
   letters[221] = 0b00000001;
   letters[222] = 0b00000000;
   letters[223] = 0b00000000;

   // Symbol <
   letters[224] = 0b00000000;
   letters[225] = 0b00000000;
   letters[226] = 0b00000000;
   letters[227] = 0b10000010;
   letters[228] = 0b01000100;
   letters[229] = 0b00101000;
   letters[230] = 0b00010000;
   letters[231] = 0b00000000;

   // Symbol =
   letters[232] = 0b00000000;
   letters[233] = 0b00000000;
   letters[234] = 0b00000000;
   letters[235] = 0b00100100;
   letters[236] = 0b00100100;
   letters[237] = 0b00100100;
   letters[238] = 0b00100100;
   letters[239] = 0b00000000;

   // Symbol >
   letters[240] = 0b00000000;
   letters[241] = 0b00000000;
   letters[242] = 0b00010000;
   letters[243] = 0b00101000;
   letters[244] = 0b01000100;
   letters[245] = 0b10000010;
   letters[246] = 0b00000000;
   letters[247] = 0b00000000;

   // Symbol ?
   letters[248] = 0b00000000;
   letters[249] = 0b00000000;
   letters[250] = 0b01100000;
   letters[251] = 0b10010000;
   letters[252] = 0b10001101;
   letters[253] = 0b10000000;
   letters[254] = 0b01100000;
   letters[255] = 0b00000000;

   // Symbol @
   letters[256] = 0b00000000;
   letters[257] = 0b01111000;
   letters[258] = 0b10100101;
   letters[259] = 0b10100101;
   letters[260] = 0b10100101;
   letters[261] = 0b10011001;
   letters[262] = 0b10000001;
   letters[263] = 0b01011110;

   // Letter A
   letters[264] = 0b00000000;
   letters[265] = 0b00111111;
   letters[266] = 0b01001000;
   letters[267] = 0b10001000;
   letters[268] = 0b10001000;
   letters[269] = 0b10001000;
   letters[270] = 0b01001000;
   letters[271] = 0b00111111;

   // Letter B
   letters[272] = 0b00000000;
   letters[273] = 0b01110110;
   letters[274] = 0b10001001;
   letters[275] = 0b10001001;
   letters[276] = 0b10001001;
   letters[277] = 0b10001001;
   letters[278] = 0b10001001;
   letters[279] = 0b11111111;

   // Letter C
   letters[280] = 0b00000000;
   letters[281] = 0b00100100;
   letters[282] = 0b01000010;
   letters[283] = 0b10000001;
   letters[284] = 0b10000001;
   letters[285] = 0b10000001;
   letters[286] = 0b01000010;
   letters[287] = 0b00111100;

   // Letter D
   letters[288] = 0b00000000;
   letters[289] = 0b00111100;
   letters[290] = 0b01000010;
   letters[291] = 0b10000001;
   letters[292] = 0b10000001;
   letters[293] = 0b10000001;
   letters[294] = 0b10000001;
   letters[295] = 0b11111111;

   // Letter E
   letters[296] = 0b00000000;
   letters[297] = 0b10000001;
   letters[298] = 0b10000001;
   letters[299] = 0b10010001;
   letters[300] = 0b10010001;
   letters[301] = 0b10010001;
   letters[302] = 0b10010001;
   letters[303] = 0b11111111;


   // Letter F
   letters[304] = 0b00000000;
   letters[305] = 0b10000000;
   letters[306] = 0b10000000;
   letters[307] = 0b10010000;
   letters[308] = 0b10010000;
   letters[309] = 0b10010000;
   letters[310] = 0b10010000;
   letters[311] = 0b11111111;

   // Letter G
   letters[312] = 0b00000000;
   letters[313] = 0b00101100;
   letters[314] = 0b01001010;
   letters[315] = 0b10001001;
   letters[316] = 0b10000001;
   letters[317] = 0b10000001;
   letters[318] = 0b01000010;
   letters[319] = 0b00111100;

   // Letter H
   letters[320] = 0b00000000;
   letters[321] = 0b11111111;
   letters[322] = 0b00001000;
   letters[323] = 0b00001000;
   letters[324] = 0b00001000;
   letters[325] = 0b00001000;
   letters[326] = 0b00001000;
   letters[327] = 0b11111111;

   // Letter I
   letters[328] = 0b00000000;
   letters[329] = 0b00000000;
   letters[330] = 0b10000001;
   letters[331] = 0b10000001;
   letters[332] = 0b11111111;
   letters[333] = 0b10000001;
   letters[334] = 0b10000001;
   letters[335] = 0b00000000;

   // Letter J
   letters[336] = 0b00000000;
   letters[337] = 0b10000000;
   letters[338] = 0b10000000;
   letters[339] = 0b11111100;
   letters[340] = 0b10000010;
   letters[341] = 0b10000001;
   letters[342] = 0b10000001;
   letters[343] = 0b10000010;

   // Letter K
   letters[344] = 0b00000000;
   letters[345] = 0b10000001;
   letters[346] = 0b01000010;
   letters[347] = 0b00100100;
   letters[348] = 0b00011000;
   letters[349] = 0b00001000;
   letters[350] = 0b00000100;
   letters[351] = 0b11111111;

   // Letter L
   letters[352] = 0b00000000;
   letters[353] = 0b00000001;
   letters[354] = 0b00000001;
   letters[355] = 0b00000001;
   letters[356] = 0b00000001;
   letters[357] = 0b00000001;
   letters[358] = 0b00000001;
   letters[359] = 0b11111111;

   // Letter M
   letters[360] = 0b00000000;
   letters[361] = 0b01111111;
   letters[362] = 0b10000000;
   letters[363] = 0b10000000;
   letters[364] = 0b01110000;
   letters[365] = 0b10000000;
   letters[366] = 0b10000000;
   letters[367] = 0b01111111;

   // Letter N
   letters[368] = 0b00000000;
   letters[369] = 0b11111111;
   letters[370] = 0b00000010;
   letters[371] = 0b00000100;
   letters[372] = 0b00011000;
   letters[373] = 0b00100000;
   letters[374] = 0b01000000;
   letters[375] = 0b11111111;

   // Letter O
   letters[376] = 0b00000000;
   letters[377] = 0b00111100;
   letters[378] = 0b01000010;
   letters[379] = 0b10000001;
   letters[380] = 0b10000001;
   letters[381] = 0b10000001;
   letters[382] = 0b01000010;
   letters[383] = 0b00111100;

   // Letter P
   letters[384] = 0b00000000;
   letters[385] = 0b00110000;
   letters[386] = 0b01001000;
   letters[387] = 0b10000100;
   letters[388] = 0b10000100;
   letters[389] = 0b10000100;
   letters[390] = 0b10000100;
   letters[391] = 0b11111111;

   // Letter Q
   letters[392] = 0b00000000;
   letters[393] = 0b00111101;
   letters[394] = 0b01000010;
   letters[395] = 0b10000101;
   letters[396] = 0b10001001;
   letters[397] = 0b10000001;
   letters[398] = 0b01000010;
   letters[399] = 0b00111100;

   // Letter R
   letters[400] = 0b00000000;
   letters[401] = 0b00110001;
   letters[402] = 0b01001010;
   letters[403] = 0b10000100;
   letters[404] = 0b10000100;
   letters[405] = 0b10000100;
   letters[406] = 0b10000100;
   letters[407] = 0b11111111;

   // Letter S
   letters[408] = 0b00000000;
   letters[409] = 0b01001110;
   letters[410] = 0b10010001;
   letters[411] = 0b10010001;
   letters[412] = 0b10010001;
   letters[413] = 0b10010001;
   letters[414] = 0b10010001;
   letters[415] = 0b01100110;

   // Letter T
   letters[416] = 0b00000000;
   letters[417] = 0b10000000;
   letters[418] = 0b10000000;
   letters[419] = 0b10000000;
   letters[420] = 0b11111111;
   letters[421] = 0b10000000;
   letters[422] = 0b10000000;
   letters[423] = 0b10000000;

   // Letter U
   letters[424] = 0b00000000;
   letters[425] = 0b11111100;
   letters[426] = 0b00000010;
   letters[427] = 0b00000001;
   letters[428] = 0b00000001;
   letters[429] = 0b00000001;
   letters[430] = 0b00000010;
   letters[431] = 0b11111100;

   // Letter V
   letters[432] = 0b00000000;
   letters[433] = 0b11111000;
   letters[434] = 0b00000100;
   letters[435] = 0b00000010;
   letters[436] = 0b00000001;
   letters[437] = 0b00000010;
   letters[438] = 0b00000100;
   letters[439] = 0b11111000;

   // Letter W
   letters[440] = 0b00000000;
   letters[441] = 0b11111110;
   letters[442] = 0b00000001;
   letters[443] = 0b00000001;
   letters[444] = 0b00001110;
   letters[445] = 0b00000001;
   letters[446] = 0b00000001;
   letters[447] = 0b11111110;

   // Letter X
   letters[448] = 0b00000000;
   letters[449] = 0b10000001;
   letters[450] = 0b01000010;
   letters[451] = 0b00100100;
   letters[452] = 0b00011000;
   letters[453] = 0b00100100;
   letters[454] = 0b01000010;
   letters[455] = 0b10000001;

   // Letter Y
   letters[456] = 0b00000000;
   letters[457] = 0b10000000;
   letters[458] = 0b01000000;
   letters[459] = 0b00100000;
   letters[460] = 0b00011111;
   letters[461] = 0b00100000;
   letters[462] = 0b01000000;
   letters[463] = 0b10000000;

   // Letter Z
   letters[464] = 0b00000000;
   letters[465] = 0b10000001;
   letters[466] = 0b11000001;
   letters[467] = 0b10100001;
   letters[468] = 0b10010001;
   letters[469] = 0b10001001;
   letters[470] = 0b10000101;
   letters[471] = 0b10000011;

   // Symbol !
   letters[472] = 0b00000000;
   letters[473] = 0b00000000;
   letters[474] = 0b00000000;
   letters[475] = 0b00000000;
   letters[476] = 0b11110011;
   letters[477] = 0b00000000;
   letters[478] = 0b00000000;
   letters[479] = 0b00000000;

   // Symbol "
   letters[480] = 0b00000000;
   letters[481] = 0b00000000;
   letters[482] = 0b00000000;
   letters[483] = 0b11100000;
   letters[484] = 0b00000000;
   letters[485] = 0b11100000;
   letters[486] = 0b00000000;
   letters[487] = 0b00000000;

   // Symbol #
   letters[488] = 0b00000000;
   letters[489] = 0b00100100;
   letters[490] = 0b11111111;
   letters[491] = 0b00100100;
   letters[492] = 0b00100100;
   letters[493] = 0b00100100;
   letters[494] = 0b11111111;
   letters[495] = 0b00100100;

   // Symbol $
   letters[496] = 0b00000000;
   letters[497] = 0b01001110;
   letters[498] = 0b10010001;
   letters[499] = 0b10010001;
   letters[500] = 0b11111111;
   letters[501] = 0b10010001;
   letters[502] = 0b10010001;
   letters[503] = 0b01100110;

   // Symbol %
   letters[504] = 0b00000000;
   letters[505] = 0b00000000;
   letters[506] = 0b01000110;
   letters[507] = 0b00110000;
   letters[508] = 0b00011000;
   letters[509] = 0b00000100;
   letters[510] = 0b01100010;
   letters[511] = 0b00000001;

   // Symbol &
   letters[512] = 0b00000000;
   letters[513] = 0b00000000;
   letters[514] = 0b00000101;
   letters[515] = 0b01000010;
   letters[516] = 0b10100101;
   letters[517] = 0b10101001;
   letters[518] = 0b01010001;
   letters[519] = 0b00101110;

   // Symbol '
   letters[520] = 0b00000000;
   letters[521] = 0b00000000;
   letters[522] = 0b00000000;
   letters[523] = 0b11100000;
   letters[524] = 0b00000000;
   letters[525] = 0b00000000;
   letters[526] = 0b00000000;
   letters[527] = 0b00000000;

   // Symbol (
   letters[528] = 0b00000000;
   letters[529] = 0b00000000;
   letters[530] = 0b10000001;
   letters[531] = 0b01000010;
   letters[532] = 0b00100100;
   letters[533] = 0b00011000;
   letters[534] = 0b00000000;
   letters[535] = 0b00000000;

   // Symbol )
   letters[536] = 0b00000000;
   letters[537] = 0b00000000;
   letters[538] = 0b00011000;
   letters[539] = 0b00100100;
   letters[540] = 0b01000010;
   letters[541] = 0b10000001;
   letters[542] = 0b00000000;
   letters[543] = 0b00000000;

   // Symbol *
   letters[544] = 0b00000000;
   letters[545] = 0b10010010;
   letters[546] = 0b01010100;
   letters[547] = 0b00111000;
   letters[548] = 0b11111111;
   letters[549] = 0b00111000;
   letters[550] = 0b01010100;
   letters[551] = 0b10010010;

   // Symbol +
   letters[552] = 0b00000000;
   letters[553] = 0b00010000;
   letters[554] = 0b00010000;
   letters[555] = 0b00010000;
   letters[556] = 0b11111111;
   letters[557] = 0b00010000;
   letters[558] = 0b00010000;
   letters[559] = 0b00010000;

   // Symbol '
   letters[560] = 0b00000000;
   letters[561] = 0b00000000;
   letters[562] = 0b00000000;
   letters[563] = 0b11000000;
   letters[564] = 0b00100000;
   letters[565] = 0b00000000;
   letters[566] = 0b00000000;
   letters[567] = 0b00000000;

   // Symbol -
   letters[568] = 0b00000000;
   letters[569] = 0b00000000;
   letters[570] = 0b00000000;
   letters[571] = 0b00010000;
   letters[572] = 0b00010000;
   letters[573] = 0b00010000;
   letters[574] = 0b00000000;
   letters[575] = 0b00000000;

   // Symbol .
   letters[576] = 0b00000000;
   letters[577] = 0b00000000;
   letters[578] = 0b00000000;
   letters[579] = 0b00000011;
   letters[580] = 0b00000011;
   letters[581] = 0b00000000;
   letters[582] = 0b00000000;
   letters[583] = 0b00000000;

   // Symbol /
   letters[584] = 0b00000000;
   letters[585] = 0b10000000;
   letters[586] = 0b01000000;
   letters[587] = 0b00100000;
   letters[588] = 0b00011000;
   letters[589] = 0b00000100;
   letters[590] = 0b00000010;
   letters[591] = 0b00000001;

   // Number 0 - zero
   letters[592] = 0b00000000;
   letters[593] = 0b00111100;
   letters[594] = 0b01000010;
   letters[595] = 0b10100001;
   letters[596] = 0b10010001;
   letters[597] = 0b10001001;
   letters[598] = 0b01000010;
   letters[599] = 0b00111100;

   // Number 1
   letters[600] = 0b00000000;
   letters[601] = 0b00000000;
   letters[602] = 0b00000001;
   letters[603] = 0b11111111;
   letters[604] = 0b01000001;
   letters[605] = 0b00100001;
   letters[606] = 0b00000000;
   letters[607] = 0b00000000;

   // Number 2
   letters[608] = 0b00000000;
   letters[609] = 0b01100001;
   letters[610] = 0b10010001;
   letters[611] = 0b10001001;
   letters[612] = 0b10001001;
   letters[613] = 0b10000101;
   letters[614] = 0b10000011;
   letters[615] = 0b00000001;

   // Number 3
   letters[616] = 0b00000000;
   letters[617] = 0b01111110;
   letters[618] = 0b10011001;
   letters[619] = 0b10011001;
   letters[620] = 0b10011001;
   letters[621] = 0b10000001;
   letters[622] = 0b10000001;
   letters[623] = 0b01000110;

   // Number 4
   letters[624] = 0b00000000;
   letters[625] = 0b00000100;
   letters[626] = 0b11111111;
   letters[627] = 0b01000100;
   letters[628] = 0b00100100;
   letters[629] = 0b00010100;
   letters[630] = 0b00001100;
   letters[631] = 0b00000100;

   // Number 5
   letters[632] = 0b00000000;
   letters[633] = 0b10001110;
   letters[634] = 0b10010001;
   letters[635] = 0b10010001;
   letters[636] = 0b10010001;
   letters[637] = 0b10010001;
   letters[638] = 0b10010001;
   letters[639] = 0b11100010;

   // Number 6
   letters[640] = 0b00000000;
   letters[641] = 0b01001110;
   letters[642] = 0b10010001;
   letters[643] = 0b10010001;
   letters[644] = 0b10010001;
   letters[645] = 0b10010001;
   letters[646] = 0b10010001;
   letters[647] = 0b01111110;

   // Number 7
   letters[648] = 0b00000000;
   letters[649] = 0b11100000;
   letters[650] = 0b10010000;
   letters[651] = 0b10001000;
   letters[652] = 0b10000111;
   letters[653] = 0b00000000;
   letters[654] = 0b00000000;
   letters[655] = 0b00000000;

   // Number 8
   letters[656] = 0b00000000;
   letters[657] = 0b01100110;
   letters[658] = 0b10011001;
   letters[659] = 0b10011001;
   letters[660] = 0b10011001;
   letters[661] = 0b10011001;
   letters[662] = 0b10011001;
   letters[663] = 0b01100110;

   // Number 9
   letters[664] = 0b00000000;
   letters[665] = 0b01111110;
   letters[666] = 0b10001001;
   letters[667] = 0b10001001;
   letters[668] = 0b10001001;
   letters[669] = 0b10001001;
   letters[670] = 0b10001001;
   letters[671] = 0b01110010;
}
