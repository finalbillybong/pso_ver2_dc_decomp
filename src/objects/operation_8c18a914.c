#include "src/include/classes/TItemWpnStingTip.h"
extern void call_8c075398(void);
TItemWpnStingTip *TItemWpnStingTip_ctor_8c18a914(TItemWpnStingTip *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c272244;
    o->tag = (int)(*(int *)0x8c319ee8);
    o->size = 0x238;
    o->f1e0 = 5;
    o->f1e1 = 4;
    o->f234 = 0;
    return o;
}
