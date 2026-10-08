#include "src/include/follow_effect.h"
FollowEffect *destroy_object_8c0aad54(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c265cf4;((void (*)(FollowEffect *,int))0x8c0ab510)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e4,effect);}return effect;}
