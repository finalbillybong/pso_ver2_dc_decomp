#include "src/include/classes/TItemObjectTV.h"
typedef struct Arg2 Arg2;
struct Arg2 {
    char unknown0[0x20];
    short f20;
};
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c22353c(short);
TItemObjectTV *TItemObjectTV_ctor_8c24d270(TItemObjectTV *o, int a1, Arg2 *a2)
{
    TItemObjectTV **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27dd38;
    o->tag = *(int *)0x8c33edcc;
    o->size = 0x24;
    o->f20 = a2->f20;
    call_8c22353c(o->f20);
    o->f22 = 3;
    return o;
}
