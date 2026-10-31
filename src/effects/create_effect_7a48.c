#include "src/include/effect.h"
#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern Effect *initialize_at(Effect *,EffectVector *,void *,int,int,int,int);
void *create_effect_7a48(EffectVector *position,int index,int own) {
 if(index<*(int *)0x8c303c10) {
  Effect *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x68);
  if(effect) initialize_at(effect,position,*(unsigned char **)0x8c46f100+index*0x98,0,0,0,own);
  return effect;
 }
 return 0;
}
