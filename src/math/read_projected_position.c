#include "src/include/vector3.h"
typedef struct View { char unknown0[72]; Vector3 position; } View;
typedef struct Projection { Vector3 position,direction; } Projection;
typedef char check_position[(unsigned long)&((View *)0)->position==72?1:-1];
typedef char check_prefix[sizeof(View)==84?1:-1];
typedef char check_direction[(unsigned long)&((Projection *)0)->direction==12?1:-1];
typedef char check_projection[sizeof(Projection)==24?1:-1];
extern const Projection projection;
Vector3 read_projected_position(View *o) {
 if(*(void **)0x8c46ee80) {
  o->position.x=projection.position.x+projection.direction.x*100.0f;
  o->position.y=projection.position.y+projection.direction.y*100.0f;
  o->position.z=projection.position.z+projection.direction.z*100.0f;
 }
 return o->position;
}
