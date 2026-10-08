#include "src/include/large_effect_factory.h"
#define allocate_at ((void *(*)(void *,int))0x8c122700)
extern void initialize_at(LargeEffect *,void *,void *,void *);
extern void construct_at(void *,void *,void *,int,int);
extern void bind_at(LargeEffect *,Block64 *,void *);
extern char templates[];
extern void emit_at(int,void *,int,int);
void create_effect_bf80(void *resource,void *position,Payload92 *payload,void *owner){
 LargeEffect *allocation=allocate_at(*(void **)0x8c4d97e0,0x164);
 if(allocation){
  LargeEffect *effect=allocation;
  LargeEffect **home=&effect;
  initialize_at(allocation,resource,position,owner);
  effect->dispatch=(void *)0x8c265d64;
  construct_at(&effect->payload.words[1],(void *)0x8c07de9c,0,8,11);
  effect->payload.words[0]=0;
  effect->tag=*(int *)0x8c304740;
  effect->size=0x164;
  effect->block=*(Block64 *)(templates+0x440);
  bind_at(effect,&effect->block,owner);
  effect->payload=*payload;
  emit_at(0x20012,(char *)effect+36,0,0);
  if(effect->parent)effect->parent_value=effect->parent->field20;
 }
}
