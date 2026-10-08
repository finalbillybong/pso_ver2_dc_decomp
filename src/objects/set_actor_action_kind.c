#include "src/include/actor_state_view.h"
void set_actor_action_kind(ActorStateView *actor,int kind) {
 actor->flags|=1;
 switch(kind){case 0:actor->action=4;break;case 1:actor->action=5;break;case 2:actor->action=6;break;}

}
