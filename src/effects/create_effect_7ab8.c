#include "src/include/effect.h"
#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern Effect *TParticleCtrl_ctor_3_8c0a70b0(Effect *,EffectVector *,int *,void *,int,int,int,int);
void *create_effect_7ab8(EffectVector *position,int *orientation,int index) {
 if(index<*(int *)0x8c303c10) {
  Effect *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x68);
  if(effect) TParticleCtrl_ctor_3_8c0a70b0(effect,position,orientation,*(unsigned char **)0x8c46f100+index*0x98,1,0,0,0);
  return effect;
 }
 return 0;
}
