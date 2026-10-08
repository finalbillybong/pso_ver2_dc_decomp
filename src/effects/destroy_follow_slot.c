#include "src/include/follow_slot.h"
#include "src/include/follow_effect.h"
FollowSlotView *destroy_follow_slot(FollowSlotView *effect,short release){if(effect){effect->dispatch=(void *)0x8c265c54;effect->actor=0;effect->resource148=0;((void (*)(FollowSlotView *,int))0x8c0a0b28)(effect,0);if(release>0)((void (*)(void *,void *))0x8c122774)(*(void **)0x8c4d97e0,effect);}return effect;}
