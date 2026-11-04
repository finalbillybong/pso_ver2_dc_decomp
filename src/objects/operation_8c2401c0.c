#include "src/include/classes/TItemWpnStarCane.h"
extern int g_8c33a908;
extern void call_8c075398(TItemWpnStarCane *, int, int);
TItemWpnStarCane *TItemWpnStarCane_ctor_8c2401c0(TItemWpnStarCane *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27c3ac;
    o->tag = (int)(g_8c33a908);
    o->size = 0x238;
    o->f234 = 0;
    return o;
}
