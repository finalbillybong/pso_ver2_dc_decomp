#include "src/include/color_effect.h"
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
#define detach_at ((void (*)(void *,int))0x8c01d2b0)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *destroy_color_rise_8c136c08(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c26cff4;if(effect){effect->dispatch=(void *)0x8c26d03c;detach_at(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
