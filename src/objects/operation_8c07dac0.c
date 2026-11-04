#include "src/include/classes/TItemMag.h"
extern int call_8c07fac0(TItemMag *, int);
extern void call_8c074ac4(TItemMag *, int);
extern void call_8c07db40(TItemMag *, int);
void operation_8c07dac0(TItemMag *o, int a1)
{
    int v1;
    int t1;
    v1 = (int)(*(int *)0x8c510ba0 != 0);
    if (v1 != 0 && (unsigned int)1 >= (unsigned int)(a1 + -6)) {
        return;
    }
    if (a1 != 1) {
        if (((o->f1d8 & 0x10)) == 0) {
            return;
        }
        if (o->f214 > 0.0f) {
            return;
        }
        t1 = call_8c07fac0(o, a1);
        if (t1 == 0) {
            return;
        }
        call_8c074ac4(o, a1);
        return;
    }
    call_8c07db40(o, a1);
}
