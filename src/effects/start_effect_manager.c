#include "src/include/effect_manager.h"
#define heap_alloc_8c122700 ((void *(*)(void *,unsigned int))0x8c122700)
extern Effect *TParticleCtrl_ctor_1_8c0a6f38(Effect *,EffectVector *,void *,int,int,int,int);
#define base_at ((void (*)(EffectManager *))0x8c03ce84)
void TParticleEditor_v05_8c0a7f14(EffectManager *p) {
 Effect *effect=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x68);
 if(effect) TParticleCtrl_ctor_1_8c0a6f38(effect,&p->position,0,0,0,0,0);
 p->effect=effect;p->field70=0;p->field80=0;p->field68=0;p->field64=1;
 base_at(p);
}
