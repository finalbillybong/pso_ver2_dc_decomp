#include "src/include/actor_view_effect.h"
void request_actor_mode_two(ActorTransitionView *actor){if(!(actor->flags&1)){int mode=actor->mode;if(mode!=2){actor->previous=mode;actor->requested=2;}}}
