#include "src/include/classes/TObjEneMe1Canadin.h"
extern void operation_8c059ea4(void *, int);
int TObjEneMe1Canadin_v113_8c090f2c(TObjEneMe1Canadin *o)
{
    int v1;
    v1 = (int)o->f3e4;
    if (((v1 & 0x20)) != 0) {
        o->f3e4 = v1 & -0x21;
        operation_8c059ea4((void *)o, 0xa);
        o->f428 = 0;
        return 1;
    }
    if (((v1 & 0x40)) != 0) {
        o->f3e4 = v1 & -0x41;
        operation_8c059ea4((void *)o, 0xb);
        return 1;
    }
    return 0;
}
