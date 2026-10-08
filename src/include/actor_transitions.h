#ifndef PSO_ACTOR_TRANSITIONS_H
#define PSO_ACTOR_TRANSITIONS_H
/* Provisional accessed C++ views; unnamed virtual slots establish observed ABI offsets. */
struct ActorInterface {char unknown00[20];virtual void unused0();virtual void unused1();virtual void activate();virtual void deactivate();virtual int activation_finished();virtual int release_finished();};
struct ActorTransitions {char unknown00[1000];unsigned int flags;char unknown3ec[12];ActorInterface state;};
typedef char check_ActorInterface_size[sizeof(ActorInterface)==24?1:-1];
typedef char check_ActorTransitions_flags[(unsigned long)&((ActorTransitions *)0)->flags==1000?1:-1];
typedef char check_ActorTransitions_state[(unsigned long)&((ActorTransitions *)0)->state==1016?1:-1];
typedef char check_ActorTransitions_size[sizeof(ActorTransitions)==1040?1:-1];
#endif
