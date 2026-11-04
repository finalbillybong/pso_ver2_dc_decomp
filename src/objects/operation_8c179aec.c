#include "src/include/classes/TItemWpnDelsabre.h"
extern void call_8c075398(void);
TItemWpnDelsabre *TItemWpnDelsabre_ctor_8c179aec(TItemWpnDelsabre *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2711ac;
    o->tag = (int)(*(int *)0x8c319678);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 4;
    return o;
}
