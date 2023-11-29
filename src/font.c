#include "font.h"

//--------------------------------------------------------
void FontPrint(float x, float y, u64 rgba, char* s, int length, float scaleX, float scaleY, FontAlignment alignment, char bEnableDropShadow, u64 dropShadowColor, float dropShadowXOffset, float dropShadowYOffset)
{
  FontPrint_f fontPrint = (FontPrint_f)GetOverlayAddress(&FontPrint_func);
  if (!fontPrint) return;

  fontPrint(x, y, rgba, s, length, scaleX, scaleX, alignment, bEnableDropShadow, dropShadowColor, dropShadowXOffset, dropShadowYOffset);
}
