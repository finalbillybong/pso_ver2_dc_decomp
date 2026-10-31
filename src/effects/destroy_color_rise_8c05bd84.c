#include "src/include/color_effect.h"
#define TObject_ctor_8c0330e4 ((void (*)(void *,void *))0x8c0330e4)
#define TObjEnemy_dtor_8c0120f4 ((void (*)(void *,int))0x8c0120f4)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *destroy_color_rise_8c05bd84(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c2625f8;if(effect){effect->dispatch=(void *)0x8c2627b8;TObjEnemy_dtor_8c0120f4(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
