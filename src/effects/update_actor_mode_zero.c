#include "src/include/actor_mode_update.h"
void update_actor_mode_zero(ActorModeUpdateView *actor){switch(actor->state){case 0:actor->animation=0;actor->state=1;case 1:((void (*)(ActorModeUpdateView *))0x8c01c5f0)(actor);if(!(actor->motion_flags&0x800000))((void (*)(ActorModeUpdateView *,float,int))0x8c04a43c)(actor,0.0f,0);break;case -1:actor->motion_flags&=~0x40000;break;}}
