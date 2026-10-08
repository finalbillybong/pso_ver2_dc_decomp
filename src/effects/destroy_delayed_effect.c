#include "src/include/delayed_effect.h"
#define destroy_parent_at ((void (*)(void *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
DelayedEffect *destroy_delayed_effect(DelayedEffect *effect,short flags) {
 if(effect) {
  effect->dispatch=(void *)0x8c265f84;
  destroy_parent_at(effect,0);
  if(flags>0)release_at(*(void **)0x8c4d97e0,effect);
 }
 return effect;
}
