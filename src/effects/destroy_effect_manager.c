#include "src/include/effect_manager.h"
#define TEditor_dtor_8c03ca10 ((void (*)(EffectManager *,int))0x8c03ca10)
#define free_at ((void (*)(void *,void *))0x8c122774)
EffectManager *TParticleEditor_dtor_8c0a7ed0(EffectManager *p,short dispose) {
 if(p) { p->dispatch=(void *)0x8c265cb0; TEditor_dtor_8c03ca10(p,0); if(dispose>0) free_at(*(void **)0x8c4d97e0,p); } return p;
}
