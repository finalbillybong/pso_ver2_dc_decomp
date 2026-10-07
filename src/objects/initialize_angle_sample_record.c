#include "src/include/angle_sample_record.h"

AngleSampleRecord *initialize_angle_sample_record(AngleSampleRecord *p) {
    p->last_angle = 0;
    p->last_tick = 0;
    p->sample = 0;
    return p;
}
