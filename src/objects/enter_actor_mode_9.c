#include "src/include/actor_state_view.h"
#define set_state_at ((void (*)(ActorStateView *,int))0x8c059ea4)
void enter_actor_mode_9(ActorStateView *actor){if(actor->mode!=9)set_state_at(actor,9);}
