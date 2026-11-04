#include "src/include/classes/TObjEneMoja.h"
void TObjEneMoja_v66_8c038e14(TObjEneMoja *o)
{
    if (o->f30a != 0 && o->f30a != 1 && o->f30a != 2) {
        o->f30c = 0;
        o->f3a4 = 1;
        o->f34 |= 0x40000;
    }
    if (o->f390 != 0) {
        if (o->f390 == 1) {
            goto L_8c038e58;
        }
    } else {
        o->f30a = 0;
        o->ff0 = 2;
        return;
L_8c038e58:;
        o->f30a = 1;
        o->ff0 = 5;
        return;
    }
    o->f30a = 0;
    o->ff0 = 0;
}
