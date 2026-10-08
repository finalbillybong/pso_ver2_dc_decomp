#ifndef PSO_FOLLOW_OFFSET_H
#define PSO_FOLLOW_OFFSET_H
#include "src/include/vector3.h"
/* Provisional accessed prefixes; unknown fields and data contents remain unresolved. */
typedef struct FollowOffsetView {char unknown00[52];int angle;char unknown56[8];Vector3 position;Vector3 origin;char unknown88[28];float distance;} FollowOffsetView;
typedef struct FollowAngleView {char unknown00[100];int angle;} FollowAngleView;
typedef char check_FollowOffsetView_angle[(unsigned long)&((FollowOffsetView *)0)->angle==52?1:-1];
typedef char check_FollowOffsetView_position[(unsigned long)&((FollowOffsetView *)0)->position==64?1:-1];
typedef char check_FollowOffsetView_origin[(unsigned long)&((FollowOffsetView *)0)->origin==76?1:-1];
typedef char check_FollowOffsetView_distance[(unsigned long)&((FollowOffsetView *)0)->distance==116?1:-1];
typedef char check_FollowOffsetView_size[sizeof(FollowOffsetView)==120?1:-1];
typedef char check_FollowAngleView_angle[(unsigned long)&((FollowAngleView *)0)->angle==100?1:-1];
typedef char check_FollowAngleView_size[sizeof(FollowAngleView)==104?1:-1];
#endif
