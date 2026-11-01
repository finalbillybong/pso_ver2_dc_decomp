#include "src/include/spawn_motion.h"
#define njScalor2_8c37e494 ((float (*)(float *))0x8c37e494)

void finish_spawn_motion(SpawnMotionView *effect)
{
    if (!(effect->field_4c < 1.0f) ||
        njScalor2_8c37e494(effect->field_40) == 0.0f)
        effect->field_04 |= 1;
}
