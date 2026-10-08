#include "src/include/follow_effect.h"
#define get_at ((FollowActorView *(*)(int))0x8c021ef8)
void capture_follow_position(FollowPositionView *effect){FollowActorView *actor=get_at(*(int *)0x8c418248);if(actor){float height=actor->height/2.0f;float y=actor->position.y;float z=actor->position.z;float x=actor->position.x;effect->position.x=x;effect->position.y=y+height;effect->position.z=z;}}
