#include "src/include/vector3.h"
#include "src/include/float_classify.h"

#define normalize_at ((float (*)(Vector3 *))0x8c37b630)

void normalize_vector_checked(Vector3 *vector) {
    float length = normalize_at(vector);
    if (float_is_nonfinite(length) != 0) {
        vector->x = 0.0f;
        vector->y = 0.0f;
        vector->z = 0.0f;
    }
}
