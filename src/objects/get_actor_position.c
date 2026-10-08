#include "src/include/actor_state_view.h"
Vector3 * get_actor_position(ActorStateView *actor) {
 return &actor->position;
}
