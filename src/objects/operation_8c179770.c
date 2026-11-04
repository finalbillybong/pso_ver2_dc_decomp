#include "src/include/classes/TItemWpnCBringer.h"
extern void call_8c075398(void);
TItemWpnCBringer *TItemWpnCBringer_ctor_8c179770(TItemWpnCBringer *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c270fc4;
    o->tag = (int)(*(int *)0x8c319648);
    o->size = 0x238;
    o->f224 = 2;
    o->f234 = 2;
    o->f22c = (void *)0x8c1c540c;
    return o;
}
