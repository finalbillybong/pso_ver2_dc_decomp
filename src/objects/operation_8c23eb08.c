#include "src/include/classes/TItemWpnPikoPikoHammer.h"
extern void call_8c075398(void);
TItemWpnPikoPikoHammer *TItemWpnPikoPikoHammer_ctor_8c23eb08(TItemWpnPikoPikoHammer *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b728;
    o->tag = (int)(*(int *)0x8c33a7a0);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 1;
    return o;
}
