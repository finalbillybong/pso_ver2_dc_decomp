#include "src/include/color_effect.h"
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
#define detach_at ((void (*)(void *,int))0x8c1abb78)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *destroy_color_rise_8c248f54(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c27d054;if(effect){effect->dispatch=(void *)0x8c2748b4;detach_at(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
