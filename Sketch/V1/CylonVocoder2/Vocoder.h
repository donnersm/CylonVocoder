#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>

// GUItool: begin automatically generated code
AudioInputI2S            i2s2;           //xy=209.0833282470703,464
AudioMixer4              mixer1;         //xy=364.0833282470703,477
AudioAnalyzePeak         peak1;          //xy=394.0833282470703,203
AudioFilterStateVariable filter1;        //xy=594.0833282470703,110
AudioFilterStateVariable filter2;        //xy=595.0833282470703,160
AudioFilterStateVariable filter3;        //xy=595.0833282470703,212
AudioFilterStateVariable filter4;        //xy=595.0833282470703,262
AudioFilterStateVariable filter5;        //xy=596.0833282470703,314
AudioFilterStateVariable filter6;        //xy=598.0833282470703,365
AudioFilterStateVariable filter7;        //xy=600.0833282470703,415
AudioFilterStateVariable filter9;        //xy=600.0833282470703,519
AudioFilterStateVariable filter8;        //xy=601.0833282470703,465
AudioFilterStateVariable filter10;       //xy=601.0833282470703,569
AudioFilterStateVariable filter11;       //xy=601.0833282470703,621
AudioFilterStateVariable filter12;       //xy=601.0833282470703,671
AudioFilterStateVariable filter13;       //xy=602.0833282470703,723
AudioFilterStateVariable filter14;       //xy=604.0833282470703,774
AudioFilterStateVariable filter15;       //xy=606.0833282470703,824
AudioFilterStateVariable filter16;       //xy=607.0833282470703,874
AudioFilterStateVariable Bfilter4;       //xy=755.0833282470703,261
AudioFilterStateVariable Bfilter1;       //xy=757.0833282470703,103
AudioFilterStateVariable Bfilter2;       //xy=757.0833282470703,160
AudioFilterStateVariable Bfilter3;       //xy=757.0833282470703,210
AudioFilterStateVariable Bfilter5;       //xy=757.0833282470703,311
AudioFilterStateVariable Bfilter6;       //xy=759.0833282470703,365
AudioFilterStateVariable Bfilter9;       //xy=759.0833282470703,513
AudioFilterStateVariable Bfilter10;      //xy=759.0833282470703,564
AudioFilterStateVariable Bfilter8;       //xy=760.0833282470703,469
AudioFilterStateVariable Bfilter7;       //xy=761.0833282470703,416
AudioFilterStateVariable Bfilter11;      //xy=762.0833282470703,618
AudioFilterStateVariable Bfilter12;      //xy=762.0833282470703,670
AudioFilterStateVariable Bfilter13;      //xy=763.0833282470703,724
AudioFilterStateVariable Bfilter14;      //xy=764.0833282470703,776
AudioFilterStateVariable Bfilter15;      //xy=764.0833282470703,829
AudioFilterStateVariable Bfilter16;      //xy=766.0833282470703,889
AudioEffectRectifier     rectify2;       //xy=932.0833282470703,166
AudioEffectRectifier     rectify5;       //xy=932.0833282470703,318
AudioEffectRectifier     rectify3;       //xy=933.0833282470703,217
AudioEffectRectifier     rectify4;       //xy=934.0833282470703,266
AudioEffectRectifier     rectify1;       //xy=935.0833282470703,102
AudioEffectRectifier     rectify6;       //xy=935.0833282470703,370
AudioEffectRectifier     rectify9;       //xy=936.0833282470703,524
AudioEffectRectifier     rectify8;       //xy=938.0833282470703,469
AudioEffectRectifier     rectify10;      //xy=938.0833282470703,574
AudioEffectRectifier     rectify7;       //xy=939.0833282470703,420
AudioEffectRectifier     rectify11;      //xy=939.0833282470703,626
AudioEffectRectifier     rectify12;      //xy=940.0833282470703,676
AudioEffectRectifier     rectify14;      //xy=942.0833282470703,779
AudioEffectRectifier     rectify13;      //xy=945.0833282470703,728
AudioEffectRectifier     rectify16;      //xy=947.0833282470703,891
AudioEffectRectifier     rectify15;      //xy=948.0833282470703,828
AudioFilterBiquad        biquad5;        //xy=1071.0833282470703,317
AudioFilterBiquad        biquad1;        //xy=1072.0833282470703,103
AudioFilterBiquad        biquad7;        //xy=1071.0833282470703,420
AudioFilterBiquad        biquad4;        //xy=1072.0833282470703,266
AudioFilterBiquad        biquad6;        //xy=1072.0833282470703,369
AudioFilterBiquad        biquad2;        //xy=1075.0833282470703,165
AudioFilterBiquad        biquad3;        //xy=1075.0833282470703,218
AudioFilterBiquad        biquad9;        //xy=1076.0833282470703,525
AudioFilterBiquad        biquad8;        //xy=1079.0833282470703,469
AudioFilterBiquad        biquad11;       //xy=1080.0833282470703,626
AudioFilterBiquad        biquad12;       //xy=1081.0833282470703,676
AudioFilterBiquad        biquad10;       //xy=1082.0833282470703,575
AudioFilterBiquad        biquad14;       //xy=1085.0833282470703,778
AudioFilterBiquad        biquad13;       //xy=1087.0833282470703,728
AudioSynthWaveform       waveform1;      //xy=1088.0833282470703,1451
AudioFilterBiquad        biquad15;       //xy=1092.0833282470703,828
AudioFilterBiquad        biquad16;       //xy=1094.0833282470703,891
AudioSynthNoiseWhite     noise1;         //xy=1263.0833282470703,1788
AudioFilterStateVariable filter1B;       //xy=1445.0833282470703,1053
AudioFilterStateVariable filter2B;       //xy=1445.0833282470703,1104
AudioFilterStateVariable filter3B;       //xy=1446.0833282470703,1155
AudioFilterStateVariable filter4B;       //xy=1446.0833282470703,1205
AudioFilterStateVariable filter5B;       //xy=1447.0833282470703,1257
AudioFilterStateVariable filter6B;       //xy=1449.0833282470703,1308
AudioFilterStateVariable filter7B;       //xy=1451.0833282470703,1358
AudioFilterStateVariable filter9B;       //xy=1451.0833282470703,1462
AudioFilterStateVariable filter8B;       //xy=1452.0833282470703,1408
AudioFilterStateVariable filter10B;      //xy=1452.0833282470703,1512
AudioFilterStateVariable filter11B;      //xy=1452.0833282470703,1564
AudioFilterStateVariable filter12B;      //xy=1452.0833282470703,1614
AudioFilterStateVariable filter13B;      //xy=1453.0833282470703,1666
AudioFilterStateVariable filter14B;      //xy=1455.0833282470703,1717
AudioFilterStateVariable filter15B;      //xy=1457.0833282470703,1767
AudioFilterStateVariable filter16B;      //xy=1458.0833282470703,1817
AudioFilterStateVariable Cfilter1;       //xy=1628.0833282470703,1033
AudioFilterStateVariable Cfilter2;       //xy=1632.0833282470703,1090
AudioFilterStateVariable Cfilter3;       //xy=1633.0833282470703,1148
AudioFilterStateVariable Cfilter4;       //xy=1634.0833282470703,1204
AudioFilterStateVariable Cfilter5;       //xy=1635.0833282470703,1257
AudioFilterStateVariable Cfilter7;       //xy=1636.0833282470703,1362
AudioFilterStateVariable Cfilter6;       //xy=1638.0833282470703,1310
AudioFilterStateVariable Cfilter10;      //xy=1639.0833282470703,1513
AudioFilterStateVariable Cfilter8;       //xy=1640.0833282470703,1413
AudioFilterStateVariable Cfilter16;      //xy=1640.0833282470703,1826
AudioFilterStateVariable Cfilter9;       //xy=1642.0833282470703,1463
AudioFilterStateVariable Cfilter11;      //xy=1645.0833282470703,1564
AudioFilterStateVariable Cfilter14;      //xy=1647.0833282470703,1717
AudioFilterStateVariable Cfilter15;      //xy=1647.0833282470703,1768
AudioFilterStateVariable Cfilter12;      //xy=1649.0833282470703,1617
AudioFilterStateVariable Cfilter13;      //xy=1652.0833282470703,1668
AudioEffectMultiply      multiply6;      //xy=1893.0833282470703,1300
AudioEffectMultiply      multiply2;      //xy=1894.0833282470703,1091
AudioEffectMultiply      multiply7;      //xy=1894.0833282470703,1349
AudioEffectMultiply      multiply9;      //xy=1894.0833282470703,1453
AudioEffectMultiply      multiply15;     //xy=1894.0833282470703,1757
AudioEffectMultiply      multiply1;      //xy=1897.0833282470703,1032
AudioEffectMultiply      multiply16;     //xy=1894.0833282470703,1806
AudioEffectMultiply      multiply8;      //xy=1896.0833282470703,1402
AudioEffectMultiply      multiply4;      //xy=1897.0833282470703,1197
AudioEffectMultiply      multiply10;     //xy=1896.0833282470703,1504
AudioEffectMultiply      multiply3;      //xy=1898.0833282470703,1143
AudioEffectMultiply      multiply5;      //xy=1898.0833282470703,1248
AudioEffectMultiply      multiply13;     //xy=1897.0833282470703,1655
AudioEffectMultiply      multiply14;     //xy=1897.0833282470703,1705
AudioEffectMultiply      multiply11;     //xy=1898.0833282470703,1554
AudioEffectMultiply      multiply12;     //xy=1903.0833282470703,1606
AudioMixer4              mixer4;         //xy=2101.0833282470703,1523
AudioMixer4              mixer2;         //xy=2103.0833282470703,1116
AudioMixer4              mixer5;         //xy=2101.0833282470703,1713
AudioMixer4              mixer3;         //xy=2106.0833282470703,1299
AudioMixer4              mixer6;         //xy=2405.0833282470703,1429
AudioPlayMemory          playMem1;       //xy=2467.0836181640625,1856.0833740234375
AudioEffectDelay         delay1;         //xy=2500.0833282470703,1708
AudioMixer4              mixer7;         //xy=2510.0833282470703,1563
AudioMixer4              mixer8;         //xy=2707.0833282470703,1853
AudioMixer4              mixer9;         //xy=2772.0833282470703,1631
AudioOutputI2S           i2s1;           //xy=2913.0833282470703,1640
AudioConnection          patchCord1(i2s2, 0, mixer1, 0);
AudioConnection          patchCord2(i2s2, 1, mixer1, 1);
AudioConnection          patchCord3(mixer1, 0, filter1, 0);
AudioConnection          patchCord4(mixer1, 0, filter2, 0);
AudioConnection          patchCord5(mixer1, 0, filter3, 0);
AudioConnection          patchCord6(mixer1, 0, filter4, 0);
AudioConnection          patchCord7(mixer1, 0, filter5, 0);
AudioConnection          patchCord8(mixer1, 0, filter6, 0);
AudioConnection          patchCord9(mixer1, 0, filter7, 0);
AudioConnection          patchCord10(mixer1, 0, filter8, 0);
AudioConnection          patchCord11(mixer1, 0, filter9, 0);
AudioConnection          patchCord12(mixer1, 0, filter10, 0);
AudioConnection          patchCord13(mixer1, 0, filter11, 0);
AudioConnection          patchCord14(mixer1, 0, filter12, 0);
AudioConnection          patchCord15(mixer1, 0, filter13, 0);
AudioConnection          patchCord16(mixer1, 0, filter14, 0);
AudioConnection          patchCord17(mixer1, 0, filter15, 0);
AudioConnection          patchCord18(mixer1, 0, filter16, 0);
AudioConnection          patchCord19(mixer1, 0, mixer7, 1);
AudioConnection          patchCord20(mixer1, peak1);
AudioConnection          patchCord21(filter1, 0, Bfilter1, 0);
AudioConnection          patchCord22(filter2, 1, Bfilter2, 0);
AudioConnection          patchCord23(filter3, 1, Bfilter3, 0);
AudioConnection          patchCord24(filter4, 1, Bfilter4, 0);
AudioConnection          patchCord25(filter5, 1, Bfilter5, 0);
AudioConnection          patchCord26(filter6, 1, Bfilter6, 0);
AudioConnection          patchCord27(filter7, 1, Bfilter7, 0);
AudioConnection          patchCord28(filter9, 1, Bfilter9, 0);
AudioConnection          patchCord29(filter8, 1, Bfilter8, 0);
AudioConnection          patchCord30(filter10, 1, Bfilter10, 0);
AudioConnection          patchCord31(filter11, 1, Bfilter11, 0);
AudioConnection          patchCord32(filter12, 1, Bfilter12, 0);
AudioConnection          patchCord33(filter13, 1, Bfilter13, 0);
AudioConnection          patchCord34(filter14, 1, Bfilter14, 0);
AudioConnection          patchCord35(filter15, 1, Bfilter15, 0);
AudioConnection          patchCord36(filter16, 2, Bfilter16, 0);
AudioConnection          patchCord37(Bfilter4, 1, rectify4, 0);
AudioConnection          patchCord38(Bfilter1, 0, rectify1, 0);
AudioConnection          patchCord39(Bfilter2, 1, rectify2, 0);
AudioConnection          patchCord40(Bfilter3, 1, rectify3, 0);
AudioConnection          patchCord41(Bfilter5, 1, rectify5, 0);
AudioConnection          patchCord42(Bfilter6, 1, rectify6, 0);
AudioConnection          patchCord43(Bfilter9, 1, rectify9, 0);
AudioConnection          patchCord44(Bfilter10, 1, rectify10, 0);
AudioConnection          patchCord45(Bfilter8, 1, rectify8, 0);
AudioConnection          patchCord46(Bfilter7, 1, rectify7, 0);
AudioConnection          patchCord47(Bfilter11, 1, rectify11, 0);
AudioConnection          patchCord48(Bfilter12, 1, rectify12, 0);
AudioConnection          patchCord49(Bfilter13, 1, rectify13, 0);
AudioConnection          patchCord50(Bfilter14, 1, rectify14, 0);
AudioConnection          patchCord51(Bfilter15, 1, rectify15, 0);
AudioConnection          patchCord52(Bfilter16, 2, rectify16, 0);
AudioConnection          patchCord53(rectify2, biquad2);
AudioConnection          patchCord54(rectify5, biquad5);
AudioConnection          patchCord55(rectify3, biquad3);
AudioConnection          patchCord56(rectify4, biquad4);
AudioConnection          patchCord57(rectify1, biquad1);
AudioConnection          patchCord58(rectify6, biquad6);
AudioConnection          patchCord59(rectify9, biquad9);
AudioConnection          patchCord60(rectify8, biquad8);
AudioConnection          patchCord61(rectify10, biquad10);
AudioConnection          patchCord62(rectify7, biquad7);
AudioConnection          patchCord63(rectify11, biquad11);
AudioConnection          patchCord64(rectify12, biquad12);
AudioConnection          patchCord65(rectify14, biquad14);
AudioConnection          patchCord66(rectify13, biquad13);
AudioConnection          patchCord67(rectify16, biquad16);
AudioConnection          patchCord68(rectify15, biquad15);
AudioConnection          patchCord69(biquad5, 0, multiply5, 0);
AudioConnection          patchCord70(biquad1, 0, multiply1, 0);
AudioConnection          patchCord71(biquad7, 0, multiply7, 0);
AudioConnection          patchCord72(biquad4, 0, multiply4, 0);
AudioConnection          patchCord73(biquad6, 0, multiply6, 0);
AudioConnection          patchCord74(biquad2, 0, multiply2, 0);
AudioConnection          patchCord75(biquad3, 0, multiply3, 0);
AudioConnection          patchCord76(biquad9, 0, multiply9, 0);
AudioConnection          patchCord77(biquad8, 0, multiply8, 0);
AudioConnection          patchCord78(biquad11, 0, multiply11, 0);
AudioConnection          patchCord79(biquad12, 0, multiply12, 0);
AudioConnection          patchCord80(biquad10, 0, multiply10, 0);
AudioConnection          patchCord81(biquad14, 0, multiply14, 0);
AudioConnection          patchCord82(biquad13, 0, multiply13, 0);
AudioConnection          patchCord83(waveform1, 0, filter1B, 0);
AudioConnection          patchCord84(waveform1, 0, filter2B, 0);
AudioConnection          patchCord85(waveform1, 0, filter3B, 0);
AudioConnection          patchCord86(waveform1, 0, filter4B, 0);
AudioConnection          patchCord87(waveform1, 0, filter5B, 0);
AudioConnection          patchCord88(waveform1, 0, filter6B, 0);
AudioConnection          patchCord89(waveform1, 0, filter7B, 0);
AudioConnection          patchCord90(waveform1, 0, filter8B, 0);
AudioConnection          patchCord91(waveform1, 0, filter9B, 0);
AudioConnection          patchCord92(waveform1, 0, filter10B, 0);
AudioConnection          patchCord93(waveform1, 0, filter11B, 0);
AudioConnection          patchCord94(waveform1, 0, filter12B, 0);
AudioConnection          patchCord95(waveform1, 0, filter13B, 0);
AudioConnection          patchCord96(waveform1, 0, filter14B, 0);
AudioConnection          patchCord97(waveform1, 0, filter15B, 0);
AudioConnection          patchCord98(biquad15, 0, multiply15, 0);
AudioConnection          patchCord99(biquad16, 0, multiply16, 0);
AudioConnection          patchCord100(noise1, 0, filter16B, 0);
AudioConnection          patchCord101(filter1B, 0, Cfilter1, 0);
AudioConnection          patchCord102(filter2B, 1, Cfilter2, 0);
AudioConnection          patchCord103(filter3B, 1, Cfilter3, 0);
AudioConnection          patchCord104(filter4B, 1, Cfilter4, 0);
AudioConnection          patchCord105(filter5B, 1, Cfilter5, 0);
AudioConnection          patchCord106(filter6B, 1, Cfilter6, 0);
AudioConnection          patchCord107(filter7B, 1, Cfilter7, 0);
AudioConnection          patchCord108(filter9B, 1, Cfilter9, 0);
AudioConnection          patchCord109(filter8B, 1, Cfilter8, 0);
AudioConnection          patchCord110(filter10B, 1, Cfilter10, 0);
AudioConnection          patchCord111(filter11B, 1, Cfilter11, 0);
AudioConnection          patchCord112(filter12B, 1, Cfilter12, 0);
AudioConnection          patchCord113(filter13B, 1, Cfilter13, 0);
AudioConnection          patchCord114(filter14B, 1, Cfilter14, 0);
AudioConnection          patchCord115(filter15B, 1, Cfilter15, 0);
AudioConnection          patchCord116(filter16B, 2, Cfilter16, 0);
AudioConnection          patchCord117(Cfilter1, 0, multiply1, 1);
AudioConnection          patchCord118(Cfilter2, 1, multiply2, 1);
AudioConnection          patchCord119(Cfilter3, 1, multiply3, 1);
AudioConnection          patchCord120(Cfilter4, 1, multiply4, 1);
AudioConnection          patchCord121(Cfilter5, 1, multiply5, 1);
AudioConnection          patchCord122(Cfilter7, 1, multiply7, 1);
AudioConnection          patchCord123(Cfilter6, 1, multiply6, 1);
AudioConnection          patchCord124(Cfilter10, 1, multiply10, 1);
AudioConnection          patchCord125(Cfilter8, 1, multiply8, 1);
AudioConnection          patchCord126(Cfilter16, 2, multiply16, 1);
AudioConnection          patchCord127(Cfilter9, 1, multiply9, 1);
AudioConnection          patchCord128(Cfilter11, 1, multiply11, 1);
AudioConnection          patchCord129(Cfilter14, 1, multiply14, 1);
AudioConnection          patchCord130(Cfilter15, 1, multiply15, 1);
AudioConnection          patchCord131(Cfilter12, 1, multiply12, 1);
AudioConnection          patchCord132(Cfilter13, 1, multiply13, 1);
AudioConnection          patchCord133(multiply6, 0, mixer3, 1);
AudioConnection          patchCord134(multiply2, 0, mixer2, 1);
AudioConnection          patchCord135(multiply7, 0, mixer3, 2);
AudioConnection          patchCord136(multiply9, 0, mixer4, 0);
AudioConnection          patchCord137(multiply15, 0, mixer5, 2);
AudioConnection          patchCord138(multiply1, 0, mixer2, 0);
AudioConnection          patchCord139(multiply16, 0, mixer5, 3);
AudioConnection          patchCord140(multiply8, 0, mixer3, 3);
AudioConnection          patchCord141(multiply4, 0, mixer2, 3);
AudioConnection          patchCord142(multiply10, 0, mixer4, 1);
AudioConnection          patchCord143(multiply3, 0, mixer2, 2);
AudioConnection          patchCord144(multiply5, 0, mixer3, 0);
AudioConnection          patchCord145(multiply13, 0, mixer5, 0);
AudioConnection          patchCord146(multiply14, 0, mixer5, 1);
AudioConnection          patchCord147(multiply11, 0, mixer4, 2);
AudioConnection          patchCord148(multiply12, 0, mixer4, 3);
AudioConnection          patchCord149(mixer4, 0, mixer6, 2);
AudioConnection          patchCord150(mixer2, 0, mixer6, 0);
AudioConnection          patchCord151(mixer5, 0, mixer6, 3);
AudioConnection          patchCord152(mixer3, 0, mixer6, 1);
AudioConnection          patchCord153(mixer6, 0, mixer7, 0);
AudioConnection          patchCord154(playMem1, 0, mixer8, 0);
AudioConnection          patchCord155(playMem1, 0, mixer8, 1);
AudioConnection          patchCord156(delay1, 0, mixer7, 2);
AudioConnection          patchCord157(mixer7, delay1);
AudioConnection          patchCord158(mixer7, 0, mixer9, 0);
AudioConnection          patchCord159(mixer8, 0, mixer9, 1);
AudioConnection          patchCord160(mixer9, 0, i2s1, 0);
AudioConnection          patchCord161(mixer9, 0, i2s1, 1);
AudioControlSGTL5000     sgtl5000_1;     //xy=252.0833282470703,322
// GUItool: end automatically generated code
