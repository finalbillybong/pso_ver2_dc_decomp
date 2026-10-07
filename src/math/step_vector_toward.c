#include "src/include/vector3.h"
#define measure_at ((float (*)(Vector3 *))0x8c37e480)
#define normalize_at ((void (*)(Vector3 *))0x8c37b630)
void step_vector_toward(Vector3 *current,Vector3 *target,Vector3 *out,float step) {
 Vector3 delta;
 float length;
 delta.x=target->x-current->x;
 delta.y=target->y-current->y;
 delta.z=target->z-current->z;
 length=measure_at(&delta);
 if(!(length>step)||length==0.0f) {
  out->x=target->x;
  out->y=target->y;
  out->z=target->z;
 } else {
  normalize_at(&delta);
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
