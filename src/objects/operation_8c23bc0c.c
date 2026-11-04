#include "src/include/classes/TItemWpnDorillArm.h"
extern void call_8c075398(void);
TItemWpnDorillArm *TItemWpnDorillArm_ctor_8c23bc0c(TItemWpnDorillArm *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a3a0;
    o->tag = (int)(*(int *)0x8c33a530);
    o->size = 0x244;
    o->f22c = (void *)0x8c23bee0;
    o->f220 = 9.0f;
    o->f224 = 4;
    o->f1fc |= 0x22;
    o->f234 = 1;
    o->f238 = 0;
    o->f23c = 0;
    return o;
}
