#include "src/include/follow_offset.h"
#define get_at ((FollowAngleView *(*)(int))0x8c021ef8)
#define push_at ((void (*)(void *))0x8c38ade4)
#define rotate_at ((void (*)(void *,int))0x8c37df90)
#define transform_at ((void (*)(void *,Vector3 *,Vector3 *))0x8c3be280)
#define pop_at ((void (*)(void))0x8c38ad10)
void initialize_follow_offset(FollowOffsetView *effect){FollowAngleView *actor=get_at(*(int *)0x8c418248);if(actor){Vector3 offset;effect->angle=actor->angle;offset.x=0.0f;offset.y=0.0f;offset.z=effect->distance;push_at((void *)0x8c400500);rotate_at(0,effect->angle);transform_at(0,&offset,&offset);pop_at();effect->position.x=effect->origin.x+offset.x;effect->position.y=effect->origin.y+offset.y;effect->position.z=effect->origin.z+offset.z;}}
