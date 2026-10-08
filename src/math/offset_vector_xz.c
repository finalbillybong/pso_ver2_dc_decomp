#include "src/include/vector3.h"

#define sine_at ((float (*)(int))0x8c37eb0c)
#define cosine_at ((float (*)(int))0x8c38c154)

void offset_vector_xz(int angle, Vector3 *from, Vector3 *to, float distance) {
    to->x = distance * sine_at(angle) + from->x;
    to->y = from->y;
    to->z = distance * cosine_at(angle) + from->z;
}
