#include "math3d.h"

//--------------------------------------------------------
void vector_write(void* output, vec4 input0)
{
  *(s128*)output = input0;
}

//--------------------------------------------------------
vec4 vector_read(void* input0)
{
  return *(vec4*)input0;
}
