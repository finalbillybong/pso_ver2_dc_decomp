#include "src/include/effect.h"
#include "src/include/hierarchy.h"
void mark_effect_for_release(HierarchyNode *effect) { if(effect) effect->flags|=1; }
#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern Effect *initialize_at(Effect *,EffectVector *,int *,void *,int,int,int,int);
void *create_effect_7bc0(EffectVector *position,int *orientation,int index,int b,int c) {
 if(index<*(int *)0x8c303c10) {
  Effect *effect=allocate_at(*(void **)0x8c4d97e0,0x68);
  if(effect) initialize_at(effect,position,orientation,*(unsigned char **)0x8c46f100+index*0x98,0,b,c,0);
  return effect;
 }
 return 0;
}
