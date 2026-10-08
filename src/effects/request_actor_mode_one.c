#include "src/include/actor_view_effect.h"
void request_actor_mode_one(ActorTransitionView *actor){if(!(actor->flags&1)){int mode=actor->mode;if(mode!=1){actor->previous=mode;actor->requested=1;}}}
