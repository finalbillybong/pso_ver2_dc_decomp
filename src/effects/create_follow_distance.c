#include "src/include/follow_capture.h"
#include "src/include/follow_base.h"
FollowDistanceView *create_follow_distance(void){FollowDistanceView *effect=((FollowDistanceView *(*)(void *,unsigned int))0x8c122700)(*(void **)0x8c4d97e0,116);if(effect){((void (*)(FollowDistanceView *))0x8c0a0a94)(effect);effect->base.dispatch=(void *)0x8c265c20;effect->distance=20.0f;effect->base.value60=0;}return effect;}
