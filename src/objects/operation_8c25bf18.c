#include "src/include/types/TimerRecord.h"
void operation_8c25bf18(TimerRecord *o)
{
    int v1;
    float v4;
    v1 = (int)o->ticks;
    o->ticks = v1 + 1;
    v4 = (float)(float)(unsigned int)v1;
    if (v4 > 4.5f) {
        o->f20 = 7;
    }
}
