#include "src/include/actor_view_effect.h"
extern void emit_point(Vector3 *,ActorEffectAngles *,int);
void emit_actor_point_effect(ActorEffectPointView *actor,int index){ActorEffectAngles angles;angles.x=actor->angle+16384;angles.y=0;angles.z=16384;emit_point(&actor->points[index],&angles,253);}
