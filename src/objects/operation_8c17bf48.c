#include "src/include/classes/TItemWpnAx.h"
extern void call_8c075398(void);
TItemWpnAx *TItemWpnAx_ctor_8c17bf48(TItemWpnAx *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271eec;
    o->tag = (int)(*(int *)0x8c319860);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 3;
    return o;
}
