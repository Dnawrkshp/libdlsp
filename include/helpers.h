#ifndef _LIBDLSP_HELPERS_H_
#define _LIBDLSP_HELPERS_H_

#include <tamtypes.h>

#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((unsigned long)(!(sizeof(x) % sizeof(0[x])))))

#define HOOK_JAL(dest, function)            (*(u32*)(dest) = 0x0C000000 | ((u32)(function) >> 2))
#define HOOK_J(dest, function)              (*(u32*)(dest) = 0x08000000 | ((u32)(function) >> 2))

#define POKE_F32(dest, value)               (*(float*)(dest) = value)
#define POKE_U32(dest, value)								(*(u32*)(dest) = value)
#define POKE_I32(dest, value)								(*(int*)(dest) = value)
#define POKE_U16(dest, value)								(*(u16*)(dest) = value)
#define POKE_I16(dest, value)								(*(short*)(dest) = value)
#define POKE_U8(dest, value)								(*(u8*)(dest) = value)
#define POKE_I8(dest, value)								(*(char*)(dest) = value)

#define PEEK_F32(dest)                      (*(float*)(dest))
#define PEEK_U32(dest)								      (*(u32*)(dest))
#define PEEK_I32(dest)								      (*(int*)(dest))
#define PEEK_U16(dest)								      (*(u16*)(dest))
#define PEEK_I16(dest)								      (*(short*)(dest))
#define PEEK_U8(dest)								        (*(u8*)(dest))
#define PEEK_I8(dest)								        (*(char*)(dest))

//--------------------------------------------------------
#ifdef DEBUG
    #define DPRINTF(fmt, ...)       \
        printf("%s"fmt, "", ##__VA_ARGS__);
#else
    #define DPRINTF(fmt, ...) 
#endif

#endif // _LIBDLSP_HELPERS_H_
