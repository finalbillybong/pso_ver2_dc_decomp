#include "src/include/vector3.h"

/* Adjacent functions share the compiler's natural entry alignment. */
float float_from_bits(unsigned int bits) {
    union { unsigned int bits; float value; } convert;
    convert.bits = bits;
    return convert.value;
}

unsigned int float_to_bits(float value) {
    union { unsigned int bits; float value; } convert;
    convert.value = value;
    return convert.bits;
}

extern float angle_at(float, float);

int angle_between_xz(Vector3 *from, Vector3 *to) {
    return (int)(angle_at(to->x - from->x, to->z - from->z)
                 * 65536.0f / 6.283184051513671875f);
}
