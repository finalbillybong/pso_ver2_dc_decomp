#include "src/include/vector3.h"

float squared_distance_xz(Vector3 *from, Vector3 *to) {
    float x = to->x - from->x;
    float z = to->z - from->z;
    return x * x + z * z;
}
