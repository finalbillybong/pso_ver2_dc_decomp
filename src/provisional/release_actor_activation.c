typedef struct ActorInterface ActorInterface;
typedef struct ActorInterfaceDispatch {char unknown00[16];void (*activate)(ActorInterface *);void (*deactivate)(ActorInterface *);} ActorInterfaceDispatch;
struct ActorInterface {char unknown00[20];ActorInterfaceDispatch *dispatch;};
typedef struct ActorTransitions {char unknown00[1000];unsigned int flags;char unknown3ec[12];ActorInterface state;} ActorTransitions;
#define deactivate_at ((void (*)(ActorTransitions *))0x8c0c7e7c)
void release_actor_activation(ActorTransitions *actor) {
 actor->flags&=~16;
 if(!(actor->flags&0x408))deactivate_at(actor);
}
typedef char check_ActorInterfaceDispatch_activate[(unsigned long)&((ActorInterfaceDispatch *)0)->activate==16?1:-1];
typedef char check_ActorInterfaceDispatch_deactivate[(unsigned long)&((ActorInterfaceDispatch *)0)->deactivate==20?1:-1];
typedef char check_ActorInterfaceDispatch_size[sizeof(ActorInterfaceDispatch)==24?1:-1];
typedef char check_ActorInterface_dispatch[(unsigned long)&((ActorInterface *)0)->dispatch==20?1:-1];
typedef char check_ActorInterface_size[sizeof(ActorInterface)==24?1:-1];
typedef char check_ActorTransitions_flags[(unsigned long)&((ActorTransitions *)0)->flags==1000?1:-1];
typedef char check_ActorTransitions_state[(unsigned long)&((ActorTransitions *)0)->state==1016?1:-1];
typedef char check_ActorTransitions_size[sizeof(ActorTransitions)==1040?1:-1];
