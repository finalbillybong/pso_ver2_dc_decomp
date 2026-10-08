#ifndef PSO_FOLLOW_SLOT_H
#define PSO_FOLLOW_SLOT_H
#include "src/include/follow_effect.h"
/* Provisional accessed prefix, not a complete allocation/class identity. */
typedef struct FollowSlotView {char unknown0[24];void *dispatch;char unknown28[4];FollowActorView *actor;char unknown36[16];int angle52;char unknown56[8];Vector3 position;char unknown76[36];Vector3 offset;char unknown124[20];int state144;void *resource148;} FollowSlotView;
typedef char check_FollowSlotView_dispatch[(unsigned long)&((FollowSlotView *)0)->dispatch==24?1:-1];
typedef char check_FollowSlotView_actor[(unsigned long)&((FollowSlotView *)0)->actor==32?1:-1];
typedef char check_FollowSlotView_angle52[(unsigned long)&((FollowSlotView *)0)->angle52==52?1:-1];
typedef char check_FollowSlotView_position[(unsigned long)&((FollowSlotView *)0)->position==64?1:-1];
typedef char check_FollowSlotView_offset[(unsigned long)&((FollowSlotView *)0)->offset==112?1:-1];
typedef char check_FollowSlotView_state144[(unsigned long)&((FollowSlotView *)0)->state144==144?1:-1];
typedef char check_FollowSlotView_resource148[(unsigned long)&((FollowSlotView *)0)->resource148==148?1:-1];
typedef char check_FollowSlotView_size[sizeof(FollowSlotView)==152?1:-1];
#endif
