#include "src/include/delayed_effect.h"
#define create_at ((void *(*)(Vector3 *,int,int))0x8c0a77e8)
#define bind_at ((void (*)(void *,short))0x8c0a7628)
void update_delayed_effect(DelayedEffect *effect) {
 effect->ticks++;
 if(effect->ticks<=45 && effect->ticks%15==0) {
  void *child=create_at(&effect->position,42,16);
  if(child)bind_at(child,effect->id);
 }
}
