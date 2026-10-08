#include "src/include/follow_base.h"
extern FollowResourceTable follow_resource_table;
#define base_at ((void (*)(FollowBaseView *,int))0x8c0330e4)
FollowBaseView *initialize_follow_base(FollowBaseView *effect){base_at(effect,0);effect->dispatch=(void *)0x8c265a60;effect->position.x=0.0f;effect->position.y=0.0f;effect->position.z=0.0f;effect->angle48=0;effect->angle52=0;effect->value56=0;effect->origin.x=0.0f;effect->origin.y=0.0f;effect->origin.z=1.0f;effect->extra.x=0.0f;effect->extra.y=0.0f;effect->extra.z=0.0f;effect->value44=0;effect->value40=0;effect->value60=0;effect->value92=0.0f;effect->value96=0.289000004529953f;effect->resource=follow_resource_table.resource;effect->id=0xffff;return effect;}
