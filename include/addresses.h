#ifndef _LIBDLSP_ADDRESSES_H_
#define _LIBDLSP_ADDRESSES_H_

#include "lookup.h"
#include "enums.h"

#define DEFINE_UNDERLAY_ADDRESS_NTSC(name, offset) UnderlayLookupAddress_t name ## _lookup = { (void*)offset };
#define DEFINE_OVERLAY_ADDRESS_NTSC(name, offset_mainmenu, offset_bdome, offset_catacrom, offset_sarathos, offset_kronos, offset_shaar, offset_orxon, offset_valix, offset_torval, offset_stygia, offset_maraxus, offset_ghoststation, offset_controllevel)\
OverlayLookupAddress_t name = {\
  .Addresses = {\
    [LEVEL_ID_MAIN_MENU] (void*)offset_mainmenu,\
    [LEVEL_ID_BATTLEDOME] (void*)offset_bdome,\
    [LEVEL_ID_CATACROM] (void*)offset_catacrom,\
    [LEVEL_ID_SARATHOS] (void*)offset_sarathos,\
    [LEVEL_ID_KRONOS] (void*)offset_kronos,\
    [LEVEL_ID_SHAAR] (void*)offset_shaar,\
    [LEVEL_ID_ORXON] (void*)offset_orxon,\
    [LEVEL_ID_VALIX] (void*)offset_valix,\
    [LEVEL_ID_TORVAL] (void*)offset_torval,\
    [LEVEL_ID_STYGIA] (void*)offset_stygia,\
    [LEVEL_ID_MARAXUS] (void*)offset_maraxus,\
    [LEVEL_ID_GHOST_STATION] (void*)offset_ghoststation,\
    [LEVEL_ID_CONTROL_LEVEL] (void*)offset_controllevel,\
  }\
};

DEFINE_UNDERLAY_ADDRESS_NTSC(g_nwinfo, 0x00172160);

#endif // _LIBDLSP_ADDRESSES_H_
