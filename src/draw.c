#include "draw.h"

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(DrawQuad_lookup, DrawQuad_f)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x00501f68)
END_OVERLAY_LOOKUP(DrawQuad_lookup)

void DrawQuad(vec2f *vPoints, struct DrawParams *pParams)
{
  DrawQuad_f drawQuadFunc = (DrawQuad_f)GetOverlayAddress((void**)&DrawQuad_lookup);
  if (!drawQuadFunc) return;

  drawQuadFunc(vPoints, pParams);
}

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(DrawScreenGQuad_lookup, DrawScreenGQuad_f)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x0044aa58)
END_OVERLAY_LOOKUP(DrawScreenGQuad_lookup)

void DrawScreenGQuad(u64 *xys, u32 *rgbas)
{
  DrawScreenGQuad_f drawScreenGQuadFunc = (DrawScreenGQuad_f)GetOverlayAddress((void**)&DrawScreenGQuad_lookup);
  if (!drawScreenGQuadFunc) return;

  drawScreenGQuadFunc(xys, rgbas);
}

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(DrawWidget2DFlatPrim_asm_lookup, DrawWidget2DFlatPrim_f)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x004ee5c0)
END_OVERLAY_LOOKUP(DrawWidget2DFlatPrim_asm_lookup)

void DrawWidget2DFlatPrim(struct Widget2D* widget, u32 rgba, int prim_type)
{
  DrawWidget2DFlatPrim_f drawWidget2DFlatPrimFunc = (DrawWidget2DFlatPrim_f)GetOverlayAddress((void**)&DrawWidget2DFlatPrim_asm_lookup);
  if (!drawWidget2DFlatPrimFunc) return;

  drawWidget2DFlatPrimFunc(widget, rgba, prim_type);
}

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(DrawWidget2D_lookup, DrawWidget2D_f)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x004ee248)
END_OVERLAY_LOOKUP(DrawWidget2D_lookup)

void DrawWidget2D(struct Widget2D *pwidget, int scr_x, int scr_y, float scale_x, float scale_y, float theta_radians, u32 rgba, float t_frame)
{
  DrawWidget2D_f drawWidget2DFunc = (DrawWidget2D_f)GetOverlayAddress((void**)&DrawWidget2D_lookup);
  if (!drawWidget2DFunc) return;

  drawWidget2DFunc(pwidget, scr_x, scr_y, scale_x, scale_y, theta_radians, rgba, t_frame);
}
