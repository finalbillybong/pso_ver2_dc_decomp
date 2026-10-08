#include "src/include/short_effect.h"
#define base_at ((void (*)(ShortEffect *))0x8c0a0058)
ShortEffect *initialize_effect_a052c(ShortEffect *effect,Vector3 *position){base_at(effect);effect->dispatch=(void *)0x8c2659f4;effect->resource=*(void **)0x8c3028d8;effect->size=120;effect->position=*position;effect->state=0;return effect;}
