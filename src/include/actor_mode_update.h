#ifndef PSO_ACTOR_MODE_UPDATE_H
#define PSO_ACTOR_MODE_UPDATE_H
#include "src/include/vector3.h"
/* Provisional accessed prefix; field names do not assert original gameplay semantics. */
typedef struct ActorModeUpdateView {char unknown0[52];unsigned int motion_flags;char unknown56[180];int action;short animation;char unknown242[550];Vector3 velocity;Vector3 target_position;short angle;char unknown818[2];struct ActorModeUpdateView *target;char unknown824[34];short saved_angle;char unknown860[16];float *parameters;char unknown880[32];int requested;char unknown916[4];int state;char unknown924[8];unsigned int flags;} ActorModeUpdateView;
typedef char check_ActorModeUpdateView_motion_flags[(unsigned long)&((ActorModeUpdateView *)0)->motion_flags==52?1:-1];
typedef char check_ActorModeUpdateView_action[(unsigned long)&((ActorModeUpdateView *)0)->action==236?1:-1];
typedef char check_ActorModeUpdateView_animation[(unsigned long)&((ActorModeUpdateView *)0)->animation==240?1:-1];
typedef char check_ActorModeUpdateView_velocity[(unsigned long)&((ActorModeUpdateView *)0)->velocity==792?1:-1];
typedef char check_ActorModeUpdateView_target_position[(unsigned long)&((ActorModeUpdateView *)0)->target_position==804?1:-1];
typedef char check_ActorModeUpdateView_angle[(unsigned long)&((ActorModeUpdateView *)0)->angle==816?1:-1];
typedef char check_ActorModeUpdateView_target[(unsigned long)&((ActorModeUpdateView *)0)->target==820?1:-1];
typedef char check_ActorModeUpdateView_saved_angle[(unsigned long)&((ActorModeUpdateView *)0)->saved_angle==858?1:-1];
typedef char check_ActorModeUpdateView_parameters[(unsigned long)&((ActorModeUpdateView *)0)->parameters==876?1:-1];
typedef char check_ActorModeUpdateView_requested[(unsigned long)&((ActorModeUpdateView *)0)->requested==912?1:-1];
typedef char check_ActorModeUpdateView_state[(unsigned long)&((ActorModeUpdateView *)0)->state==920?1:-1];
typedef char check_ActorModeUpdateView_flags[(unsigned long)&((ActorModeUpdateView *)0)->flags==932?1:-1];
typedef char check_ActorModeUpdateView_size[sizeof(ActorModeUpdateView)==936?1:-1];
#endif
