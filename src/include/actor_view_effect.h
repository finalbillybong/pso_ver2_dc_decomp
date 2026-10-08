#ifndef PSO_ACTOR_VIEW_EFFECT_H
#define PSO_ACTOR_VIEW_EFFECT_H
#include "src/include/vector3.h"
/* Provisional independently accessed prefixes; names do not assert original APIs. */
typedef struct ActorEffectPointView {char unknown0[100];int angle;char unknown104[848];Vector3 points[2];} ActorEffectPointView;
typedef struct ActorEffectAngles {int x,y,z;} ActorEffectAngles;
typedef struct ActorTransitionView {char unknown0[778];short mode;char unknown780[132];int requested;char unknown916[8];int previous;char unknown928[4];unsigned int flags;} ActorTransitionView;
typedef struct ActorCountdownView {char unknown0[1016];int countdown;} ActorCountdownView;
typedef struct ActorScanCountView {char unknown0[976];int count;} ActorScanCountView;
typedef char check_ActorEffectPointView_angle[(unsigned long)&((ActorEffectPointView *)0)->angle==100?1:-1];
typedef char check_ActorEffectPointView_points[(unsigned long)&((ActorEffectPointView *)0)->points==952?1:-1];
typedef char check_ActorEffectPointView_size[sizeof(ActorEffectPointView)==976?1:-1];
typedef char check_ActorEffectAngles_x[(unsigned long)&((ActorEffectAngles *)0)->x==0?1:-1];
typedef char check_ActorEffectAngles_y[(unsigned long)&((ActorEffectAngles *)0)->y==4?1:-1];
typedef char check_ActorEffectAngles_z[(unsigned long)&((ActorEffectAngles *)0)->z==8?1:-1];
typedef char check_ActorEffectAngles_size[sizeof(ActorEffectAngles)==12?1:-1];
typedef char check_ActorTransitionView_mode[(unsigned long)&((ActorTransitionView *)0)->mode==778?1:-1];
typedef char check_ActorTransitionView_requested[(unsigned long)&((ActorTransitionView *)0)->requested==912?1:-1];
typedef char check_ActorTransitionView_previous[(unsigned long)&((ActorTransitionView *)0)->previous==924?1:-1];
typedef char check_ActorTransitionView_flags[(unsigned long)&((ActorTransitionView *)0)->flags==932?1:-1];
typedef char check_ActorTransitionView_size[sizeof(ActorTransitionView)==936?1:-1];
typedef char check_ActorCountdownView_countdown[(unsigned long)&((ActorCountdownView *)0)->countdown==1016?1:-1];
typedef char check_ActorCountdownView_size[sizeof(ActorCountdownView)==1020?1:-1];
typedef char check_ActorScanCountView_count[(unsigned long)&((ActorScanCountView *)0)->count==976?1:-1];
typedef char check_ActorScanCountView_size[sizeof(ActorScanCountView)==980?1:-1];
#endif
