// types adapted from ccc output
// https://github.com/chaoticgd/ccc

#ifndef _LIBDLSP_TYPES_H_
#define _LIBDLSP_TYPES_H_

#include <tamtypes.h>

struct PAD { // 0x5c0
	/* 0x000 */ long long unsigned int pad_buf[16];
	/* 0x100 */ float analog[16];
	/* 0x140 */ float hudAnalog[16];
	/* 0x180 */ unsigned char profile[4];
	/* 0x184 */ unsigned char vib_profile[4];
	/* 0x188 */ unsigned char act_direct[4];
	/* 0x18c */ short int invalidTimer;
	/* 0x18e */ short int ringIndex;
	/* 0x190 */ int ringValidSize;
	/* 0x194 */ int socket;
	/* 0x198 */ int phase;
	/* 0x19c */ int state;
	/* 0x1a0 */ int bits;
	/* 0x1a4 */ int bitsOn;
	/* 0x1a8 */ int bitsOff;
	/* 0x1ac */ int bitsPrev;
	/* 0x1b0 */ int digitalBits;
	/* 0x1b4 */ int digitalBitsOn;
	/* 0x1b8 */ int digitalBitsOff;
	/* 0x1bc */ int digitalBitsPrev;
	/* 0x1c0 */ int hudBits;
	/* 0x1c4 */ int hudBitsOn;
	/* 0x1c8 */ int hudBitsOff;
	/* 0x1cc */ int hudDivert;
	/* 0x1d0 */ int handsOff;
	/* 0x1d4 */ int handsOffStick;
	/* 0x1d8 */ int useAnalog;
	/* 0x1dc */ int term_id;
	/* 0x1e0 */ int bitsOnRing[30];
	/* 0x258 */ float analogAngRing[30];
	/* 0x2d0 */ float analogMagRing[30];
	/* 0x348 */ int unmaskedBits;
	/* 0x34c */ int lagIndex;
	/* 0x350 */ int lagValidSize;
	/* 0x354 */ int bits_Lagged[7];
	/* 0x370 */ int digitalBits_Lagged[7];
	/* 0x38c */ float analog_Lagged[7][16];
	/* 0x54c */ u8 port;
	/* 0x54d */ u8 repeatDelay;
	/* 0x54e */ u8 repeatSpeed;
	/* 0x54f */ u8 repeatCounter;
	/* 0x550 */ u8 multi_tap_connected;
	/* 0x551 */ u8 disconnected;
	/* 0x552 */ unsigned char act_align[6];
	/* 0x558 */ u8 slot;
	/* 0x559 */ char initialized;
	/* 0x55c */ int rterm_id;
	/* 0x560 */ int id;
	/* 0x564 */ int exid;
	/* 0x568 */ int lagFrames;
	/* 0x56c */ void *RawPadInputCallback; /* RawPadInputCbFunc */
	/* 0x570 */ void *pCallbackData;
	/* 0x574 */ unsigned char rdata[32];
	/* 0x594 */ int ipad[10];
};

struct DrawParams { // 0x2c
	/* 0x00 */ int iUsing;
	/* 0x04 */ int iIcon;
	/* 0x08 */ void *pImage;
	/* 0x0c */ float fShadowX;
	/* 0x10 */ float fShadowY;
	/* 0x14 */ unsigned int iShadowColor;
	/* 0x18 */ unsigned int vColors[4];
	/* 0x28 */ float fFade;
};

#endif // _LIBDLSP_TYPES_H_
