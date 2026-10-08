#include "src/include/actor_view_effect.h"
void request_actor_mode_five(ActorTransitionView *actor){int mode=actor->mode;if(mode!=5){actor->previous=mode;actor->requested=5;}actor->flags|=1;}
