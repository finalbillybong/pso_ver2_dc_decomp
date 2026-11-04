#include "src/include/classes/TObjEneMoja.h"
typedef struct TObjEneMoja_pdc TObjEneMoja_pdc;
struct TObjEneMoja_pdc {
    char unknown0[0x18];
    int f18;
};
void TObjEneMoja_v70_8c03ab70(TObjEneMoja *o)
{
    int v2;
    if (o->f30a != 4) {
        if (o->f30a == 8) {
            goto L_8c03abb0;
        }
        v2 = (int)0x30a;
    } else {
        o->f34 &= -0x6000601;
        o->fdc->f18 &= -0x8000001;
        o->f35a = o->f330;
        o->f3a4 = 0;
        goto L_8c03abbe;
        v2 = (int)0;
    }
    *(short *)((char *)((char *)o + 0x0) + (v2)) = 8;
L_8c03abb0:;
    o->ff0 = 6;
    o->f34 &= -0x240001;
L_8c03abbe:;
    o->f390 = 0;
}
