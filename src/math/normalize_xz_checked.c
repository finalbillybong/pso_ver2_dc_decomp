#include "src/include/vector3.h"
#include "src/include/float_classify.h"

#define signed_inv_sqrt_8c37f6d8 ((float (*)(float))0x8c37f6d8)

/* Y is untouched. The returned finite result follows squared * inverse exactly. */
float normalize_xz_checked(Vector3 *vector) {
    float squared, x, z, inverse;
    x = vector->x;
    z = vector->z;
    squared = x * x + z * z;
    inverse = signed_inv_sqrt_8c37f6d8(squared);
    if (float_is_nonfinite(inverse) != 0) {
        vector->x = 0.0f;
        vector->z = 0.0f;
        return 0.0f;
    }
    vector->x = x * inverse;
    vector->z = z * inverse;
    return squared * inverse;
}
