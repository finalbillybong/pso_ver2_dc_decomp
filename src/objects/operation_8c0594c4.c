#include "src/include/classes/TObjEneBm3FlyNest.h"
void TObjEneBm3FlyNest_v109_8c0594c4(TObjEneBm3FlyNest *o)
{
    int v8;
    o->f3a8 = 2;
    o->f3ac = (int)o->f374;
    if (!(o->f3ac >= 0)) {
        o->f3ac = 0;
    } else {
        if (o->f3ac > 6) {
            o->f3ac = 6;
        }
    }
    o->f3b0 = (int)o->f378;
    v8 = (int)o->f3b0;
    if (!(o->f3b0 >= 0)) {
        o->f3b0 = 0;
        return;
    }
    if (v8 > 0x1e) {
        o->f3b0 = 0x1e;
    }
}
