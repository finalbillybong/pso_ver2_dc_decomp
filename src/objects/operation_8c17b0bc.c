#include "src/include/classes/TItemWpnScythe.h"
extern void call_8c075398(void);
TItemWpnScythe *TItemWpnScythe_ctor_8c17b0bc(TItemWpnScythe *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271c28;
    o->tag = (int)(*(int *)0x8c3197a8);
    o->size = 0x238;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f234 = 0;
    return o;
}
