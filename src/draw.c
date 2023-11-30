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
