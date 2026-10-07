#include "src/include/vector3.h"

/* Provisional fixed-angle trigonometric entries observed in the original. */
#define cosine_at ((float (*)(int))0x8c38c154)
#define sine_at ((float (*)(int))0x8c37eb0c)

#define submit_at ((void (*)(Vector3 *, void *))0x8c3bdf60)

void rotate_and_submit_vector_xz(Vector3 *source, void *destination, int angle) {
    float cosine = cosine_at(angle);
    float sine = sine_at(angle);
    float x = source->x;
    float z = source->z;
    source->z = cosine * z - sine * x;
    source->x = sine * z + cosine * x;
    submit_at(source, destination);
}
