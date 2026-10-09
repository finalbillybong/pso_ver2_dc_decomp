#include "src/include/vector3.h"
typedef struct Contact { unsigned int unknown0; Vector3 *position; } Contact;
typedef struct View { char unknown0[144]; Vector3 previous; char unknown156[28]; Vector3 target; char unknown196[36]; int active; Vector3 resolved; } View;
typedef char check_contact[(unsigned long)&((Contact *)0)->position==4 && sizeof(Contact)==8 ? 1:-1];
typedef char check_view[(unsigned long)&((View *)0)->previous==144 && (unsigned long)&((View *)0)->target==184 && (unsigned long)&((View *)0)->active==232 && (unsigned long)&((View *)0)->resolved==236 && sizeof(View)==248 ? 1:-1];
extern Contact *query(Vector3 *,Vector3 *,unsigned int);
extern float length(Vector3 *),normalize(Vector3 *);
void resolve_contact_position(View *o) {
 Vector3 delta;
 Contact *contact=query(&o->resolved,&o->target,256);
 if(contact) {
  delta.x=o->target.x-o->resolved.x;
  delta.y=o->target.y-o->resolved.y;
  delta.z=o->target.z-o->resolved.z;
  if(length(&delta)!=0.0f)normalize(&delta);
  o->resolved.x=contact->position->x-delta.x;
  o->resolved.y=contact->position->y-delta.y;
  o->resolved.z=contact->position->z-delta.z;
  o->active=1;
 } else {
  o->resolved=o->previous;
  o->active=0;
 }
}
