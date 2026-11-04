#include "src/include/classes/TObjEneRe2Flower.h"
typedef struct Arg0_424 Arg0_424;
typedef struct Arg0_s410 Arg0_s410;
struct Arg0_s410 {
    char unknown0[0x14];
    Arg0_424 *f14;
};
struct Arg0_424 {
    char unknown0[0x10];
    int f10;
};
extern "C" int operation_8c03d338(void);
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c05cfa0(void *);
extern "C" void call_8c05a108(TObjEneRe2Flower *);
extern "C" void TObjEneRe2Flower_update_8c05cd8c(TObjEneRe2Flower *o)
{
    int t1;
    int t2;
    t1 = operation_8c03d338();
    if (t1 != 0) {
        o->v110();
        return;
    }
    t2 = o->v89();
    if (t2 != 4) {
        o->v91();
    } else {
        if (o->f30a != 0 && o->f30a != 1) {
            goto L_8c05cdf6;
        }
        ((void (*)(void *))(((Arg0_s410 *)((char *)o + 0x410))->f14->f10))((void *)(((char *)o + 0x410)));
        operation_8c059ea4((void *)o, 2);
    }
L_8c05cdf6:;
    operation_8c05cfa0((void *)o);
    call_8c05a108(o);
    o->v106();
}
