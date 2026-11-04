#include "src/include/classes/TItemWpnDoubleCanon.h"
extern void call_8c075398(void);
TItemWpnDoubleCanon *TItemWpnDoubleCanon_ctor_8c23c0cc(TItemWpnDoubleCanon *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a494;
    o->tag = (int)(*(int *)0x8c33a560);
    o->size = 0x238;
    o->f1e0 = 3;
    o->f1e1 = 2;
    o->f1e2 = 5;
    o->f1e3 = 6;
    o->f1fc |= 0x22;
    o->f220 = 10.0f;
    o->f234 = 0;
    return o;
}
