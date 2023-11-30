#include "font.h"
#include "overlay.h"

//--------------------------------------------------------
void FontPrint(float x, float y, u64 rgba, char* s, int length, float scaleX, float scaleY, FontAlignment alignment, char bEnableDropShadow, u64 dropShadowColor, float dropShadowXOffset, float dropShadowYOffset)
{
  FontPrint_f fontPrintFunc = (FontPrint_f)GetOverlayAddress((void**)&FontPrint_lookup);
  if (!fontPrintFunc) return;

  fontPrintFunc(x, y, rgba, s, length, scaleX, scaleX, alignment, bEnableDropShadow, dropShadowColor, dropShadowXOffset, dropShadowYOffset);
}

//--------------------------------------------------------
int FontStringLength(char* s, int length, float scale)
{
  FontStringLength_f fontStringLengthFunc = (FontStringLength_f)GetOverlayAddress((void**)&FontStringLength_lookup);
  if (!fontStringLengthFunc) return 0;

  return fontStringLengthFunc(s, length, scale);
}

//--------------------------------------------------------
int FontStringHeight(char* s, int length, float scale)
{
  FontStringHeight_f fontStringHeightFunc = (FontStringHeight_f)GetOverlayAddress((void**)&FontStringHeight_lookup);
  if (!fontStringHeightFunc) return 0;

  return fontStringHeightFunc(s, length, scale);
}
