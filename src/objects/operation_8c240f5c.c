#include "src/include/classes/TItemWpnWataruLifle.h"
extern void call_8c075398(void);
TItemWpnWataruLifle *TItemWpnWataruLifle_ctor_8c240f5c(TItemWpnWataruLifle *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27c964;
    o->tag = (int)(*(int *)0x8c33a998);
    o->size = 0x234;
    o->f224 = 1;
    o->f228 = (void *)0x8c1c6058;
    return o;
}
