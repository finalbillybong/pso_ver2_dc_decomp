#include "src/include/classes/TItemWpnRay.h"
extern void call_8c075398(void);
TItemWpnRay *TItemWpnRay_ctor_8c17ad3c(TItemWpnRay *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271a40;
    o->tag = (int)(*(int *)0x8c319780);
    o->size = 0x23c;
    o->f224 = 4;
    o->f22c = (void *)0x8c1ab9d4;
    o->f230 = (void *)0x8c1c635c;
    o->f228 = (void *)0x8c1c6580;
    o->f238 = 0;
    o->f234 = 0;
    return o;
}
