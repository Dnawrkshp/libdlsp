#include "underlay.h"
#include "overlay.h"
#include "helpers.h"

//--------------------------------------------------------
void* GetOverlayAddress(OverlayLookupAddress_t* lookup)
{
  if (!lookup) return 0;

  int gameLevel = PEEK_U32(UNDERLAY_GAME_LEVEL);

  // unsupported level
  if (gameLevel >= OVERLAY_ADDRESS_COUNT) return 0;

  return lookup->Addresses[gameLevel];
}
