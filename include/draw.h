#ifndef _LIBDLSP_DRAW_H_
#define _LIBDLSP_DRAW_H_

#include <tamtypes.h>
#include "types.h"
#include "math3d.h"
#include "overlay.h"

//--------------------------------------------------------
typedef void (*DrawQuad_f)(vec2f *vPoints, struct DrawParams *pParams);

//--------------------------------------------------------
DECLARE_OVERLAY_LOOKUP(DrawQuad_lookup, DrawQuad_f);

//--------------------------------------------------------
void DrawQuad(vec2f *vPoints, struct DrawParams *pParams);

#endif // _LIBDLSP_DRAW_H_
