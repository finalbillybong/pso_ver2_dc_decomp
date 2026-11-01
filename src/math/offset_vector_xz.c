#include "src/include/vector3.h"

#define njSin_8c37eb0c ((float (*)(int))0x8c37eb0c)
#define njCos_8c38c154 ((float (*)(int))0x8c38c154)

void offset_vector_xz(int angle, Vector3 *from, Vector3 *to, float distance) {
    to->x = distance * njSin_8c37eb0c(angle) + from->x;
    to->y = from->y;
    to->z = distance * njCos_8c38c154(angle) + from->z;
}
