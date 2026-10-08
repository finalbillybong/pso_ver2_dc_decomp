#include "src/include/actor_model_helpers.h"
void hide_actor_model_entries(ActorModelNode **entries){while(*entries){(*entries)->flags|=8;entries++;}}
