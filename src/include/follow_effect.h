#ifndef PSO_FOLLOW_EFFECT_H
#define PSO_FOLLOW_EFFECT_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes, not complete allocation/class identities. */
typedef struct FollowEffect {char unknown00[24];void *dispatch;} FollowEffect;
typedef struct FollowResetView {char unknown00[48];int first;char unknown52[4];int second;char unknown60[56];float distance;} FollowResetView;
typedef struct FollowPositionView {char unknown00[76];Vector3 position;} FollowPositionView;
typedef struct FollowActorView {char unknown00[60];Vector3 position;char unknown72[3016];float height;} FollowActorView;
typedef char check_FollowEffect_dispatch[(unsigned long)&((FollowEffect *)0)->dispatch==24?1:-1];
typedef char check_FollowEffect_size[sizeof(FollowEffect)==28?1:-1];
typedef char check_FollowResetView_first[(unsigned long)&((FollowResetView *)0)->first==48?1:-1];
typedef char check_FollowResetView_second[(unsigned long)&((FollowResetView *)0)->second==56?1:-1];
typedef char check_FollowResetView_distance[(unsigned long)&((FollowResetView *)0)->distance==116?1:-1];
typedef char check_FollowResetView_size[sizeof(FollowResetView)==120?1:-1];
typedef char check_FollowPositionView_position[(unsigned long)&((FollowPositionView *)0)->position==76?1:-1];
typedef char check_FollowPositionView_size[sizeof(FollowPositionView)==88?1:-1];
typedef char check_FollowActorView_position[(unsigned long)&((FollowActorView *)0)->position==60?1:-1];
typedef char check_FollowActorView_height[(unsigned long)&((FollowActorView *)0)->height==3088?1:-1];
typedef char check_FollowActorView_size[sizeof(FollowActorView)==3092?1:-1];
#endif
