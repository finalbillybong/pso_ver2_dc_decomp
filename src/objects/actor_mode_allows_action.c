#include "src/include/actor_state_view.h"
int actor_mode_allows_action(ActorStateView *actor) {
 int result=0;
 if(actor->mode!=5 && actor->mode!=6)result=1;
 return result;
}
