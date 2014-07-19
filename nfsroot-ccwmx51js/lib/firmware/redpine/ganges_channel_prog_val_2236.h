/*HEADER**********************************************************************

Project name 	: Lite-Fi
File Name    	: ganges_channel_prog_val_2236.h
File Description: BBP RF Programming value for RF AL2236

Rev History:
Ver  By    date       Description
---------------------------------------------------------
1.8  Nagaraj 	  Added changes done by fariya(to overcome compilation issues in the driver 
		  and to improve overall readability). 
---------------------------------------------------------
 
*END*************************************************************************/
#ifndef RSI_CHAN_PROG_VAL_H
#define RSI_CHAN_PROG_VAL_H

struct scan_programming_seq_t RF_channel_40mhz = {
 84,6,{
   /*channel 1 */
    { 0xC00F,0x00DE,0x0340, 0xC00C,0x00CC,0x03C4 },
   /*channel 2 */
    { 0xC00F,0x00DE,0x0340, 0xC02C,0x00CC,0x03C4 },
       /*channel 3 */
    { 0xC00F,0x009E,0x0340, 0xC00C,0x00CC,0x03C4 },
       /*channel 4 */
    { 0xC00F,0x009E,0x0340, 0xC02C,0x00CC,0x03C4 },
       /*channel 5 */
    { 0xC00F,0x00DE,0x0380, 0xC00C,0x00CC,0x03C4 },
       /*channel 6 */
    { 0xC00F,0x00DE,0x0380, 0xC02C,0x00CC,0x03C4 },
       /*channel 7 */
    { 0xC00F,0x009E,0x0380, 0xC00C,0x00CC,0x03C4 },
       /*channel 8 */
    { 0xC00F,0x009E,0x0380, 0xC02C,0x00CC,0x03C4 },
       /*channel 9 */
    { 0xC00F,0x00DE,0x03C0, 0xC00C,0x00CC,0x03C4 },
       /*channel 10 */
    { 0xC00F,0x00DE,0x03C0, 0xC02C,0x00CC,0x03C4 },
       /*channel 11 */
    { 0xC00F,0x009E,0x03C0, 0xC00C,0x00CC,0x03C4 },
       /*channel 12 */
    { 0XC00F,0X009E,0X03C0, 0XC02C,0X00CC,0X03C4 },
       /*channel 13 */
    { 0XC00F,0X00DF,0X0300, 0XC00C,0X00CC,0X03C4 },
       /*channel 14 */
    { 0XC00F,0X009F,0X0300, 0XC019,0X0099,0X0384 }
    }
};

struct scan_programming_seq_t RF_channel_20mhz = {
 84,6,{
       /*channel 1 */
    { 0xC007,0x00DE,0x0340, 0xC00C,0x00CC,0x03C4 },
       /*channel 2 */
    { 0xC007,0x00DE,0x0340, 0xC02C,0x00CC,0x03C4 },
       /*channel 3 */
    { 0xC007,0x009E,0x0340, 0xC00C,0x00CC,0x03C4 },
       /*channel 4 */
    { 0xC007,0x009E,0x0340, 0xC02C,0x00CC,0x03C4 },
       /*channel 5 */
    { 0xC007,0x00DE,0x0380, 0xC00C,0x00CC,0x03C4 },
       /*channel 6 */
    { 0xC007,0x00DE,0x0380, 0xC02C,0x00CC,0x03C4 },
       /*channel 7 */
    { 0xC007,0x009E,0x0380, 0xC00C,0x00CC,0x03C4 },
       /*channel 8 */
    { 0xC007,0x009E,0x0380, 0xC02C,0x00CC,0x03C4 },
       /*channel 9 */
    { 0xC007,0x00DE,0x03C0, 0xC00C,0x00CC,0x03C4 },
       /*channel 10 */
    { 0xC007,0x00DE,0x03C0, 0xC02C,0x00CC,0x03C4 },
       /*channel 11 */
    { 0xC007,0x009E,0x03C0, 0xC00C,0x00CC,0x03C4 },
       /*channel 12 */
    { 0XC00F,0X009E,0X03C0, 0XC02C,0X00CC,0X03C4 },
       /*channel 13 */
    { 0XC00F,0X00DF,0X0300, 0XC00C,0X00CC,0X03C4 },
       /*channel 14 */
    { 0XC00F,0X009F,0X0300, 0XC019,0X0099,0X0384 }
    }
};

struct scan_programming_seq_t RF_channel_44mhz = {
 84,6,{
       /*channel 1 */
{ 0xC00F,0x00DB,0x0380, 0xC011,0x0074,0x0344 },
       /*channel 2 */
{ 0xC00F,0x00DB,0x0380, 0xC02E,0x008B,0x03C4 },
       /*channel 3 */
{ 0xC00F,0x009B,0x0380, 0xC00B,0x00A3,0x0304 },
       /*channel 4 */
{ 0xC00F,0x009B,0x0380, 0xC028,0x00BA,0x0344 },
       /*channel 5 */
{ 0xC00F,0x00DB,0x03C0, 0xC005,0x00D1,0x0384 },
       /*channel 6 */
{ 0xC00F,0x00DB,0x03C0, 0xC022,0x00E8,0x03C4 },
       /*channel 7 */
{ 0xC00F,0x009B,0x03C0, 0xC000,0x0000,0x0304 },
       /*channel 8 */
{ 0xC00F,0x009B,0x03C0, 0xC01D,0x0017,0x0344 },
       /*channel 9 */
{ 0xC00F,0x009B,0x03C0, 0xC03A,0x002E,0x0384 },
       /*channel 10 */
{ 0xC00F,0x00DC,0x0300, 0xC017,0x0045,0x03C4 },
       /*channel 11 */
{ 0xC00F,0x00DC,0x0300, 0xC034,0x005D,0x0304 },
       /*channel 12 */
{ 0XC00F,0X009E,0X03C0, 0XC02C,0X00CC,0X03C4 },
       /*channel 13 */
{ 0XC00F,0X00DF,0X0300, 0XC00C,0X00CC,0X03C4 },
       /*channel 14 */
{ 0XC00F,0X009F,0X0300, 0XC019,0X0099,0X0384 }
}
};

struct scan_programming_seq_t RF_channel_26mhz = {
 84,6,{
       /*channel 1 */
{ 0xC007,0x00D7,0x0340, 0xC022,0x0076,0x0344 },
       /*channel 2 */
{ 0xC007,0x00D7,0x0340, 0xC03B,0x0013,0x03C4 },
       /*channel 3 */
{ 0xC007,0x0097,0x0340, 0xC013,0x00B1,0x0344 },
       /*channel 4 */
{ 0xC007,0x0097,0x0340, 0xC02C,0x004E,0x03C4 },
       /*channel 5 */
{ 0xC007,0x00D7,0x0380, 0xC004,0x00EC,0x0344 },
       /*channel 6 */
{ 0xC007,0x00D7,0x0380, 0xC01D,0x0089,0x03C4 },
       /*channel 7 */
{ 0xC007,0x00D7,0x0380, 0xC036,0x0027,0x0384 },
       /*channel 8 */
{ 0xC007,0x0097,0x0380, 0xC00E,0x00C5,0x0304 },
       /*channel 9 */
{ 0xC007,0x0097,0x0380, 0xC027,0x0062,0x0384 },
       /*channel 10 */
{ 0xC007,0x00D7,0x03C0, 0xC000,0x0000,0x0304 },
       /*channel 11 */
{ 0xC007,0x00D7,0x03C0, 0xC018,0x009D,0x0384 },
       /*channel 12 */
{ 0XC00F,0X009E,0X03C0, 0XC02C,0X00CC,0X03C4 },
       /*channel 13 */
{ 0XC00F,0X00DF,0X0300, 0XC00C,0X00CC,0X03C4 },
       /*channel 14 */
{ 0XC00F,0X009F,0X0300, 0XC019,0X0099,0X0384 }
}
};

struct scan_programming_seq_t RF_channel_13mhz = {
 84,6,{
       /*channel 1 */
{ 0xC017,0x00EE,0x0380, 0xC004,0x00EC,0x0344 },
       /*channel 2 */
{ 0xC017,0x00EE,0x0380, 0xC036,0x0027,0x0384 },
       /*channel 3 */
{ 0xC017,0x00AE,0x0380, 0xC027,0x0062,0x0384 },
       /*channel 4 */
{ 0xC017,0x00EE,0x03C0, 0xC018,0x009D,0x0384 },
       /*channel 5 */
{ 0xC017,0x00AE,0x03C0, 0xC009,0x00D8,0x0384 },
       /*channel 6 */
{ 0xC017,0x00AE,0x03C0, 0xC03B,0x0013,0x03C4 },
       /*channel 7 */
{ 0xC017,0x00EF,0x0300, 0xC02C,0x004E,0x03C4 },
       /*channel 8 */
{ 0xC017,0x00AF,0x0300, 0xC01D,0x0089,0x03C4 },
       /*channel 9 */
{ 0xC017,0x00EF,0x0340, 0xC00E,0x00C5,0x0304 },
       /*channel 10 */
{ 0xC017,0x00AF,0x0340, 0xC000,0x0000,0x0304 },
       /*channel 11 */
{ 0xC017,0x00AF,0x0340, 0xC031,0x003B,0x0304 },
       /*channel 12 */
{ 0XC00F,0X009E,0X03C0, 0XC02C,0X00CC,0X03C4 },
       /*channel 13 */
{ 0XC00F,0X00DF,0X0300, 0XC00C,0X00CC,0X03C4 },
       /*channel 14 */
{ 0XC00F,0X009F,0X0300, 0XC019,0X0099,0X0384 }
}
};



struct scan_programming_seq_t RF_channel_19p2mhz = {
 84,6,{
       /*channel 1 */
{ 0xC007,0x00DF,0x0380, 0xC010,0x0000,0x0304 },
       /*channel 2 */
{ 0xC007,0x00DF,0x0380, 0xC031,0x0055,0x0344 },
       /*channel 3 */
{ 0xC007,0x009F,0x0380, 0xC012,0x00AA,0x03C4 },
       /*channel 4 */
{ 0xC007,0x009F,0x0380, 0xC034,0x0000,0x0304 },
       /*channel 5 */
{ 0xC007,0x00DF,0x03C0, 0xC015,0x0055,0x0344 },
       /*channel 6 */
{ 0xC007,0x00DF,0x03C0, 0xC036,0x00AA,0x03C4 },
       /*channel 7 */
{ 0xC007,0x009F,0x03C0, 0xC018,0x0000,0x0304 },
       /*channel 8 */
{ 0xC007,0x009F,0x03C0, 0xC039,0x0055,0x0344 },
       /*channel 9 */
{ 0xC007,0x00E0,0x0300, 0xC01A,0x00AA,0x03C4 },
       /*channel 10 */
{ 0xC007,0x00E0,0x0300, 0xC03C,0x0000,0x0304 },
       /*channel 11 */
{ 0xC007,0x00A0,0x0300, 0xC01D,0x0055,0x0344 },
       /*channel 12 */
{ 0XC00F,0X009E,0X03C0, 0XC02C,0X00CC,0X03C4 }, 
       /*channel 13 */
{ 0XC00F,0X00DF,0X0300, 0XC00C,0X00CC,0X03C4 }, 
       /*channel 14 */
{ 0XC00F,0X009F,0X0300, 0XC019,0X0099,0X0384 } 
}
};

struct programming_seq_t initialize_BB_RF_20Mhz = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC007,0x00DE,0x0340, 0,
    0xC00C,0x00CC,0x03C4, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0000,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_20Mhz_fr4 = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC007,0x00DE,0x0340, 0,
    0xC00C,0x00CC,0x03C4, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0000,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_13Mhz = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC017,0x00EE,0x0380, 0,
    0xC004,0x00EC,0x0344, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0020,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_13Mhz_fr4 = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC017,0x00EE,0x0380, 0,
    0xC004,0x00EC,0x0344, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0020,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};


struct programming_seq_t initialize_BB_RF_26Mhz = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC007,0x00D7,0x0340, 0,
    0xC022,0x0076,0x0344, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0020,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_26Mhz_fr4 = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC007,0x00D7,0x0340, 0,
    0xC022,0x0076,0x0344, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0020,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_44Mhz = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC00F,0x00DB,0x0380, 0,
    0xC011,0x0074,0x0344, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0040,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_44Mhz_fr4 = {
  198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC00F,0x00DB,0x0380, 0,
    0xC011,0x0074,0x0344, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0040,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};


struct programming_seq_t initialize_BB_RF_19p2Mhz = {
 198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC007,0x00DF,0x0380, 0,
    0xC010,0x0000,0x0304, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0060,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_19p2Mhz_fr4 = {
 198,5,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,56,
    0xC007,0x00DF,0x0380, 0,
    0xC010,0x0000,0x0304, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0060,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_40Mhz = {
 198,5,
{
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01, 4,56,
    0xC00F,0x00DE,0x0340, 0,
    0xC00C,0x00CC,0x03C4, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0000,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t initialize_BB_RF_40Mhz_fr4 = {
 198,5,
{
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57E8,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x780E,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01, 4,56,
    0xC00F,0x00DE,0x0340, 0,
    0xC00C,0x00CC,0x03C4, 0,
    0xC002,0x00E0,0x0308, 0,
    0xC003,0x00FB,0x03CC, 0,
    0xC024,0x0016,0x0390, 0,
    0xC03D,0x0037,0x0314, 0,
    0xC020,0x0016,0x03D8, 0,
    0xC004,0x005B,0x031C, 0,
    0xC016,0x00DA,0x0320, 0,
    0xC015,0x000E,0x03E4, 0,
    0xC003,0x006E,0x03E8, 0,
    0xC000,0x003E,0x036C, 0,
    0xC00E,0x0076,0x0330, 0,
    0xC020,0x0000,0x0334, 0},
   {0x0, 1,0x57EA},
   {0x01, 4, 20,
    0xC001,0x0061,0x03FC, 150,
    0xC003,0x0061,0x03FC, 50,
    0xC001,0x00E1,0x03FC, 50,
    0xC001,0x0061,0x03FC, 150,
    0xC015,0x000A,0x03E4, 0},
   {0x0, 1,0x7800}
  }
};

struct programming_seq_t RF_sleep_seq = {
  11,2,
  {
    {0x0,4,0x5600, 0x5400, 0x5C00, 0x780E},
    {0x01,3,0xC014,0x005B,0x031C }
  }
};
                                                                                                                             
struct programming_seq_t RF_wakeup_seq = {
  112,2,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E44,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57EA,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x7800,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,0xC004,0x005B,0x031C,140}
  }
};

struct programming_seq_t RF_wakeup_seq_fr4 = {
  112,2,
  {
   {0x0,104,
    0x0000,0x0200,0x0478,0x0678,0x0878,0x0A78,0x0D50,0x0E06,
    0x102C,0x12DE,0x1478,0x1658,0x1800,0x1A48,0x1C28,0x1FFE,
    0x21FE,0x2340,0x243E,0x2722,0x282E,0x2BC8,0x2DA8,0x2E04,
    0x3110,0x3282,0x3482,0x36E2,0x383A,0x3B2E,0x3C08,0x3E16,
    0x404A,0x4206,0x4414,0x4686,0x49F6,0x4A64,0x4D4E,0x4F10,
    0x5184,0x522A,0x55A8,0x57EA,0x59E0,0x5B24,0x5DE0,0x5E00,
    0x6002,0x6204,0x6406,0x6696,0x68DA,0x6AC0,0x6D80,0x6F10,
    0x7100,0x72FE,0x74E4,0x76E2,0x7800,0x7A00,0x7C20,0x7E12,
    0x8008,0x8200,0x8400,0x8600,0x8900,0x8B80,0x8CD0,0x8F00,
    0x55A8,0x91FC,0x93F0,0x944C,0x96B0,0x9808,0x9AD0,0x9D5A,
    0x9FA4,0xA000,0xA2C0,0xB400,0xB676,0xB9B0,0xBA0C,0xBC26,
    0xBE00,0xC000,0xC200,0xC400,0xD222,0xDFFE,0xE000,0xE200,
    0xE400,0xE600,0xE9FE,0xEA00,0xEC00,0xEE00,0xF000,0xF608},
   {0x01,4,0xC004,0x005B,0x031C,140}
  }
};


struct programming_seq_t RF_power_val_set = {
  41,2,
  {
    /* MCS7 MCS6 MCS5 MCS4 MCS3 MCS2 MCS1 MCS0  54  48   36   24   18   12   11   9    6    5.5  2    1 */
    {0x53,0x53,0x57,0x5D,0x5D,0x5D,0x5D,0x5D,0x53,0x57,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D,0x5D},
    {0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x2B,0x34,0x39,0x3E,0x3F,0x3D,0x3F,0x3F,0x3D,0x3D,0x3D}
  }
};

#endif