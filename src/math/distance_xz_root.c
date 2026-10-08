/* Provisional reconstruction; preserve observed arithmetic and call order. */
#include "src/include/vector3.h"
#define square_root_at ((float (*)(float))0x8c37f6c0)
float distance_xz_root(Vector3 *a,Vector3 *b){
    float x=a->x-b->x,z=a->z-b->z;
    return square_root_at(x*x+z*z);
}
