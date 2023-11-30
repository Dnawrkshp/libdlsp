#ifndef _LIBDLSP_PAD_H_
#define _LIBDLSP_PAD_H_

#include <tamtypes.h>
#include "types.h"
#include "overlay.h"

//--------------------------------------------------------
typedef void (*UpdatePad_f)(struct PAD* pad);

//--------------------------------------------------------
DECLARE_OVERLAY_LOOKUP(UpdatePad_lookup, UpdatePad_f);

#endif // _LIBDLSP_PAD_H_
