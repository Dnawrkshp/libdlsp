#ifndef _LIBDLSP_MATH_H_
#define _LIBDLSP_MATH_H_

//--------------------------------------------------------
#define MATH_PI                         ((float)3.141596)
#define MATH_TAU                        (MATH_PI * (float)2.0)
#define MATH_E                          ((float)2.7182818)
#define MATH_DT                         ((float)0.0166666666)
#define MATH_RAD2DEG                    ((float)180 / MATH_PI)
#define MATH_DEG2RAD                    (MATH_PI / (float)180)

//--------------------------------------------------------
float cosf(float theta);
float sinf(float theta);
float acosf(float v);
float asinf(float v);
float sqrtf(float f);
float powf(float base, float exp);
float fabsf(float f);
float lerpf(float a, float b, float t);
float signf(float a);
float maxf(float a, float b);
float minf(float a, float b);
float ceilf(float a);
float floorf(float a);
float logf(float a);
float log10f(float a);
float lerpfAngle(float a, float b, float t);
float clamp(float v, float min, float max);
float clampAngle(float theta);
double fmod(double x, double y);
float atan2f(float y, float x);

#endif // _LIBDLSP_MATH_H_
