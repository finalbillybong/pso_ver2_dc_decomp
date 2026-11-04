#include "src/include/classes/TItemWpnUnknownTwinSaber.h"
extern void call_8c075398(void);
TItemWpnUnknownTwinSaber *TItemWpnUnknownTwinSaber_ctor_8c254b40(TItemWpnUnknownTwinSaber *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c280e08;
    o->tag = (int)(*(int *)0x8c33fd20);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1e2 = 4;
    o->f1e3 = 3;
    return o;
}
