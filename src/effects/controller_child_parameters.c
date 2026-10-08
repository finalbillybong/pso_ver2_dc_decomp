#include "src/include/controller_child.h"

void controller_child_parameters(ControllerChild *object, float *scale,
                                 float *alpha, int ticks) {
    if (ticks < 10) *scale = 2.5f - ((float)ticks / 10.0f) * 1.5f;
    else *scale = ((float)(ticks - 10) / 20.0f) * 0.2f + 1.0f;
    /* The initial alpha path divides as integers before conversion. */
    if (ticks < 5) *alpha = (float)(ticks / 5);
    else *alpha = 1.0f - (float)(ticks - 5) / 25.0f;
}
