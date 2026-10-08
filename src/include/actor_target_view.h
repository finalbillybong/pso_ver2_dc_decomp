#ifndef PSO_ACTOR_TARGET_VIEW_H
#define PSO_ACTOR_TARGET_VIEW_H
/* Provisional accessed layouts; names do not assert original declarations. */
typedef struct ActorTargetView {char unknown00[52];unsigned int flags;char unknown56[764];void *target;char unknown824[28];unsigned short target_id;} ActorTargetView;
typedef char check_ActorTargetView_flags[(unsigned long)&((ActorTargetView *)0)->flags==52?1:-1];
typedef char check_ActorTargetView_target[(unsigned long)&((ActorTargetView *)0)->target==820?1:-1];
typedef char check_ActorTargetView_target_id[(unsigned long)&((ActorTargetView *)0)->target_id==852?1:-1];
typedef char check_ActorTargetView_size[sizeof(ActorTargetView)==856?1:-1];
#endif
