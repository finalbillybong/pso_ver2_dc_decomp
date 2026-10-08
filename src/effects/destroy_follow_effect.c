#include "src/include/follow_effect.h"
#define base_at ((void (*)(FollowEffect *,int))0x8c0a0b28)
#define free_at ((void (*)(void *,void *))0x8c122774)
FollowEffect *destroy_follow_effect(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c265a2c;base_at(effect,0);if(release>0)free_at(*(void **)0x8c4d97e0,effect);}return effect;}
