#include "src/include/follow_effect.h"
#define capture_at ((void (*)(FollowResetView *))0x8c0a0828)
#define initialize_at ((void (*)(FollowResetView *))0x8c0a0884)
void reset_follow_effect(FollowResetView *effect){effect->distance=25.0f;effect->first=0;effect->second=0;capture_at(effect);initialize_at(effect);}
