#include "src/include/vector3.h"

#define njScalor2_8c37e494 ((float (*)(Vector3 *))0x8c37e494)
#define njUnitVector_8c37b630 ((void (*)(Vector3 *))0x8c37b630)

int normalize_vector_tiny(Vector3 *value) {
    if (njScalor2_8c37e494(value) < 9.9999998245167e-15f) return 0;
    njUnitVector_8c37b630(value);
    return 1;
}
