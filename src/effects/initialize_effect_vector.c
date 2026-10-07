#include "src/include/effect.h"
/* Provisional reconstruction. Preserve the observed store order and narrow
 * stack parameter; vector words and untouched fields retain their raw behavior. */
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
#define effect_owner ((void **)0x8c44bea0)
#define effect_dispatch ((void **)0x8c303bf0)
Effect *initialize_effect_vector(Effect *effect,EffectVector *position,int *orientation,void *resource,int a,int b,int c,int own) {
 attach_at(effect,*effect_owner);
 effect->field_18=(void *)0x8c265c94;
 effect->field_00=*effect_dispatch;
 effect->size_1e=0x68;
 effect->field_44=1.0f;
 effect->field_48=1.0f;
 effect->field_20=0.0f;
 effect->field_24=0;
 effect->field_28=1.0f;
 effect->resource=resource;
 effect->position=*position;
 effect->field_30=0;
 effect->field_32=0xffff;
 effect->field_5c=orientation[0];
 effect->field_64=orientation[2];
 effect->field_60=orientation[1];
 effect->field_34=a;
 effect->field_38=b;
 effect->field_3c=c;
 effect->field_40=0;
 if(own) effect->owner=effect;
 else effect->owner=*effect_owner;
 return effect;
}
