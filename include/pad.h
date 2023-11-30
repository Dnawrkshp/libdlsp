#ifndef _LIBDLSP_PAD_H_
#define _LIBDLSP_PAD_H_

#define PAD_LEFT            0x0080
#define PAD_DOWN            0x0040
#define PAD_RIGHT           0x0020
#define PAD_UP              0x0010
#define PAD_START           0x0008
#define PAD_R3              0x0004
#define PAD_L3              0x0002
#define PAD_SELECT          0x0001
#define PAD_SQUARE          0x8000
#define PAD_CROSS           0x4000
#define PAD_CIRCLE          0x2000
#define PAD_TRIANGLE        0x1000
#define PAD_R1              0x0800
#define PAD_L1              0x0400
#define PAD_R2              0x0200
#define PAD_L2              0x0100

#include <tamtypes.h>
#include "types.h"
#include "overlay.h"

//--------------------------------------------------------
typedef void (*UpdatePad_f)(struct PAD* pad);

//--------------------------------------------------------
DECLARE_OVERLAY_LOOKUP(UpdatePad_lookup, UpdatePad_f);

#endif // _LIBDLSP_PAD_H_
