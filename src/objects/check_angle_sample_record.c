#include "src/include/angle_sample_record.h"

int check_angle_sample_record(AngleSampleRecord *p) {
    int old_angle;
    int difference;
    if (!p->sample) return 0;
    if (p->sample->magnitude < 0.5f) return 0;
    old_angle = p->last_angle;
    p->last_angle = p->sample->angle;
    difference = (unsigned short)(old_angle - p->last_angle);
    if (difference > 0x5000 && difference < 0xb000) {
        int old_tick = p->last_tick;
        p->last_tick = *(int *)0x8c418244;
        if (p->last_tick - old_tick < 8) return 1;
    }
    return 0;
}
