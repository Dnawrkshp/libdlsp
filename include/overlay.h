#ifndef _LIBDLSP_OVERLAY_H_
#define _LIBDLSP_OVERLAY_H_

#include "enums.h"
#include "pad.h"
#include "font.h"

#define DECLARE_OVERLAY_LOOKUP(name, type) extern type name[OVERLAY_LOOKUP_COUNT];

//--------------------------------------------------------
enum OverlayLookupIndexIds {
  OVERLAY_LOOKUP_MAIN_MENU = 0,
  OVERLAY_LOOKUP_BATTLEDOME = 1,
  OVERLAY_LOOKUP_CATACROM = 2,
  OVERLAY_LOOKUP_SARATHOS = 3,
  OVERLAY_LOOKUP_KRONOS = 4,
  OVERLAY_LOOKUP_SHAAR = 5,
  OVERLAY_LOOKUP_ORXON = 6,
  OVERLAY_LOOKUP_VALIX = 7,
  OVERLAY_LOOKUP_TORVAL = 8,
  OVERLAY_LOOKUP_STYGIA = 9,
  OVERLAY_LOOKUP_MARAXUS = 10,
  OVERLAY_LOOKUP_GHOST_STATION = 11,
  OVERLAY_LOOKUP_CONTROL_LEVEL = 12,
  OVERLAY_LOOKUP_MULTIPLAYER = 13,
  OVERLAY_LOOKUP_COUNT
};

//--------------------------------------------------------
typedef struct {
  void* Addresses[OVERLAY_LOOKUP_COUNT];
} OverlayLookupAddress_t;

//--------------------------------------------------------
DECLARE_OVERLAY_LOOKUP(UpdatePad_lookup, UpdatePad_f);
DECLARE_OVERLAY_LOOKUP(FontPrint_lookup, FontPrint_f);
DECLARE_OVERLAY_LOOKUP(FontStringLength_lookup, FontStringLength_f);
DECLARE_OVERLAY_LOOKUP(FontStringHeight_lookup, FontStringHeight_f);

//--------------------------------------------------------
// returns the current address from the given overlay lookup
// or null if failed
void* GetOverlayAddress(void** lookup);

extern char LevelToLookupIndexId[LEVEL_ID_COUNT];

#endif // _LIBDLSP_OVERLAY_H_
