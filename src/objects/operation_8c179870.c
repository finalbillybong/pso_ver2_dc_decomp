#include "src/include/classes/TItemWpnCSorcer.h"
extern void call_8c075398(void);
TItemWpnCSorcer *TItemWpnCSorcer_ctor_8c179870(TItemWpnCSorcer *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2710b8;
    o->tag = (int)(*(int *)0x8c319660);
    o->size = 0x23c;
    o->f23a = 3;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 6;
    o->f234 = 0;
    o->f238 = -1;
    return o;
}
