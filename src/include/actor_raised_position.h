#ifndef PSO_ACTOR_RAISED_POSITION_H
#define PSO_ACTOR_RAISED_POSITION_H
#include "src/include/vector3.h"
/* Provisional accessed prefix; names do not assert complete game types. */
typedef struct ActorRaisedPosition {char unknown00[60];Vector3 base;char unknown48[48];Vector3 cached;char unknown84[672];Vector3 position;} ActorRaisedPosition;
typedef char check_ActorRaisedPosition_base[(unsigned long)&((ActorRaisedPosition *)0)->base==60?1:-1];
typedef char check_ActorRaisedPosition_cached[(unsigned long)&((ActorRaisedPosition *)0)->cached==120?1:-1];
typedef char check_ActorRaisedPosition_position[(unsigned long)&((ActorRaisedPosition *)0)->position==804?1:-1];
typedef char check_ActorRaisedPosition_size[sizeof(ActorRaisedPosition)==816?1:-1];
#endif
