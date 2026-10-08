#include "src/include/color_effect.h"
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
#define detach_at ((void (*)(void *,int))0x8c20997c)
#define release_at ((void (*)(void *,void *))0x8c122774)
ColorEffect *destroy_color_rise_8c255534(ColorEffect *effect,short flags){if(effect){effect->dispatch=(void *)0x8c2811a0;if(effect){effect->dispatch=(void *)0x8c267e34;detach_at(effect,0);}if(flags>0)release_at(*(void **)0x8c4d97e0,effect);}return effect;}
