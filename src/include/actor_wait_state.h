#ifndef PSO_ACTOR_WAIT_STATE_H
#define PSO_ACTOR_WAIT_STATE_H
/* Provisional accessed prefixes; no complete allocation size inferred. */
typedef struct ActorWaitState {char unknown00[1196];int ticks;} ActorWaitState;
typedef char check_ActorWaitState_ticks[(unsigned long)&((ActorWaitState *)0)->ticks==1196?1:-1];
typedef char check_ActorWaitState_size[sizeof(ActorWaitState)==1200?1:-1];
#endif
