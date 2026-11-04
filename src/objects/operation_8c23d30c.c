#include "src/include/classes/TItemWpnFreezeBeam.h"
extern void call_8c075398(TItemWpnFreezeBeam *);
extern int call_8c087b0c(int);
TItemWpnFreezeBeam *TItemWpnFreezeBeam_ctor_8c23d30c(TItemWpnFreezeBeam *o)
{
    TItemWpnFreezeBeam **home = &o;
    int t1;
    (void)home;
    call_8c075398(o);
    o->dispatch = (void *)0x8c27aac4;
    o->tag = (int)(*(int *)0x8c33a618);
    o->size = 0x234;
    o->f224 = 2;
    o->f1fc |= 0x22;
    t1 = call_8c087b0c(0x1fc);
    if (((t1 & 1)) != 0) {
        o->f21c = -1;
    } else {
        o->f21c = 0xe4;
    }
    return o;
}
