#include "src/include/follow_effect.h"
#define base_at ((void (*)(FollowEffect *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
FollowEffect *destroy_follow_base(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c265a60;base_at(effect,0);if(release>0)free_at(*(void **)0x8c4d97e0,effect);}return effect;}
