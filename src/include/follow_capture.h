#ifndef PSO_FOLLOW_CAPTURE_H
#define PSO_FOLLOW_CAPTURE_H
#include "src/include/follow_base.h"
/* Provisional accessed prefixes; unknown fields retain their observed layout. */
typedef struct FollowDistanceView {FollowBaseView base;float distance;} FollowDistanceView;
typedef struct FollowCaptureSource {char unknown0[16];float value16;char unknown20[8];Vector3 position;} FollowCaptureSource;
typedef char check_FollowDistanceView_distance[(unsigned long)&((FollowDistanceView *)0)->distance==112?1:-1];
typedef char check_FollowDistanceView_size[sizeof(FollowDistanceView)==116?1:-1];
typedef char check_FollowCaptureSource_value16[(unsigned long)&((FollowCaptureSource *)0)->value16==16?1:-1];
typedef char check_FollowCaptureSource_position[(unsigned long)&((FollowCaptureSource *)0)->position==28?1:-1];
typedef char check_FollowCaptureSource_size[sizeof(FollowCaptureSource)==40?1:-1];
#endif
