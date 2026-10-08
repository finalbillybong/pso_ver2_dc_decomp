#include "src/include/vector3.h"
void interpolate_vector_by_pointer(const Vector3 *target,Vector3 *current,const float *rate) {
 current->x=(target->x-current->x)* *rate+current->x;
 current->y=(target->y-current->y)* *rate+current->y;
 current->z=(target->z-current->z)* *rate+current->z;
}
