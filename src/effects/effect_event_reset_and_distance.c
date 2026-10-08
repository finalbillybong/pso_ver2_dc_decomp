#include "src/include/effect_event.h"
void reset_effect_event(EffectEvent *event,unsigned short owner) {
 event->owner=owner;event->index=0;event->value=0;
}

#define length_at ((float (*)(Vector3 *))0x8c37e480)
int effect_event_is_distant(EffectEvent *event,short index,Vector3 *position) {
 if(event->index==index) {
  Vector3 delta;
  delta.x=event->position.x-position->x;
  delta.y=0.0f;
  delta.z=event->position.z-position->z;
  if(length_at(&delta)<0.2f)return 0;
 }
 return 1;
}
