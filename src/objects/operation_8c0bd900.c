#include "src/include/classes/TObjEneSaver.h"
typedef struct TObjEneSaver_pdc TObjEneSaver_pdc;
struct TObjEneSaver_pdc {
    char unknown0[0x18];
    int f18;
};
void TObjEneSaver_v67_8c0bd900(TObjEneSaver *o)
{
    int v1;
    if (o->f30a != 1) {
        if (o->f30a == 2) {
            goto L_8c0bd984;
        }
        if (o->f30a == 3) {
            goto L_8c0bd9aa;
        }
        v1 = (int)o->f390;
        if (((v1 & 4)) != 0) {
            o->f30a = 3;
            o->f30c = 0;
            o->ff0 = 1;
            o->f34 &= -0x6040001;
        } else {
            if (((v1 & 1)) != 0) {
                o->f30a = 1;
                o->f30c = 0;
                o->f34 |= 0x6040000;
            }
        }
        o->fdc->f18 |= 1;
        return;
    }
    if (((o->f390 & 2)) != 0) {
        o->f30a = 2;
        o->f30c = 0;
        o->f34 |= 0x6040000;
        return;
L_8c0bd984:;
        if (((o->f390 & 4)) != 0) {
            o->f30a = 3;
            o->f30c = 0;
            o->ff0 = 1;
            o->f34 &= -0x6040001;
            return;
L_8c0bd9aa:;
            if (((o->f390 & 3)) != 0) {
                o->f30a = 1;
                o->f30c = 0;
                o->f34 |= 0x6040000;
                o->f390 = (unsigned int)o->f390 >> 0x10 << 0x10;
                o->f390 |= 1;
                o->fdc->f18 |= 1;
            }
        }
    }
}
