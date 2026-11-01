#include "src/include/vector3.h"
#define njScalor_8c37e480 ((float (*)(Vector3 *))0x8c37e480)
#define njUnitVector_8c37b630 ((void (*)(Vector3 *))0x8c37b630)
void step_vector_toward(Vector3 *current,Vector3 *target,Vector3 *out,float step) {
 Vector3 delta;
 float length;
 delta.x=target->x-current->x;
 delta.y=target->y-current->y;
 delta.z=target->z-current->z;
 length=njScalor_8c37e480(&delta);
 if(!(length>step)||length==0.0f) {
  out->x=target->x;
  out->y=target->y;
  out->z=target->z;
 } else {
  njUnitVector_8c37b630(&delta);
  delta.x*=step;
  delta.y*=step;
  delta.z*=step;
  delta.x+=current->x;
  delta.y+=current->y;
  delta.z+=current->z;
  out->x=delta.x;
  out->y=delta.y;
  out->z=delta.z;
 }
}
