#include "src/include/classes/TItemWpnThunderCane.h"
extern void call_8c075398(TItemWpnThunderCane *, int, int);
extern void call_8c18e044(void *, void *, int, int, int);
TItemWpnThunderCane *TItemWpnThunderCane_ctor_8c240854(TItemWpnThunderCane *o, int a1, int a2)
{
    TItemWpnThunderCane **home = &o;
    (void)home;
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c688;
    call_8c18e044((void *)(((char *)o + 0x244)), (void *)((void *)0x8c07de9c), 0, 8, 0xb);
    o->f240 = 0;
    o->tag = (int)(*(int *)0x8c33a950);
    o->size = 0x29c;
    o->f1c0 |= 0x20;
    o->f1e0 = 2;
    o->f1e1 = 1;
    o->f1fc |= 0x22;
    o->f218 = 5;
    return o;
}
