#include "src/include/vector3.h"
typedef struct Contact {unsigned int unknown0;Vector3 *position;} Contact;
typedef char check_contact[sizeof(Contact)==8 && (unsigned long)&((Contact *)0)->position==4 ? 1:-1];
extern Contact *query(Vector3 *,Vector3 *,unsigned int);
extern float length(Vector3 *),normalize(Vector3 *);
int project_contact_position(void *unused,Vector3 *start,Vector3 *end,Vector3 *out) {
 Vector3 delta;
 Contact *contact=query(start,end,0x2100);
 if(contact) {
  delta.x=end->x-start->x;
  delta.y=0.0f;
  delta.z=end->z-start->z;
  if(length(&delta)!=0.0f)normalize(&delta);
  *out=*contact->position;
  out->x-=delta.x*10.0f;
  out->y-=delta.y*10.0f;
  out->z-=delta.z*10.0f;
  return 1;
 }
 return 0;
}
