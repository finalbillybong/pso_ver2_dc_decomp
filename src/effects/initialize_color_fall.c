#include "src/include/color_effect.h"
#define TObject_ctor_8c0330e4 ((void (*)(void *,void *))0x8c0330e4)
#define TObject_dtor_8c03311c ((void (*)(void *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *initialize_color_fall(ColorEffect *effect,void *owner,void (*callback)(void)){TObject_ctor_8c0330e4(effect,owner);effect->dispatch=(void *)0x8c2667e4;effect->dispatch=(void *)0x8c2667ac;effect->callback=callback;effect->amount=255.0f;effect->blue=0;effect->green=0;effect->red=0;return effect;}