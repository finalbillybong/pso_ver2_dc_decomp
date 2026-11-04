#include "src/include/classes/TItemWpnMaserBeam.h"
extern void call_8c075398(void);
TItemWpnMaserBeam *TItemWpnMaserBeam_ctor_8c24fd98(TItemWpnMaserBeam *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27e8c0;
    o->tag = (int)(*(int *)0x8c33f750);
    o->size = 0x234;
    o->f1fc |= 2;
    return o;
}
