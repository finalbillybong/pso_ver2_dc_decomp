#include "src/include/classes/TItemWpnBerlaCanon.h"
extern void call_8c075398(void);
TItemWpnBerlaCanon *TItemWpnBerlaCanon_ctor_8c239f88(TItemWpnBerlaCanon *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279518;
    o->tag = (int)(*(int *)0x8c33a390);
    o->size = 0x238;
    o->f1c0 |= 0x20;
    o->f220 = 7.0f;
    o->f1fc |= 2;
    o->f234 = 1;
    return o;
}
