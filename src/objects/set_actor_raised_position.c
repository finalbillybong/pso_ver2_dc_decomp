#include "src/include/actor_raised_position.h"
void set_actor_raised_position(ActorRaisedPosition *actor){actor->position.x=actor->base.x;actor->position.y=actor->base.y+22.0f;actor->position.z=actor->base.z;actor->cached=actor->position;}
