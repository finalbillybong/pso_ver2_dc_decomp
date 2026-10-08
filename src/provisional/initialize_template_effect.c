#include "src/include/template_effect.h"
#define initialize_base_at ((void (*)(void *,void *,void *,void *,void *))0x8c0ad45c)
#define refresh_at ((void (*)(void *))0x8c0b3d98)
#define emit_at ((int (*)(int,Vector3 *,int,int))0x8c05fbf8)
#define adjust_at ((void (*)(int,int,int))0x8c060320)
TemplateEffectFull *initialize_template_effect(TemplateEffectFull *effect,void *a,void *b,void *c,void *d) {
 initialize_base_at(effect,a,b,c,d);
 effect->dispatch=(void *)0x8c265fa0;
 effect->tag=*(int *)0x8c305218;
 effect->allocation_size=264;
 refresh_at(effect);
 effect->position=effect->initial_position;
 if(effect->resource)effect->resource->values[3]=effect->template_data.rest[1];
 effect->mode=effect->selector/5;
 switch(effect->mode) {
 case 0: {int h=emit_at(0x20015,&effect->position,0,0);if(h>=0)adjust_at(h,256,0);}break;
 case 1: emit_at(0x20015,&effect->position,0,0);break;
 case 2: {int h=emit_at(0x20015,&effect->position,0,0);if(h>=0)adjust_at(h,-256,0);}break;
 }
 if(effect->owner)effect->owner_id=effect->owner->id;
 return effect;
}
