#include "src/include/classes/TItemWpnGyaranzo.h"
extern void call_8c075398(void);
TItemWpnGyaranzo *TItemWpnGyaranzo_ctor_8c2490ec(TItemWpnGyaranzo *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d25c;
    o->tag = (int)(*(int *)0x8c33b168);
    o->size = 0x23c;
    o->f1fc |= 2;
    o->f22c = (void *)0x8c2492e8;
    o->f238 = 0;
    o->f234 = 0;
    o->f220 = 7.0f;
    o->f21c = 0xe5;
    return o;
}
