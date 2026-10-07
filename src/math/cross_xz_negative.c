#include "src/include/vector3.h"

int cross_xz_negative(Vector3 *left, Vector3 *right) {
    return left->z * right->x - left->x * right->z < 0.0f;
}
