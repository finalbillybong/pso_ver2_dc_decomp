#include "src/include/actor_view_effect.h"
void request_actor_mode_twelve(ActorTransitionView *actor){if(!(actor->flags&131072)){if(!(actor->flags&1)){int mode=actor->mode;if(mode!=12){actor->previous=mode;actor->requested=12;}}actor->flags|=131073;}}
