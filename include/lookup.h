#ifndef _LIBDLSP_LOOKUP_H_
#define _LIBDLSP_LOOKUP_H_

#include "types.h"
#include "enums.h"

// number of levels we store in our overlay lookup table
// if we want to add coop support we should use LEVEL_ID_COOP_CONTROL_LEVEL
// or if we want MP support we should use LEVEL_ID_MP_SPLITSCREEN_GHOST_STATION
#define OVERLAY_ADDRESS_COUNT       (LEVEL_ID_CONTROL_LEVEL + 1)

typedef struct UnderlayLookupAddress {
  void* Address;
} UnderlayLookupAddress_t;

typedef struct OverlayLookupAddress {
  void* Addresses[OVERLAY_ADDRESS_COUNT];
} OverlayLookupAddress_t;

void* GetUnderlayAddress(UnderlayLookupAddress_t* lookup);
void* GetOverlayAddress(OverlayLookupAddress_t* lookup);

#endif // _LIBDLSP_LOOKUP_H_
