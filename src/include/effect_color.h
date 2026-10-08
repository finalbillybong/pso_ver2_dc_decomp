#ifndef PSO_EFFECT_COLOR_H
#define PSO_EFFECT_COLOR_H
#include "src/include/vector3.h"
/* Provisional observed layout; names do not assert original class identity. */
typedef struct EffectColor {float alpha,red,green,blue;} EffectColor;
typedef char check_EffectColor_alpha[(unsigned long)&((EffectColor *)0)->alpha==0?1:-1];
typedef char check_EffectColor_red[(unsigned long)&((EffectColor *)0)->red==4?1:-1];
typedef char check_EffectColor_green[(unsigned long)&((EffectColor *)0)->green==8?1:-1];
typedef char check_EffectColor_blue[(unsigned long)&((EffectColor *)0)->blue==12?1:-1];
typedef char check_EffectColor_size[sizeof(EffectColor)==16?1:-1];
#endif
