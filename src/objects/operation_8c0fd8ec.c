#include "src/include/classes/TOMine.h"
void operation_8c0fd8ec(TOMine *o)
{
    if (((o->f350 & 1)) != 0) {
        o->f370 += 0.05f;
        if (0.0f > o->f370) {
            return;
        }
        o->f370 = 0.0f;
        o->f350 = (unsigned int)o->f350 >> 1 << 1;
        return;
    }
    o->f370 -= 0.05f;
    if (!(o->f370 > -1.0f)) {
        o->f370 = -1.0f;
        o->f350 |= 1;
    }
}
