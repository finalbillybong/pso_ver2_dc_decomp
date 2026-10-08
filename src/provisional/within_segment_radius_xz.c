#include "src/include/vector3.h"
/* Preserve strict-greater rejection, including its unordered comparison behavior. */
int within_segment_radius_xz(const Vector3 *point,const Vector3 *start,const Vector3 *end,const Vector3 *direction,float radius,float limit,float inverse) {
 float x=point->x-start->x;
 float z=point->z-start->z;
 float projection=direction->x*x+direction->z*z;
 float distance;
 if(projection>0.0f) {
  if(!(limit>projection)) {
   float end_x=end->x-point->x;
   float end_z=end->z-point->z;
   distance=end_x*end_x+end_z*end_z;
  } else {
   projection*=inverse;
   x-=projection*direction->x;
   z-=projection*direction->z;
   distance=x*x+z*z;
  }
 } else distance=x*x+z*z;
 return !(distance>radius*radius);
}
