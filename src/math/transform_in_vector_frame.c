#include "src/include/vector3.h"

/* Matrix entry names and frame interpretation remain provisional. */
#define push_at ((void (*)(void))0x8c38ae68)
#define frame_at ((void (*)(void *))0x8c041de8)
#define pop_at ((void (*)(void))0x8c38ad10)
#define combine_at ((void (*)(int, void *))0x8c38a714)
#define transform_at ((void (*)(int, Vector3 *, Vector3 *))0x8c3be280)

void transform_in_vector_frame(void *frame, Vector3 *source, Vector3 *destination) {
    push_at();
    frame_at(frame);
    combine_at(0, *(unsigned char **)0x8c57553c - 64);
    transform_at(0, source, destination);
    pop_at();
}
