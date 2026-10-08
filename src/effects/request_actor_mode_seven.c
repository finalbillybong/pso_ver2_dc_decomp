#include "src/include/actor_view_effect.h"
void request_actor_mode_seven(ActorTransitionView *actor){int mode=actor->mode;if(mode!=7){actor->previous=mode;actor->requested=7;}actor->flags|=1;}
