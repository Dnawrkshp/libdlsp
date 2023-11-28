#ifndef _LIBDLSP_OVERLAY_H_
#define _LIBDLSP_OVERLAY_H_

#include "enums.h"

// number of levels we store in our overlay lookup table
// if we want to add coop support we should use LEVEL_ID_COOP_CONTROL_LEVEL
// or if we want MP support we should use LEVEL_ID_MP_SPLITSCREEN_GHOST_STATION
#define OVERLAY_ADDRESS_COUNT       (LEVEL_ID_CONTROL_LEVEL + 1)

typedef struct OverlayLookupAddress {
  void* Addresses[OVERLAY_ADDRESS_COUNT];
} OverlayLookupAddress_t;

#define DECLARE_OVERLAY_ADDRESS(name) extern OverlayLookupAddress_t name ## _lookup;

#define DEFINE_OVERLAY_ADDRESS_NTSC(name, offset_mainmenu, offset_bdome, offset_catacrom, offset_sarathos, offset_kronos, offset_shaar, offset_orxon, offset_valix, offset_torval, offset_stygia, offset_maraxus, offset_ghoststation, offset_controllevel)\
OverlayLookupAddress_t name ## _lookup = {\
  .Addresses = {\
    [LEVEL_ID_MAIN_MENU] (void*)(offset_mainmenu),\
    [LEVEL_ID_BATTLEDOME] (void*)(offset_bdome),\
    [LEVEL_ID_CATACROM] (void*)(offset_catacrom),\
    [LEVEL_ID_SARATHOS] (void*)(offset_sarathos),\
    [LEVEL_ID_KRONOS] (void*)(offset_kronos),\
    [LEVEL_ID_SHAAR] (void*)(offset_shaar),\
    [LEVEL_ID_ORXON] (void*)(offset_orxon),\
    [LEVEL_ID_VALIX] (void*)(offset_valix),\
    [LEVEL_ID_TORVAL] (void*)(offset_torval),\
    [LEVEL_ID_STYGIA] (void*)(offset_stygia),\
    [LEVEL_ID_MARAXUS] (void*)(offset_maraxus),\
    [LEVEL_ID_GHOST_STATION] (void*)(offset_ghoststation),\
    [LEVEL_ID_CONTROL_LEVEL] (void*)(offset_controllevel),\
  }\
};

void* GetOverlayAddress(OverlayLookupAddress_t* lookup);

#endif // _LIBDLSP_OVERLAY_H_
