#include "src/include/actor_view_effect.h"
void request_actor_mode_zero_8c128b44(ActorTransitionView *actor){if(!(actor->flags&1)){int mode=actor->mode;if(mode!=0){actor->previous=mode;actor->requested=0;}}}
