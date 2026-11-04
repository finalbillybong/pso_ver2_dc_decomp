#include "src/include/classes/TODragonflyMachine01.h"
typedef struct TODragonfly_p134 TODragonfly_p134;
extern "C" float njSin_8c37eb0c(void *);
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c0eeb58(void *);
extern "C" void call_8c1c4008(TODragonflyMachine01 *);
extern "C" void call_8c131bdc(TODragonflyMachine01 *);
extern "C" void operation_8c131c90(void *);
extern "C" void call_8c131d30(TODragonflyMachine01 *);
extern "C" void operation_8c131de4(void *);
extern "C" void TODragonflyMachine01_update_8c1c3e08(TODragonflyMachine01 *o)
{
    float t1;
    int t2;
    *(int *)((char *)o + 0x134) += o->f130;
    t1 = njSin_8c37eb0c((void *)(o->f134));
    o->f128 = o->f124 * t1;
    t2 = operation_8c03d338();
    if (t2 == 1) {
        o->v15();
        return;
    }
    operation_8c0eeb58((void *)o);
    if (o->fe4 != 0) {
        if (o->fe4 == 1) {
            goto L_8c1c3e80;
        }
        if (o->fe4 == 2) {
            goto L_8c1c3e8a;
        }
        if (o->fe4 == 3) {
            goto L_8c1c3e9a;
        }
        return;
    }
    call_8c1c4008(o);
    call_8c131bdc(o);
    return;
L_8c1c3e80:;
    operation_8c131c90((void *)o);
    return;
L_8c1c3e8a:;
    call_8c1c4008(o);
    call_8c131d30(o);
    return;
L_8c1c3e9a:;
    operation_8c131de4((void *)o);
}
