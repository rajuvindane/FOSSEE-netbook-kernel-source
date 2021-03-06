#ifndef _TS8224B_H_
#define _TS8224B_H_

//Enable Page1	  hsd4.0
0xFF00, 0x55,
0xFF01, 0xAA,
0xFF02, 0x52,
0xFF03, 0x08,
0xFF04, 0x80,

0xF200, 0x00,
0xF201, 0x84,
0xF202, 0x02,

0xF40A, 0x13,

0xF000, 0x55,
0xF001, 0xAA,
0xF002, 0x52,
0xF003, 0x08,
0xF004, 0x01,

0xB000, 0x0D,
0xB001, 0x0D,
0xB002, 0x0D,

0xB600, 0x34,
0xB601, 0x34,
0xB602, 0x34,

0xB100, 0x0D,
0xB101, 0x0D,
0xB102, 0x0D,

// AVEE: manual,  -6V : -2.5xVCI)
0xB700, 0x34,
0xB701, 0x34,
0xB702, 0x34,

//Power Control for VCL
0xB200, 0x00,
0xB201, 0x00,
0xB202, 0x00,

0xB800, 0x24,
0xB801, 0x24,
0xB802, 0x24,

// VGH: Clamp Enable,  2*AVDD-AVEE, //11V
0xBF00, 0X01,

0xB300, 0x0F,
0xB301, 0x0F,
0xB302, 0x0F,

0xB900, 0x34,//34
0xB901, 0x34,
0xB902, 0x34,

// VGL_REG(VGLO):-10V
0xB500, 0x08,
0xB501, 0x08,
0xB502, 0x08,

0xC200, 0x03,

//VGL(LVGL):
0xBA00, 0x24,
0xBA01, 0x24,
0xBA02, 0x24,


// VGMP/VGSP:     4.8v
0xBC00, 0X00,
0xBC01, 0x78,
0xBC02, 0X00,

// VGMN/VGSN  -4.8v
0xBD00, 0x00,
0xBD01, 0x78,
0xBD02, 0x00,

// VCOM=-0.1
0xBE00, 0x00,
0xBE01, 0x80,  //2f
//R+
0xD100, 0x00,
0xD101, 0x05,
0xD102, 0x00,
0xD103, 0x06,
0xD104, 0x00,
0xD105, 0x0E,
0xD106, 0x00,
0xD107, 0x19,
0xD108, 0x00,
0xD109, 0x29,
0xD10A, 0x00,
0xD10B, 0x55,
0xD10C, 0x00,
0xD10D, 0x80,
0xD10E, 0x00,
0xD10F, 0xC7,
0xD110, 0x00,
0xD111, 0xFC,
0xD112, 0x01,
0xD113, 0x48,
0xD114, 0x01,
0xD115, 0x7C,
0xD116, 0x01,
0xD117, 0xC5,
0xD118, 0x01,
0xD119, 0xFE,
0xD11A, 0x02,
0xD11B, 0x00,
0xD11C, 0x02,
0xD11D, 0x30,
0xD11E, 0x02,
0xD11F, 0x60,
0xD120, 0x02,
0xD121, 0x7A,
0xD122, 0x02,
0xD123, 0x9A,
0xD124, 0x02,
0xD125, 0xAC,
0xD126, 0x02,
0xD127, 0xC4,
0xD128, 0x02,
0xD129, 0xD3,
0xD12A, 0x02,
0xD12B, 0xE9,
0xD12C, 0x02,
0xD12D, 0xF8,
0xD12E, 0x03,
0xD12F, 0x0D,
0xD130, 0x03,
0xD131, 0x3B,
0xD132, 0x05,
0xD133, 0xB5,
//G+
0xD200, 0x00,
0xD201, 0x05,
0xD202, 0x00,
0xD203, 0x06,
0xD204, 0x00,
0xD205, 0x0E,
0xD206, 0x00,
0xD207, 0x19,
0xD208, 0x00,
0xD209, 0x29,
0xD20A, 0x00,
0xD20B, 0x55,
0xD20C, 0x00,
0xD20D, 0x80,
0xD20E, 0x00,
0xD20F, 0xC7,
0xD210, 0x00,
0xD211, 0xFC,
0xD212, 0x01,
0xD213, 0x48,
0xD214, 0x01,
0xD215, 0x7C,
0xD216, 0x01,
0xD217, 0xC5,
0xD218, 0x01,
0xD219, 0xFE,
0xD21A, 0x02,
0xD21B, 0x00,
0xD21C, 0x02,
0xD21D, 0x30,
0xD21E, 0x02,
0xD21F, 0x60,
0xD220, 0x02,
0xD221, 0x7A,
0xD222, 0x02,
0xD223, 0x9A,
0xD224, 0x02,
0xD225, 0xAC,
0xD226, 0x02,
0xD227, 0xC4,
0xD228, 0x02,
0xD229, 0xD3,
0xD22A, 0x02,
0xD22B, 0xE9,
0xD22C, 0x02,
0xD22D, 0xF8,
0xD22E, 0x03,
0xD22F, 0x0D,
0xD230, 0x03,
0xD231, 0x3B,
0xD232, 0x05,
0xD233, 0xB5,
//B+
0xD300, 0x00,
0xD301, 0x05,
0xD302, 0x00,
0xD303, 0x06,
0xD304, 0x00,
0xD305, 0x0E,
0xD306, 0x00,
0xD307, 0x19,
0xD308, 0x00,
0xD309, 0x29,
0xD30A, 0x00,
0xD30B, 0x55,
0xD30C, 0x00,
0xD30D, 0x80,
0xD30E, 0x00,
0xD30F, 0xC7,
0xD310, 0x00,
0xD311, 0xFC,
0xD312, 0x01,
0xD313, 0x48,
0xD314, 0x01,
0xD315, 0x7C,
0xD316, 0x01,
0xD317, 0xC5,
0xD318, 0x01,
0xD319, 0xFE,
0xD31A, 0x02,
0xD31B, 0x00,
0xD31C, 0x02,
0xD31D, 0x30,
0xD31E, 0x02,
0xD31F, 0x60,
0xD320, 0x02,
0xD321, 0x7A,
0xD322, 0x02,
0xD323, 0x9A,
0xD324, 0x02,
0xD325, 0xAC,
0xD326, 0x02,
0xD327, 0xC4,
0xD328, 0x02,
0xD329, 0xD3,
0xD32A, 0x02,
0xD32B, 0xE9,
0xD32C, 0x02,
0xD32D, 0xF8,
0xD32E, 0x03,
0xD32F, 0x0D,
0xD330, 0x03,
0xD331, 0x3B,
0xD332, 0x05,
0xD333, 0xB5,
//R-
0xD400, 0x00,
0xD401, 0x05,
0xD402, 0x00,
0xD403, 0x06,
0xD404, 0x00,
0xD405, 0x0E,
0xD406, 0x00,
0xD407, 0x19,
0xD408, 0x00,
0xD409, 0x29,
0xD40A, 0x00,
0xD40B, 0x55,
0xD40C, 0x00,
0xD40D, 0x80,
0xD40E, 0x00,
0xD40F, 0xC7,
0xD410, 0x00,
0xD411, 0xFC,
0xD412, 0x01,
0xD413, 0x48,
0xD414, 0x01,
0xD415, 0x7C,
0xD416, 0x01,
0xD417, 0xC5,
0xD418, 0x01,
0xD419, 0xFE,
0xD41A, 0x02,
0xD41B, 0x00,
0xD41C, 0x02,
0xD41D, 0x30,
0xD41E, 0x02,
0xD41F, 0x60,
0xD420, 0x02,
0xD421, 0x7A,
0xD422, 0x02,
0xD423, 0x9A,
0xD424, 0x02,
0xD425, 0xAC,
0xD426, 0x02,
0xD427, 0xC4,
0xD428, 0x02,
0xD429, 0xD3,
0xD42A, 0x02,
0xD42B, 0xE9,
0xD42C, 0x02,
0xD42D, 0xF8,
0xD42E, 0x03,
0xD42F, 0x0D,
0xD430, 0x03,
0xD431, 0x3B,
0xD432, 0x05,
0xD433, 0xB5,
//G-
0xD500, 0x00,
0xD501, 0x05,
0xD502, 0x00,
0xD503, 0x06,
0xD504, 0x00,
0xD505, 0x0E,
0xD506, 0x00,
0xD507, 0x19,
0xD508, 0x00,
0xD509, 0x29,
0xD50A, 0x00,
0xD50B, 0x55,
0xD50C, 0x00,
0xD50D, 0x80,
0xD50E, 0x00,
0xD50F, 0xC7,
0xD510, 0x00,
0xD511, 0xFC,
0xD512, 0x01,
0xD513, 0x48,
0xD514, 0x01,
0xD515, 0x7C,
0xD516, 0x01,
0xD517, 0xC5,
0xD518, 0x01,
0xD519, 0xFE,
0xD51A, 0x02,
0xD51B, 0x00,
0xD51C, 0x02,
0xD51D, 0x30,
0xD51E, 0x02,
0xD51F, 0x60,
0xD520, 0x02,
0xD521, 0x7A,
0xD522, 0x02,
0xD523, 0x9A,
0xD524, 0x02,
0xD525, 0xAC,
0xD526, 0x02,
0xD527, 0xC4,
0xD528, 0x02,
0xD529, 0xD3,
0xD52A, 0x02,
0xD52B, 0xE9,
0xD52C, 0x02,
0xD52D, 0xF8,
0xD52E, 0x03,
0xD52F, 0x0D,
0xD530, 0x03,
0xD531, 0x3B,
0xD532, 0x05,
0xD533, 0xB5,
//B-
0xD600, 0x00,
0xD601, 0x05,
0xD602, 0x00,
0xD603, 0x06,
0xD604, 0x00,
0xD605, 0x0E,
0xD606, 0x00,
0xD607, 0x19,
0xD608, 0x00,
0xD609, 0x29,
0xD60A, 0x00,
0xD60B, 0x55,
0xD60C, 0x00,
0xD60D, 0x80,
0xD60E, 0x00,
0xD60F, 0xC7,
0xD610, 0x00,
0xD611, 0xFC,
0xD612, 0x01,
0xD613, 0x48,
0xD614, 0x01,
0xD615, 0x7C,
0xD616, 0x01,
0xD617, 0xC5,
0xD618, 0x01,
0xD619, 0xFE,
0xD61A, 0x02,
0xD61B, 0x00,
0xD61C, 0x02,
0xD61D, 0x30,
0xD61E, 0x02,
0xD61F, 0x60,
0xD620, 0x02,
0xD621, 0x7A,
0xD622, 0x02,
0xD623, 0x9A,
0xD624, 0x02,
0xD625, 0xAC,
0xD626, 0x02,
0xD627, 0xC4,
0xD628, 0x02,
0xD629, 0xD3,
0xD62A, 0x02,
0xD62B, 0xE9,
0xD62C, 0x02,
0xD62D, 0xF8,
0xD62E, 0x03,
0xD62F, 0x0D,
0xD630, 0x03,
0xD631, 0x3B,
0xD632, 0x05,
0xD633, 0xB5,

//Enable Page0
0xF000, 0x55,
0xF001, 0xAA,
0xF002, 0x52,
0xF003, 0x08,
0xF004, 0x00,


0xB100, 0xcc,
0xB101, 0x00,

0xB600, 0x05,

//// Gate EQ:
0xB700, 0x70,
0xB701, 0x70,

//// Source EQ:
0xB800, 0x01,
0xB801, 0x03,
0xB802, 0x03,
0xB803, 0x03,

// #Inversion mode  (2-dot)
0xBC00, 0x02,
0xBC01, 0x00,
0xBC02, 0x00,

// Timing control 4H w/ 4-delay
0xC900, 0xD0,
0xC901, 0x02,
0xC902, 0x50,
0xC903, 0x50,
0xC904, 0x50,
// Display Timing:

0x3600, 0x00,
0x3500, 0x00,

0x3a00, 0x66,

#endif
