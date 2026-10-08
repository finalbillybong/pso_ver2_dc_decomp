#include "src/include/effect_event.h"
#define lookup_at ((EventOwner *(*)(unsigned int))0x8c021ef8)
void initialize_effect_event(EffectEvent *event,unsigned short owner,short index,Vector3 *position,unsigned int value) {
 event->owner=owner;
 event->index=index;
 event->position=*position;
 event->value=value;
 if(owner<=4) {EventOwner *object=lookup_at(owner);if(object)event->token=object->token;}
}
