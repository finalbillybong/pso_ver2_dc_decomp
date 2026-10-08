#include "src/include/actor_motion.h"
#define finalize_at ((void (*)(ActorMotion *))0x8c05b0ec)
extern "C" void reset_actor_motion(ActorMotion *actor){
 Vector3 candidate;
 actor->position=*actor->origin;
 actor->velocity.x=0.0f;actor->velocity.y=0.0f;actor->velocity.z=0.0f;
 candidate=actor->position;
 if(!actor->check_position(&candidate))actor->flags&=~0x800;
 else actor->flags|=0x800;
 finalize_at(actor);
}
