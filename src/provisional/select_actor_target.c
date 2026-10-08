#include "src/include/actor_target_view.h"
#define alternate_at ((int (*)(ActorTargetView *,float))0x8c0c3184)
#define select_at ((unsigned short (*)(ActorTargetView *,int))0x8c04a52c)
#define lookup_at ((void *(*)(int))0x8c021ef8)
int select_actor_target(ActorTargetView *actor,float distance){if(actor->flags&0x10)return alternate_at(actor,distance);actor->target_id=select_at(actor,0);actor->target=lookup_at((unsigned short)actor->target_id);return actor->target?1:0;}
