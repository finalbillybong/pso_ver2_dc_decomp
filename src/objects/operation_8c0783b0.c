#include "src/include/classes/TItemWpnSpreadGun.h"
extern void call_8c075398(TItemWpnSpreadGun *, int, int);
extern void operation_1ac120();
TItemWpnSpreadGun *TItemWpnSpreadGun_ctor_8c0783b0(TItemWpnSpreadGun *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c263b24;
    o->tag = (int)(*(int *)0x8c2fd820);
    o->size = 0x23c;
    o->f238 = 0x2000;
    o->f1fc |= 2;
    o->f22c = operation_1ac120;
    o->f220 = 15.0f;
    return o;
}
