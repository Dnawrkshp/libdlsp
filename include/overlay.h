#ifndef _LIBDLSP_OVERLAY_H_
#define _LIBDLSP_OVERLAY_H_

#include "enums.h"

#define DECLARE_OVERLAY_LOOKUP(name, type) extern type name[OVERLAY_LOOKUP_COUNT];
#define BEGIN_OVERLAY_LOOKUP(name, type) type name[OVERLAY_LOOKUP_COUNT] = {
#define END_OVERLAY_LOOKUP(name) };

#if NTSC
#define OVERLAY_LOOKUP_ENTRY_NTSC(level, offset) [OVERLAY_LOOKUP_ ## level] (void*)(offset),
#define OVERLAY_LOOKUP_ENTRY_PAL(level, offset) 
#elif PAL
#define OVERLAY_LOOKUP_ENTRY_NTSC(level, offset) 
#define OVERLAY_LOOKUP_ENTRY_PAL(level, offset) [OVERLAY_LOOKUP_ ## level] (void*)(offset),
#endif

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
  OVERLAY_LOOKUP_MP_INGAME = 13,
  OVERLAY_LOOKUP_COUNT
};

//--------------------------------------------------------
// returns the current address from the given overlay lookup
// or null if failed
void* GetOverlayAddress(void** lookup);

extern char LevelToLookupIndexId[LEVEL_ID_COUNT];

#endif // _LIBDLSP_OVERLAY_H_
