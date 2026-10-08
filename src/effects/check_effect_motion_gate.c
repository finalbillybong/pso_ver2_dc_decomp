#include "src/include/effect_motion_gate.h"
/* Preserve the zero-length early exit and unordered phase comparison. */
#define length_at ((float (*)(Vector3 *))0x8c37e494)
void check_effect_motion_gate(MotionGate *o) {
 if(o->resource->flags & 8) {
  Vector3 relative;
  relative.x=o->target.x-o->position.x;
  relative.y=o->target.y-o->position.y;
  relative.z=o->target.z-o->position.z;
  if(length_at(&relative)==0.0f) {o->flags|=1;return;}
 }
 if(!(o->phase<1.0f))o->flags|=1;
}
