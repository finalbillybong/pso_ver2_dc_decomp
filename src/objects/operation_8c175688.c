#include "src/include/classes/TItemWpnSpreadGunB.h"
extern void call_8c075398(void);
TItemWpnSpreadGunB *TItemWpnSpreadGunB_ctor_8c175688(TItemWpnSpreadGunB *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2705b0;
    o->tag = *(int *)0x8c3192b0;
    o->size = 0x23c;
    o->f234 = 0.0f;
    o->f224 = 3;
    o->f228 = (void *)0x8c1c5a08;
    o->f238 = 0;
    o->f230 = (void *)0x8c1c53c4;
    o->f22c = (void *)0x8c1ab95c;
    o->f220 = 15.0f;
    return o;
}
