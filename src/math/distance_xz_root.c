/* Provisional reconstruction; preserve observed arithmetic and call order. */
#include "src/include/vector3.h"
#define signed_sqrt_8c37f6c0 ((float (*)(float))0x8c37f6c0)
float distance_xz_root(Vector3 *a,Vector3 *b){
    float x=a->x-b->x,z=a->z-b->z;
    return signed_sqrt_8c37f6c0(x*x+z*z);
}
