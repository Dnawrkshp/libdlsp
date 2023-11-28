#include "lookup.h"
#include "addresses.h"
#include "types.h"

//--------------------------------------------------------
void* GetUnderlayAddress(UnderlayLookupAddress_t* lookup)
{
  if (!lookup) return 0;
  return lookup->Address;
}

//--------------------------------------------------------
void* GetOverlayAddress(OverlayLookupAddress_t* lookup)
{
  if (!lookup) return 0;

  tNW_Info* nwInfo = (tNW_Info*)GetUnderlayAddress(&g_nwinfo_lookup);
  if (!nwInfo) return 0;

  // unsupported level
  if (nwInfo->GameLevel >= OVERLAY_ADDRESS_COUNT) return 0;

  return lookup->Addresses[nwInfo->GameLevel];
}
