#include "src/include/classes/TItemWpnEggman.h"
extern void call_8c075398(void);
TItemWpnEggman *TItemWpnEggman_ctor_8c179be8(TItemWpnEggman *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c2712a0;
    o->tag = (int)(*(int *)0x8c319690);
    o->size = 0x234;
    o->f224 = 1;
    o->f22c = (void *)0x8c1ab8f8;
    o->f220 = 11.0f;
    return o;
}
