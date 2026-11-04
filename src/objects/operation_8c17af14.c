#include "src/include/classes/TItemWpnSBeat.h"
extern void call_8c075398(void);
TItemWpnSBeat *TItemWpnSBeat_ctor_8c17af14(TItemWpnSBeat *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271b34;
    o->tag = (int)(*(int *)0x8c319790);
    o->size = 0x238;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 1;
    o->f1e3 = 2;
    o->f234 = 0x2aaa;
    o->f1fc |= 0x201;
    return o;
}
