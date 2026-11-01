#include "src/include/follow_effect.h"
FollowEffect *TOSignCave01_dtor_8c0ff534(FollowEffect *effect,short release){if(effect){effect->dispatch=(void *)0x8c269460;((void (*)(FollowEffect *,int))0x8c0ee900)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
