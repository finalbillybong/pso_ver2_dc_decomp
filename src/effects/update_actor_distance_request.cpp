#include "src/include/actor_render_callbacks.h"
extern "C" void update_actor_distance_request(ActorDistanceView *actor){if(((float (*)(Vector3 *,Vector3 *))0x8c03f0a0)(&actor->position,&actor->destination)>100.0f){if(!(actor->flags&1)){int mode=actor->mode;if(mode!=8){actor->previous=mode;actor->requested=8;}}}else actor->near_target();}
