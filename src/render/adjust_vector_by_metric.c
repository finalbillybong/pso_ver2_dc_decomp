#include "src/include/vector3.h"
#define metric_at ((float (*)(Vector3 *))0x8c37e480)
#define interpolate_at ((void (*)(Vector3 *,Vector3 *,float,Vector3 *))0x8c0c51d8)
void adjust_vector_by_metric(Vector3 *first,Vector3 *second,float limit){Vector3 delta;float metric;delta.x=first->x-second->x;delta.y=first->y-second->y;delta.z=first->z-second->z;metric=metric_at(&delta);if(metric>limit)interpolate_at(first,second,metric*limit,first);}
