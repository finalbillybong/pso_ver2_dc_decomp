/* Provisional effect fields and call names; preserve raw bounds, widths and order. */
#include "src/include/effect.h"
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
extern void TParticleCtrl_ctor_1_8c0a6f38(void *,float *,void *,int,int,int,int);
void *create_effect_769c(float *position,int index) {
 if(index<*(int *)0x8c303c10) {
  void *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x68);
  if(effect) TParticleCtrl_ctor_1_8c0a6f38(effect,position,*(unsigned char **)0x8c46f100+index*0x98,0,0,0,0);
  return effect;
 }
 return 0;
}
