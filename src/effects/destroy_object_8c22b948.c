#include "src/include/follow_effect.h"
FollowEffect *destroy_object_8c22b948(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c278e10;((void (*)(FollowEffect *,int))0x8c0db244)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
