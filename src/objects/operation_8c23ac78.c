#include "src/include/classes/TItemWpnCatHand.h"
extern void call_8c075398(void);
TItemWpnCatHand *TItemWpnCatHand_ctor_8c23ac78(TItemWpnCatHand *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279cb8;
    o->tag = (int)(*(int *)0x8c33a450);
    o->size = 0x240;
    o->f1fc |= 0x201;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 4;
    o->f23c = 0.0f;
    o->f238 = 0.0f;
    o->f234 = 0.0f;
    return o;
}
