#ifndef _LIBDLSP_FONT_H_
#define _LIBDLSP_FONT_H_

#include <tamtypes.h>

typedef enum {
	TOP_LEFT = 0,
	TOP_CENTER = 1,
	TOP_RIGHT = 2,
	CENTER_LEFT = 3,
	CENTER_CENTER = 4,
	CENTER_RIGHT = 5,
	BOTTOM_LEFT = 6,
	BOTTOM_CENTER = 7,
	BOTTOM_RIGHT = 8
} FontAlignment;

typedef void (*FontPrint_f)(float x, float y, u64 rgba, char* s, int length, float scaleX, float scaleY, FontAlignment alignment, char bEnableDropShadow, u64 dropShadowColor, float dropShadowXOffset, float dropShadowYOffset);
typedef int (*FontStringLength_f)(char* s, int length, float scale);
typedef int (*FontStringHeight_f)(char* s, int length, float scale);


//--------------------------------------------------------
void FontPrint(float x, float y, u64 rgba, char* s, int length, float scaleX, float scaleY, FontAlignment alignment, char bEnableDropShadow, u64 dropShadowColor, float dropShadowXOffset, float dropShadowYOffset);
int FontStringLength(char* s, int length, float scale);
int FontStringHeight(char* s, int length, float scale);

#endif // _LIBDLSP_FONT_H_
