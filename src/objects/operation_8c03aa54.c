#include "src/include/classes/TObjEneMoja.h"
typedef struct TObjEneMoja_pdc TObjEneMoja_pdc;
struct TObjEneMoja_pdc {
    char unknown0[0x18];
    int f18;
};
void TObjEneMoja_v69_8c03aa54(TObjEneMoja *o)
{
    int v2;
    if (o->f30a != 4) {
        if (o->f30a == 7) {
            goto L_8c03aa9a;
        }
        v2 = (int)0x30a;
    } else {
        o->f34 &= -0x101;
        o->fdc->f18 |= 0x10001;
        o->f35a = o->f330;
        o->f3a4 = 0;
        goto L_8c03aaa8;
        v2 = (int)0;
    }
    *(short *)((char *)((char *)o + 0x0) + (v2)) = 7;
    o->f358 = 0xf;
L_8c03aa9a:;
    o->ff0 = 0;
    o->f34 &= -0x640001;
L_8c03aaa8:;
    o->f390 = 0;
}
