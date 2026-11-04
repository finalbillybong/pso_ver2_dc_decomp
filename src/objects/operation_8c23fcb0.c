#include "src/include/classes/TItemWpnSamba.h"
extern void call_8c075398(void);
TItemWpnSamba *TItemWpnSamba_ctor_8c23fcb0(TItemWpnSamba *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27c0d0;
    o->tag = (int)(*(int *)0x8c33a8c0);
    o->size = 0x24c;
    o->f1fc |= 0x203;
    o->f22c = (void *)0x8c1ab8f8;
    o->f220 = 11.0f;
    return o;
}
