#include "underlay.h"

#define FUNCTION(name, address) \
    .set	push;		        \
	.set	noreorder;	        \
	.section	.text.##name,"ax",@progbits; \
	.align 2;		            \
	.globl	name;		        \
	.type	name,@function;	    \
	.ent	name,0;		        \
name:	j address;              \
	nop;			            \
	.end	name;		        \
	.size	name,.-name;	    \
	.set	pop;


#--------------------------------------------------------
#------------------- STANDARD LIBRARY -------------------
#--------------------------------------------------------
FUNCTION(printf, UNDERLAY_FIXED_PRINTF)
FUNCTION(sprintf, UNDERLAY_FIXED_SPRINTF)
FUNCTION(snprintf, UNDERLAY_FIXED_SNPRINTF)
FUNCTION(sscanf, UNDERLAY_FIXED_SSCANF)
FUNCTION(memset, UNDERLAY_FIXED_MEMSET)
FUNCTION(memcpy, UNDERLAY_FIXED_MEMCPY)
FUNCTION(memmove, UNDERLAY_FIXED_MEMMOVE)
FUNCTION(memcmp, UNDERLAY_FIXED_MEMCMP)
FUNCTION(strncpy, UNDERLAY_FIXED_STRNCPY)
FUNCTION(strlen, UNDERLAY_FIXED_STRLEN)
FUNCTION(strcmp, UNDERLAY_FIXED_STRCMP)
FUNCTION(strstr, UNDERLAY_FIXED_STRSTR)
FUNCTION(malloc, UNDERLAY_FIXED_MALLOC)
FUNCTION(free, UNDERLAY_FIXED_FREE)

#--------------------------------------------------------
#------------------------- MATH -------------------------
#--------------------------------------------------------
FUNCTION(asinf, UNDERLAY_FIXED_ASINF)
FUNCTION(powf, UNDERLAY_FIXED_POWF)
FUNCTION(fabsf, UNDERLAY_FIXED_FABSF)
FUNCTION(fptodp, UNDERLAY_FIXED_FPTODP)
FUNCTION(floorf, UNDERLAY_FIXED_FLOORF)
FUNCTION(__divdi3, UNDERLAY_FIXED_DIVDI3)
FUNCTION(ceilf, UNDERLAY_FIXED_CEILF)
FUNCTION(logf, UNDERLAY_FIXED_LOGF)
FUNCTION(log10f, UNDERLAY_FIXED_LOG10F)
