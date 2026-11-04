#include "src/include/classes/TObjGrass.h"
void TObjGrass_v66_8c04d3dc(TObjGrass *o)
{
    int v3;
    if (o->f30a != 0) {
        v3 = (int)0x30a;
    } else {
        if (o->f30c == 0) {
            return;
        }
        if (o->f30c == 1) {
            return;
        }
        if (o->f30c != 2) {
            o->f30c = 2;
        }
        if (o->f3c8 == 0) {
            return;
        }
        o->f30c = 0;
        return;
    }
    *(short *)((char *)((char *)o + 0x0) + (v3)) = 0;
    if (o->f3c8 != 0) {
        o->f30c = 0;
    } else {
        o->f30c = 2;
    }
    o->ff0 = 1;
}
