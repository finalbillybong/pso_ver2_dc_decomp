#include "src/include/classes/TAdRicoRing.h"
extern void operation_8c22c4dc(void *);
void TAdRicoRing_update_8c22c3f8(TAdRicoRing *o)
{
    int v1;
    int v22;
    int v47;
    v1 = (int)(((o->f30 & 1)) != 0);
    if (v1 != 0) {
        operation_8c22c4dc((void *)o);
        if (!(o->f20 > -1.0f)) {
            o->f04 |= 1;
            return;
        }
    }
    v22 = (int)(((o->f30 & 2)) != 0);
    if (v22 != 0) {
        operation_8c22c4dc((void *)o);
        if (!(o->f38 > o->f20)) {
            o->f20 = o->f38;
            o->f2c = 0.0f;
            o->f28 = 0.0f;
            o->f24 = 0.0f;
            o->f30 &= -3;
        }
    }
    o->f6c += o->f34;
    v47 = (int)(((o->f30 & 4)) != 0);
    if (v47 != 0) {
        o->f34 += o->f4c;
        if (!(o->f34 >= 0xccc)) {
            return;
        }
        o->f30 &= -5;
        return;
    }
    o->f34 -= o->f4c;
    if (0x5b0 >= o->f34) {
        o->f30 |= 4;
    }
}
