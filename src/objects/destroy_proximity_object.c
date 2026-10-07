#include "src/include/proximity_object.h"
#define release_effect_at ((void (*)(void *))0x8c0a7bb0)
#define destroy_base_at ((void *(*)(ProximityObject *,short))0x8c01d2b0)
#define free_at ((void (*)(void *,void *))0x8c122774)
ProximityObject *destroy_proximity_object(ProximityObject *p,short dispose) {
 if(p) {
  p->dispatch=(void *)0x8c2747f8;
  if(p->effect) { release_effect_at(p->effect); p->effect=0; }
  destroy_base_at(p,0);
  if(dispose>0) free_at(*(void **)0x8c4d97e0,p);
 }
 return p;
}
