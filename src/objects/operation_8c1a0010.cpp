#include "src/include/classes/TOHealGeneral.h"
extern "C" int operation_8c03d338(void);
extern "C" void call_8c1a007c(TOHealGeneral *);
extern "C" void operation_8c1a026c(void *);
extern "C" void call_8c1a034c(TOHealGeneral *);
extern "C" void TOHealGeneral_update_8c1a0010(TOHealGeneral *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        o->v15();
        return;
    }
    if (o->fe4 != 0) {
        if (o->fe4 == 1) {
            goto L_8c1a0050;
        }
        if (o->fe4 == 2) {
            goto L_8c1a005a;
        }
        return;
    }
    call_8c1a007c(o);
    return;
L_8c1a0050:;
    operation_8c1a026c((void *)o);
    return;
L_8c1a005a:;
    call_8c1a034c(o);
}
