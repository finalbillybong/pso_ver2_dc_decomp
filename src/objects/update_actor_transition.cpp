#include "src/include/actor_transitions.h"
extern "C" void update_actor_transition(ActorTransitions *actor){
 if(actor->flags&4){
  if(actor->state.activation_finished()){actor->flags&=~4;actor->flags&=~0x200;actor->flags&=~0x100;}
 }else if(actor->flags&8){
  if(actor->state.release_finished()){actor->flags&=~8;actor->flags&=~0x200;}
 }
}
