#ifndef PSO_ACTOR_STATE_VIEW_H
#define PSO_ACTOR_STATE_VIEW_H
#include "src/include/vector3.h"
/* Provisional accessed actor prefix; names do not assert complete game types. */
typedef struct ActorStateView {char unknown00[120];Vector3 cached_position;char unknown84[646];short mode;char unknown30c[24];Vector3 position;char unknown330[184];unsigned int flags;int unknown3ec;int action;char unknown3f4[44];void *value;} ActorStateView;
typedef char check_ActorStateView_cached_position[(unsigned long)&((ActorStateView *)0)->cached_position == 120 ? 1 : -1];
typedef char check_ActorStateView_mode[(unsigned long)&((ActorStateView *)0)->mode == 778 ? 1 : -1];
typedef char check_ActorStateView_position[(unsigned long)&((ActorStateView *)0)->position == 804 ? 1 : -1];
typedef char check_ActorStateView_flags[(unsigned long)&((ActorStateView *)0)->flags == 1000 ? 1 : -1];
typedef char check_ActorStateView_action[(unsigned long)&((ActorStateView *)0)->action == 1008 ? 1 : -1];
typedef char check_ActorStateView_value[(unsigned long)&((ActorStateView *)0)->value == 1056 ? 1 : -1];
typedef char check_ActorStateView_size[sizeof(ActorStateView)==1060?1:-1];
#endif
