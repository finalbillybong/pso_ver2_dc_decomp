#include "src/include/vector3.h"
typedef struct Contact {unsigned int unknown0;Vector3 *position;} Contact;
typedef struct View {char unknown0[144];Vector3 current,previous;char unknown168[60];int count,active;Vector3 resolved;} View;
typedef char check_contact[sizeof(Contact)==8 && (unsigned long)&((Contact *)0)->position==4 ? 1:-1];
typedef char check_view[sizeof(View)==248 && (unsigned long)&((View *)0)->current==144 && (unsigned long)&((View *)0)->previous==156 && (unsigned long)&((View *)0)->count==228 && (unsigned long)&((View *)0)->active==232 && (unsigned long)&((View *)0)->resolved==236 ? 1:-1];
extern Contact *query(Vector3 *,Vector3 *,unsigned int);
extern float length(Vector3 *),normalize(Vector3 *);
void advance_contact_position(View *o) {
 Vector3 delta;
 Contact *contact;
 if(o->active) {
  o->count++;
  contact=query(&o->previous,&o->current,256);
  if(contact) {
   delta.x=o->current.x-o->previous.x;
   delta.y=o->current.y-o->previous.y;
   delta.z=o->current.z-o->previous.z;
   if(length(&delta)!=0.0f)normalize(&delta);
   o->current.x=contact->position->x;
   o->current.y=contact->position->y;
   o->current.z=contact->position->z;
   o->resolved.x=o->current.x-delta.x;
   o->resolved.y=o->current.y-delta.y;
   o->resolved.z=o->current.z-delta.z;
  }
 } else o->count=0;
}
