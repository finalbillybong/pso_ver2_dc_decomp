/* Provisional effect fields and call names; preserve raw bounds, widths and order. */
#include "src/include/effect.h"
#define allocate_at ((void *(*)(void *,int))0x8c122700)
extern void initialize_at(void *,float *,void *,int,int,int,int,int);
void *create_effect_7708(float *position,int index,int field30) {
 if(index<*(int *)0x8c303c10) {
  void *effect=allocate_at(*(void **)0x8c4d97e0,0x68);
  if(effect) initialize_at(effect,position,*(unsigned char **)0x8c46f100+index*0x98,0,0,0,0,field30);
  return effect;
 }
 return 0;
}
