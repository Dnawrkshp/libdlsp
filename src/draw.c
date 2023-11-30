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
BEGIN_OVERLAY_LOOKUP(DrawWidget2DFlatPrim_asm_lookup, DrawWidget2DFlatPrim_f)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x004ee5c0)
END_OVERLAY_LOOKUP(DrawWidget2DFlatPrim_asm_lookup)

void DrawWidget2DFlatPrim(struct Widget2D* widget, u32 rgba, int prim_type)
{
  DrawWidget2DFlatPrim_f drawWidget2DFlatPrimFunc = (DrawWidget2DFlatPrim_f)GetOverlayAddress((void**)&DrawWidget2DFlatPrim_asm_lookup);
  if (!drawWidget2DFlatPrimFunc) return;

  drawWidget2DFlatPrimFunc(widget, rgba, prim_type);
}
