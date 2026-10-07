#include "src/include/effect_manager.h"
#define base_at ((void (*)(EffectManager *,int))0x8c03ca10)
#define free_at ((void (*)(void *,void *))0x8c122774)
EffectManager *destroy_effect_manager(EffectManager *p,short dispose) {
 if(p) { p->dispatch=(void *)0x8c265cb0; base_at(p,0); if(dispose>0) free_at(*(void **)0x8c4d97e0,p); } return p;
}
