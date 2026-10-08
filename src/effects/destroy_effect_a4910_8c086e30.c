#include "src/include/follow_effect.h"
FollowEffect *destroy_effect_a4910_8c086e30(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c264f7c;((void (*)(void))0x8c0a21a4)();*(int *)0x8c469d00=0;((void (*)(FollowEffect *,int))0x8c03311c)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
