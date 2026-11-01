#include "src/include/short_effect.h"
#define TEffect_dtor_8c0a0104 ((void (*)(ShortEffect *,int))0x8c0a0104)
#define free_at ((void (*)(void *,void *))0x8c122774)
ShortEffect *TEffGuard_dtor_8c0a0578(ShortEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c2659f4;TEffect_dtor_8c0a0104(effect,0);if(release>0)free_at(*(void **)0x8c4d97e0,effect);}return effect;}
