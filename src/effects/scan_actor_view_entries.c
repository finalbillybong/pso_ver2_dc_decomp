#include "src/include/actor_view_effect.h"
int scan_actor_view_entries(ActorScanCountView *owner){int index;owner->count=0;for(index=0;index<*(int *)0x8c467874+*(int *)0x8c467878;index++){void *actor=*(void **)((char *)0x8c467240+((unsigned int)index<<2));((void (*)(ActorScanCountView *,void *))0x8c0c1ee0)(owner,actor);}return owner->count;}
