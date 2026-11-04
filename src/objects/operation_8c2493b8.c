#include "src/include/classes/TItemWpnIkedaSythe.h"
extern void call_8c075398(void);
TItemWpnIkedaSythe *TItemWpnIkedaSythe_ctor_8c2493b8(TItemWpnIkedaSythe *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27d350;
    o->tag = (int)(*(int *)0x8c33b180);
    o->size = 0x240;
    o->f23c = 1.0f;
    o->f238 = 1.0f;
    o->f234 = 1.0f;
    return o;
}
