#include "src/include/angle_sample_record.h"

void bind_angle_sample_record(AngleSampleRecord *p, AngleSampleView *sample) {
    if (sample) {
        p->sample = sample;
        p->last_angle = p->sample->angle;
        p->last_tick = *(int *)0x8c418244;
    }
}
