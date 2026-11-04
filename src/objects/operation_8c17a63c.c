#include "src/include/classes/TItemWpnPArms.h"
extern void call_8c075398(void);
TItemWpnPArms *TItemWpnPArms_ctor_8c17a63c(TItemWpnPArms *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271858;
    o->tag = *(int *)0x8c319750;
    o->size = 0x234;
    o->f1e0 = 1;
    o->f1e1 = 2;
    o->f1e2 = 1;
    o->f1e3 = 2;
    o->f1fc |= 0x201;
    return o;
}
