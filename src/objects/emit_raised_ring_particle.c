#include "src/include/vector3.h"
extern void *emit_at(Vector3 *,int);extern void set_at(void *,int);
void emit_raised_ring_particle(void *self,const Vector3 *position) {Vector3 copy=*position;void *child;copy.y+=2.0f;child=emit_at(&copy,243);if(child) set_at(child,64);}
