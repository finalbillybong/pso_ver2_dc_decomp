#include "src/include/short_effect.h"
#define TEffect_ctor_8c0a0058 ((void (*)(ShortEffect *))0x8c0a0058)
ShortEffect *TEffGuard_ctor_8c0a052c(ShortEffect *effect,Vector3 *position){TEffect_ctor_8c0a0058(effect);effect->dispatch=(void *)0x8c2659f4;effect->resource=*(void **)0x8c3028d8;effect->size=120;effect->position=*position;effect->state=0;return effect;}
