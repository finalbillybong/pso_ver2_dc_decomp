#include "src/include/spawn_effect.h"
/* The address-taken parameter preserves the observed stack home slot.
 * Keep each reciprocal scoped to one object reload across its branch. */
#define attach_at ((void (*)(void *,void *))0x8c0330e4)
#define resource_id_at ((int (*)(void *))0x8c0a02cc)
SpawnEffect *initialize_spawn_base(SpawnEffect *e,SpawnResourceView *resource,void *owner) {
 SpawnEffect **home=&e;
 attach_at(e,owner);
 e->field_18=(void *)0x8c265d10;
 e->field_8c=0;
 e->field_90=0;
 e->field_94=0;
 e->field_98=1.0f;
 e->field_9c=1.0f;
 e->field_24=resource;
 { SpawnEffect *object=e; object->field_54=object->field_24->field_58>0.0f ? 1.0f/object->field_24->field_58 : 0.0f; }
 { SpawnEffect *object=e; object->field_58=object->field_24->field_5c>0.0f ? 1.0f/object->field_24->field_5c : 0.0f; }
 { void *argument=e->field_24->field_14; e->field_20=resource_id_at(argument); }
 e->field_2c=1.0f;
 e->field_30=1.0f;
 e->field_40=0.0f;
 e->field_44=0.0f;
 e->field_48=0.0f;
 e->field_4c=0.0f;
 e->field_50=0.0f;
 e->field_64=0.0f;
 e->field_68=0.0f;
 e->field_6c=0.0f;
 e->field_70=0.0f;
 e->field_74=0.0f;
 e->field_78=0.0f;
 e->field_7c=0.0f;
 e->field_80=0.0f;
 e->field_84=0;
 e->field_88=0;
 e->field_89=0;
 e->field_8a=0;
 e->field_60=0;
 e->field_28=0;
 e->field_2a=0xffff;
 return e;
}
