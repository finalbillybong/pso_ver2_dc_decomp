#include "src/include/color_effect.h"
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
#define detach_at ((void (*)(void *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *initialize_color_rise(ColorEffect *effect,void *owner,void (*callback)(void)){attach_at(effect,owner);effect->dispatch=(void *)0x8c2667e4;effect->dispatch=(void *)0x8c2667c8;effect->callback=callback;effect->amount=0.0f;effect->blue=0;effect->green=0;effect->red=0;return effect;}
