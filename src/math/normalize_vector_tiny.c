#include "src/include/vector3.h"

#define squared_at ((float (*)(Vector3 *))0x8c37e494)
#define normalize_at ((void (*)(Vector3 *))0x8c37b630)

int normalize_vector_tiny(Vector3 *value) {
    if (squared_at(value) < 9.9999998245167e-15f) return 0;
    normalize_at(value);
    return 1;
}
