#include "src/include/vector3.h"
typedef struct Geometry {Vector3 position,normal;} Geometry;
typedef struct Contact {unsigned int unknown0;Geometry *geometry;} Contact;
typedef char check_contact[sizeof(Geometry)==24 && (unsigned long)&((Geometry *)0)->normal==12 && sizeof(Contact)==8 && (unsigned long)&((Contact *)0)->geometry==4 ? 1:-1];
typedef struct View {char unknown0[60];Vector3 position;char unknown72[732];Vector3 query_position;char unknown816[104];float radius;int failures;char unknown928[4];int active;} View;
typedef char check_view[sizeof(View)==936 && (unsigned long)&((View *)0)->position==60 && (unsigned long)&((View *)0)->query_position==804 && (unsigned long)&((View *)0)->active==932 ? 1:-1];
extern float absolute(float);
extern Contact *query(Vector3 *,Vector3 *,unsigned int);
static inline Contact *query_scaled_contact(View *o,float dx,float dz,float scale) {
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
typedef char check_radius[(unsigned long)&((View *)0)->radius==920 && (unsigned long)&((View *)0)->failures==924 ? 1:-1];
extern float normalize_xz(Vector3 *);
void slide_scaled_contact(View *o,Vector3 *out,float dx,float dz,float scale) {
 Vector3 tangent;
 Contact *contact=query_scaled_contact(o,dx,dz,o->radius+scale);
 if(!contact) {
  out->x=dx*scale+o->position.x;
  out->y=o->position.y;
  out->z=dz*scale+o->position.z;
  o->failures=0;
 } else {
  o->failures++;
  tangent.x=contact->geometry->normal.z;
  tangent.z=-contact->geometry->normal.x;
  normalize_xz(&tangent);
  if(!(dx*tangent.x+dz*tangent.z<0.0f)) {
   dx=tangent.x;
   dz=tangent.z;
  } else {
   dx=-tangent.x;
   dz=-tangent.z;
  }
  if(!query_scaled_contact(o,dx,dz,scale+o->radius)) {
   out->x=dx*scale+o->position.x;
   out->y=o->position.y;
   out->z=dz*scale+o->position.z;
  } else *out=o->position;
 }
}
