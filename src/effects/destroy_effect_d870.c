#include "src/include/effect_access_views.h"
#define release_resource_at ((void (*)(void *))0x8c052124)
#define TEffect_dtor_8c0a0104 ((void (*)(void *,int))0x8c0a0104)
#define release_at ((void (*)(void *,void *))0x8c122774)
EffectResourceView *destroy_effect_d870(EffectResourceView *effect,short flags) {
 if(effect) {
  effect->dispatch=(void *)0x8c265df0;
  if(effect->resource)release_resource_at(effect->resource);
  TEffect_dtor_8c0a0104(effect,0);
  if(flags>0)release_at(*(void **)0x8c4d97e0,effect);
 }
 return effect;
}
