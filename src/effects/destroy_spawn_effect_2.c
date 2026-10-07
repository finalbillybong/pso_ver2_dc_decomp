#include "src/include/spawn_effect.h"
/* Provisional lifecycle entry; preserve null handling and signed release test. */
#define detach_at ((void (*)(void *,int))0x8c0ab510)
#define free_at ((void (*)(void *,void *))0x8c122774)
SpawnEffect *destroy_spawn_effect_2(SpawnEffect *effect,short release) {
 if(effect) {
  effect->field_18=(void *)0x8c265d2c;
  detach_at(effect,0);
  if(release>0) free_at(*(void **)0x8c4d97e4,effect);
 }
 return effect;
}
