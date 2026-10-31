#include "src/include/color_effect.h"
#define TObject_ctor_8c0330e4 ((void (*)(void *,void *))0x8c0330e4)
#define TObject_dtor_8c03311c ((void (*)(void *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *destroy_color_rise_8c223b7c(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c2789ac;if(effect){effect->dispatch=(void *)0x8c278aa8;TObject_dtor_8c03311c(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
