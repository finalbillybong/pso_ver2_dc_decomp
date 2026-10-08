#include "src/include/follow_effect.h"
FollowEffect *destroy_effect_a57f0(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c265c20;((void (*)(FollowEffect *,int))0x8c0a0b28)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
