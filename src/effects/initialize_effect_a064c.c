#include "src/include/short_effect.h"
#define TEffect_ctor_8c0a0058 ((void (*)(ShortEffect *))0x8c0a0058)
ShortEffect *TEffHit_ctor_8c0a064c(ShortEffect *effect,Vector3 *position){TEffect_ctor_8c0a0058(effect);effect->dispatch=(void *)0x8c265a10;effect->resource=*(void **)0x8c3028e8;effect->size=120;effect->position=*position;effect->state=0;return effect;}
