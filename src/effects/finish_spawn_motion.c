#include "src/include/spawn_motion.h"
#define vector_measure_at ((float (*)(float *))0x8c37e494)

void finish_spawn_motion(SpawnMotionView *effect)
{
    if (!(effect->field_4c < 1.0f) ||
        vector_measure_at(effect->field_40) == 0.0f)
        effect->field_04 |= 1;
}
