#include "src/include/effect_manager.h"
#define allocate_at ((void *(*)(void *,unsigned int))0x8c122700)
extern Effect *initialize_at(Effect *,EffectVector *,void *,int,int,int,int);
#define base_at ((void (*)(EffectManager *))0x8c03ce84)
void start_effect_manager(EffectManager *p) {
 Effect *effect=allocate_at(*(void **)0x8c4d97e0,0x68);
 if(effect) initialize_at(effect,&p->position,0,0,0,0,0);
 p->effect=effect;p->field70=0;p->field80=0;p->field68=0;p->field64=1;
 base_at(p);
}
