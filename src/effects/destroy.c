#include "src/include/effect.h"
/* Provisional reconstruction. Preserve the observed store order and narrow
 * stack parameter; vector words and untouched fields retain their raw behavior. */
#define detach_at ((void (*)(void *,int))0x8c03311c)
#define free_at ((void (*)(void *,void *))0x8c122774)
Effect *destroy_effect(Effect *effect,short release) {
 if(effect) {
  effect->field_18=(void *)0x8c265c94;
  detach_at(effect,0);
  if(release>0) free_at(*(void **)0x8c4d97e0,effect);
 }
 return effect;
}
