#include "src/include/actor_mode_state.h"
void copy_actor_view_parameters(void){ActorViewParameters *source=*(ActorViewParameters **)0x8c46f3ec;*(float *)0x8c46f3f4=source->first;*(float *)0x8c46f3f8=source->second;*(float *)0x8c46f3fc=source->third;*(float *)0x8c46f400=source->fourth;*(int *)0x8c46f404=source->fifth;*(int *)0x8c46f408=source->sixth;}
