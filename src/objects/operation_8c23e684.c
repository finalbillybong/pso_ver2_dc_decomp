#include "src/include/classes/TItemWpnNodachi.h"
extern void call_8c075398(void);
TItemWpnNodachi *TItemWpnNodachi_ctor_8c23e684(TItemWpnNodachi *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b44c;
    o->tag = (int)(*(int *)0x8c33a758);
    o->size = 0x234;
    o->f1e0 = 2;
    o->f1e1 = 1;
    return o;
}
