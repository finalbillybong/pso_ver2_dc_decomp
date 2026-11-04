#include "src/include/classes/TItemWpnSaber.h"
extern void call_8c075398(void);
TItemWpnSaber *TItemWpnSaber_ctor_8c0780ec(TItemWpnSaber *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c26393c;
    o->tag = (int)(*(int *)0x8c2fd7f0);
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    return o;
}
