#include "src/include/classes/TItemWpnLavisBlade.h"
extern void call_8c075398(TItemWpnLavisBlade *, int, int);
extern void operation_1abd98_8c1c6104();
TItemWpnLavisBlade *TItemWpnLavisBlade_ctor_8c23de88(TItemWpnLavisBlade *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c27ae94;
    o->tag = (int)(*(int *)0x8c33a6c8);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 3;
    o->f1e3 = 2;
    o->f1fc |= 0x223;
    o->f22c = operation_1abd98_8c1c6104;
    o->f220 = 10.0f;
    return o;
}
