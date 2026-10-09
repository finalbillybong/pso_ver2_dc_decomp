#include "src/include/vector3.h"
typedef struct Contact {unsigned int unknown0;Vector3 *position;} Contact;
typedef struct View {char unknown0[60];Vector3 position;char unknown72[732];Vector3 query_position;char unknown816[116];int active;} View;
typedef char check_view[sizeof(View)==936 && (unsigned long)&((View *)0)->position==60 && (unsigned long)&((View *)0)->query_position==804 && (unsigned long)&((View *)0)->active==932 ? 1:-1];
extern float absolute(float);
extern Contact *query(Vector3 *,Vector3 *,unsigned int);
Contact *query_scaled_contact(View *o,float dx,float dz,float scale) {
 Vector3 destination;
 if(!o->active)return 0;
 dx*=scale;
 dz*=scale;
 if(absolute(dx)<0.01f && absolute(dz)<0.01f)return 0;
 destination.x=o->position.x+dx;
 destination.y=o->query_position.y;
 destination.z=o->position.z+dz;
 return query(&o->query_position,&destination,0x400008e0);
}
