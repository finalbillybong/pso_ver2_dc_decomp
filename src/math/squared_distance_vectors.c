/* Genuine adjacent functions; retain the original XZ proof source verbatim.
 * The compiler supplies natural entry alignment after the XYZ body. */
#include "src/include/vector3.h"
float squared_distance_xyz(const Vector3 *a,const Vector3 *b){
 float x=a->x-b->x,y=a->y-b->y,z=a->z-b->z;
 return x*x+y*y+z*z;
}

/* 0x8c03f0a0: squared distance using components at offsets 0 and 8. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

float distance_xz(const Vec3 *a, const Vec3 *b)
{
    float dx = a->x - b->x;
    float dz = a->z - b->z;
    return dx * dx + dz * dz;
}
