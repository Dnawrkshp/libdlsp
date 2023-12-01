#include "draw.h"
#include "helpers.h"

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(DrawQuad_lookup, DrawQuad_f)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x00501f68)
  OVERLAY_LOOKUP_ENTRY_NTSC(CATACROM, 0x00606bb0)
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
  OVERLAY_LOOKUP_ENTRY_NTSC(CATACROM, 0x004ff568)
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
  OVERLAY_LOOKUP_ENTRY_NTSC(CATACROM, 0x005ebfa8)
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
  OVERLAY_LOOKUP_ENTRY_NTSC(CATACROM, 0x005ebc30)
END_OVERLAY_LOOKUP(DrawWidget2D_lookup)

void DrawWidget2D(struct Widget2D *pwidget, int scr_x, int scr_y, float scale_x, float scale_y, float theta_radians, u32 rgba, float t_frame)
{
  DrawWidget2D_f drawWidget2DFunc = (DrawWidget2D_f)GetOverlayAddress((void**)&DrawWidget2D_lookup);
  if (!drawWidget2DFunc) return;

  drawWidget2DFunc(pwidget, scr_x, scr_y, scale_x, scale_y, theta_radians, rgba, t_frame);
}

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(CanvasToScreenX_lookup, float*)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x00220ae4)
  OVERLAY_LOOKUP_ENTRY_NTSC(CATACROM, 0x0022043c)
END_OVERLAY_LOOKUP(CanvasToScreenX_lookup)

float GetCanvasToScreenX(void)
{
  void* canvasToScreenXAddr = GetOverlayAddress((void**)&CanvasToScreenX_lookup);
  if (!canvasToScreenXAddr) return 512; // default

  return PEEK_F32(canvasToScreenXAddr);
}

//--------------------------------------------------------
BEGIN_OVERLAY_LOOKUP(CanvasToScreenY_lookup, float*)
  OVERLAY_LOOKUP_ENTRY_NTSC(MAIN_MENU, 0x00220ae8)
  OVERLAY_LOOKUP_ENTRY_NTSC(CATACROM, 0x00220440)
END_OVERLAY_LOOKUP(CanvasToScreenY_lookup)

float GetCanvasToScreenY(void)
{
  void* canvasToScreenYAddr = GetOverlayAddress((void**)&CanvasToScreenY_lookup);
  if (!canvasToScreenYAddr) return 416; // default

  return PEEK_F32(canvasToScreenYAddr);
}
