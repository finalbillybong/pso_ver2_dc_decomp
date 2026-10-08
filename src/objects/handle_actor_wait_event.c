#include "src/include/actor_wait_state.h"
#define set_state_at ((void (*)(ActorWaitState *,int))0x8c059ea4)
void handle_actor_wait_event(ActorWaitState *actor,int event){int *ticks=&actor->ticks;switch(event){case 4:*ticks=0;break;case 3:if(*ticks>=2)set_state_at(actor,1);break;case 0:++*ticks;break;case 5:break;}}
