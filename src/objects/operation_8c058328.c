#include "src/include/classes/TObjEneBm3FlyNest.h"
void operation_8c058328(TObjEneBm3FlyNest *o)
{
    int v9;
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
    v9 = (int)o->f3b0;
    if (!(v9 >= 0)) {
        o->f3b0 = 0;
        return;
    }
    if (v9 > 0x1e) {
        o->f3b0 = 0x1e;
    }
}
