#include "src/include/follow_effect.h"
FollowEffect *TOSensorGeneral01_dtor_8c15d340(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c26efa4;((void (*)(FollowEffect *,int))0x8c15c814)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
