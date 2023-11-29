#include "underlay.h"
#include "overlay.h"
#include "helpers.h"

//--------------------------------------------------------
DEFINE_OVERLAY_LOOKUP_NTSC(UpdatePad_func
  , 0x00490400
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
);

//--------------------------------------------------------
DEFINE_OVERLAY_LOOKUP_NTSC(FontPrint_func
  , 0x00454a70
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
  , 0x0
);

//--------------------------------------------------------
void* GetOverlayAddress(OverlayLookupAddress_t* lookup)
{
  if (!lookup) return 0;

  int gameLevel = PEEK_U32(UNDERLAY_GAME_LEVEL);

  // unsupported level
  if (gameLevel >= OVERLAY_ADDRESS_COUNT) return 0;

  return lookup->Addresses[gameLevel];
}
