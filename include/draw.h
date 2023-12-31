#ifndef _LIBDLSP_DRAW_H_
#define _LIBDLSP_DRAW_H_

#include <tamtypes.h>
#include "types.h"
#include "math3d.h"
#include "overlay.h"

#define SCREEN_OFFSET_X         (*(int*)UNDERLAY_FIXED_SCREEN_OFFSET_X)
#define SCREEN_OFFSET_Y         (*(int*)UNDERLAY_FIXED_SCREEN_OFFSET_Y)

//--------------------------------------------------------
typedef void (*DrawQuad_f)(vec2f *vPoints, struct DrawParams *pParams);
typedef void (*DrawScreenGQuad_f)(u64 *xys, u32 *rgbas);
typedef void (*DrawWidget2DFlatPrim_f)(struct Widget2D* widget, u32 rgba, int prim_type);
typedef void (*DrawWidget2D_f)(struct Widget2D *pwidget, int scr_x, int scr_y, float scale_x, float scale_y, float theta_radians, u32 rgba, float t_frame);
typedef void (*VU1AddGsRegister_f)(u32 reg, u64 rval);
typedef void (*VU1SetScissor_f)(int left, int right, int top, int bottom);

//--------------------------------------------------------
DECLARE_OVERLAY_LOOKUP(DrawQuad_lookup, DrawQuad_f);
DECLARE_OVERLAY_LOOKUP(DrawScreenGQuad_lookup, DrawScreenGQuad_f);
DECLARE_OVERLAY_LOOKUP(DrawWidget2DFlatPrim_asm_lookup, DrawWidget2DFlatPrim_f);
DECLARE_OVERLAY_LOOKUP(DrawWidget2D_lookup, DrawWidget2D_f);
DECLARE_OVERLAY_LOOKUP(VU1AddGsRegister_lookup, VU1AddGsRegister_f);
DECLARE_OVERLAY_LOOKUP(VU1SetScissor_lookup, VU1SetScissor_f);

DECLARE_OVERLAY_LOOKUP(CanvasToScreenX_lookup, float*);
DECLARE_OVERLAY_LOOKUP(CanvasToScreenY_lookup, float*);

//--------------------------------------------------------
void DrawQuad(vec2f *vPoints, struct DrawParams *pParams);
void DrawScreenGQuad(u64 *xys, u32 *rgbas);
void DrawWidget2DFlatPrim(struct Widget2D* widget, u32 rgba, int prim_type);
void DrawWidget2D(struct Widget2D *pwidget, int scr_x, int scr_y, float scale_x, float scale_y, float theta_radians, u32 rgba, float t_frame);
void VU1AddGsRegister(u32 reg, u64 rval);
void VU1SetScissor(int left, int right, int top, int bottom);

float GetCanvasToScreenX(void);
float GetCanvasToScreenY(void);

#endif // _LIBDLSP_DRAW_H_
