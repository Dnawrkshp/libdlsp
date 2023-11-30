#ifndef _LIBDLSP_MATH3D_H_
#define _LIBDLSP_MATH3D_H_

#include <tamtypes.h>

//--------------------------------------------------------
typedef s128 vec4;
typedef float vec4f[4]  __attribute__((__aligned__(16)));;
typedef float vec2f[2]  __attribute__((__aligned__(8)));;

//--------------------------------------------------------
void vector_write(void* output, vec4 input0);
vec4 vector_read(void* input0);

#endif // _LIBDLSP_MATH3D_H_
