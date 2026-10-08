#ifndef PSO_ACTOR_MOTION_H
#define PSO_ACTOR_MOTION_H
#include "src/include/vector3.h"
#include "src/include/actor_callbacks.h"
/* Provisional accessed prefix; names do not assert complete game types. */
struct ActorMotion : ActorCallbacks {
 char unknown1c[776];Vector3 position;char unknown330[172];Vector3 *origin;char unknown3e0[8];unsigned int flags;char unknown3ec[40];Vector3 velocity;
 virtual void unused101();virtual void unused102();virtual void unused103();virtual void unused104();virtual void unused105();virtual void unused106();virtual int check_position(Vector3 *);
};
typedef char check_ActorMotion_position[(unsigned long)&((ActorMotion *)0)->position==804?1:-1];
typedef char check_ActorMotion_origin[(unsigned long)&((ActorMotion *)0)->origin==988?1:-1];
typedef char check_ActorMotion_flags[(unsigned long)&((ActorMotion *)0)->flags==1000?1:-1];
typedef char check_ActorMotion_velocity[(unsigned long)&((ActorMotion *)0)->velocity==1044?1:-1];
typedef char check_ActorMotion_size[sizeof(ActorMotion)==1056?1:-1];
#endif
