#include "src/include/vector3.h"
/* Provisional accessed prefixes, not original class declarations. */
typedef struct Settings246638 { unsigned int unknown0[4]; Vector3 position; unsigned int unknown28[11]; } Settings246638;
typedef struct Resource246638 { unsigned int unknown0[2]; void *texture; void *model; } Resource246638;
typedef struct Root246638 { char unknown0[1068]; Resource246638 *resource; } Root246638;
typedef struct Object246638 {
 unsigned int tag; char unknown4[20]; void *dispatch; short unknown28; unsigned short size30;
 char unknown32[8]; void *model; char unknown44[12]; void *texture; Vector3 position;
 char unknown72[28]; unsigned int angle; char unknown104[124]; unsigned int index;
 float first,second,third,fourth; Settings246638 settings; char unknown320[288]; int zero608,flag612;
} Object246638;
#define CHECK(type,field,offset) typedef char check_##type##_##field[(unsigned long)&((type *)0)->field==offset?1:-1]
CHECK(Settings246638,position,16); typedef char settings_size[sizeof(Settings246638)==72?1:-1];
CHECK(Resource246638,texture,8); CHECK(Resource246638,model,12); CHECK(Root246638,resource,1068);
CHECK(Object246638,dispatch,24); CHECK(Object246638,size30,30); CHECK(Object246638,model,40); CHECK(Object246638,texture,56);
CHECK(Object246638,position,60); CHECK(Object246638,angle,100); CHECK(Object246638,index,228);
CHECK(Object246638,first,232); CHECK(Object246638,second,236); CHECK(Object246638,third,240); CHECK(Object246638,fourth,244);
CHECK(Object246638,settings,248); CHECK(Object246638,zero608,608); CHECK(Object246638,flag612,612);
typedef char object_size[sizeof(Object246638)==616?1:-1];
Object246638 *initialize_object_8c246638(Object246638 *o,void *owner,unsigned int index,Settings246638 *settings) {
 Object246638 **home=&o;
 ((void (*)(Object246638 *,void *))0x8c051eb8)(o,owner);
 o->dispatch=(void *)0x8c27cf1c;
 o->tag=*(unsigned int *)0x8c33af1c;
 o->size30=616;
 if(!*(Root246638 **)0x8c510e80) return o;
 {
  o->model=(*(Root246638 **)0x8c510e80)->resource->model;
  o->texture=(*(Root246638 **)0x8c510e80)->resource->texture;
  o->index=index;
  o->settings=*settings;
  o->position=o->settings.position;
  o->angle=o->index<<13;
  o->first=0.0f; o->second=0.0f; o->third=0.0f; o->fourth=0.0f;
  o->zero608=0;
  ((void (*)(unsigned int,Vector3 *))0x8c2475cc)(o->index,&o->position);
  ((void (*)(Object246638 *))0x8c246b34)(o);
  o->flag612=0;
  if(*(int *)0x8c418248!=*(int *)0x8c418258) o->flag612=1;
 }
 return o;
}
