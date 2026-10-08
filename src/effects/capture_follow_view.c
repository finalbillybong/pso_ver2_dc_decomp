#include "src/include/follow_capture.h"
#include "src/include/follow_base.h"
#include "src/include/follow_effect.h"
void capture_follow_view(FollowBaseView *effect){void *context=*(void **)0x8c46ee80;if(context){FollowCaptureSource *source=((FollowCaptureSource *(*)(void *))0x8c0a2040)(context);FollowActorView *actor=((FollowActorView *(*)(int))0x8c021ef8)(0);if(actor){effect->origin.x=actor->position.x;effect->origin.y=actor->position.y+19.799999237060547f;effect->origin.z=actor->position.z;effect->position.x=source->position.x;effect->position.y=source->position.y;effect->position.z=source->position.z;effect->value92=source->value16;}}}
