#include "src/include/actor_state_view.h"
void cache_actor_position(ActorStateView *actor) {
 actor->cached_position=actor->position;
}
