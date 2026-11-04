#include "src/include/classes/TItemWpnUnknownSpreadGun.h"
extern void call_8c075398(TItemWpnUnknownSpreadGun *, int, int);
extern void operation_1ac120();
TItemWpnUnknownSpreadGun *TItemWpnUnknownSpreadGun_ctor_8c254864(TItemWpnUnknownSpreadGun *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c280c20;
    o->tag = (int)(*(int *)0x8c33fcc8);
    o->size = 0x234;
    o->f1fc |= 2;
    o->f22c = operation_1ac120;
    o->f220 = 15.0f;
    return o;
}
