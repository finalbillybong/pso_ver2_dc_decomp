#include "src/include/follow_effect.h"
FollowEffect *destroy_object_8c25f8dc(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c281dc4;((void (*)(FollowEffect *,int))0x8c03311c)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
