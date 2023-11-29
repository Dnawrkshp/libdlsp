#include "underlay.h"
#include "overlay.h"
#include "helpers.h"

//--------------------------------------------------------
DEFINE_OVERLAY_LOOKUP_NTSC(UpdatePad_lookup
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
DEFINE_OVERLAY_LOOKUP_NTSC(FontPrint_lookup
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
DEFINE_OVERLAY_LOOKUP_NTSC(FontStringLength_lookup
  , 0x00454780
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
DEFINE_OVERLAY_LOOKUP_NTSC(FontStringHeight_lookup
  , 0x00454600
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
