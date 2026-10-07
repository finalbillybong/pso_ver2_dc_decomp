#include "src/include/vector3.h"

/* Provisional fixed-angle trigonometric entries observed in the original. */
#define cosine_at ((float (*)(int))0x8c38c154)
#define sine_at ((float (*)(int))0x8c37eb0c)

/* Capture both components before either store: callers may alias the vectors.
 * The original leaves destination->y untouched. */
void rotate_vector_xz(Vector3 *source, Vector3 *destination, int angle) {
    float cosine = cosine_at(angle);
    float sine = sine_at(angle);
    float x = source->x;
    float z = source->z;
    destination->z = cosine * z - sine * x;
    destination->x = sine * z + cosine * x;
}
