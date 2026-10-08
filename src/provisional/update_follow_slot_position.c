#include "src/include/follow_slot.h"
extern void push_matrix(void *);
#include "src/include/follow_effect.h"
void update_follow_slot_position(FollowSlotView *effect){Vector3 offset;push_matrix((void *)0x8c400500);((void (*)(int,int))0x8c37df90)(0,effect->angle52);((void (*)(int,Vector3 *,Vector3 *))0x8c3be280)(0,&effect->offset,&offset);((void (*)(int))0x8c38accc)(1);{float value=effect->actor->position.x;value+=offset.x;effect->position.x=value;}{float value=effect->actor->position.y;value+=offset.y;effect->position.y=value;}{float value=effect->actor->position.z;value+=offset.z;effect->position.z=value;}}
