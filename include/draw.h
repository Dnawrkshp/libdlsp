#ifndef _LIBDLSP_DRAW_H_
#define _LIBDLSP_DRAW_H_

#include <tamtypes.h>
#include "types.h"
#include "math3d.h"
#include "overlay.h"

//--------------------------------------------------------
typedef void (*DrawQuad_f)(vec2f *vPoints, struct DrawParams *pParams);
typedef void (*DrawWidget2DFlatPrim_f)(struct Widget2D* widget, u32 rgba, int prim_type);

//--------------------------------------------------------
DECLARE_OVERLAY_LOOKUP(DrawQuad_lookup, DrawQuad_f);
DECLARE_OVERLAY_LOOKUP(DrawWidget2DFlatPrim_asm_lookup, DrawWidget2DFlatPrim_f);

//--------------------------------------------------------
void DrawQuad(vec2f *vPoints, struct DrawParams *pParams);
void DrawWidget2DFlatPrim(struct Widget2D* widget, u32 rgba, int prim_type);

#endif // _LIBDLSP_DRAW_H_
