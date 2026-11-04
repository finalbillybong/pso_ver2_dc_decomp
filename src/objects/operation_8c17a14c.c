#include "src/include/classes/TItemWpnOriginalSaber.h"
extern void call_8c075398(TItemWpnOriginalSaber *, int, int);
extern void operation_1abd98_8c1c6104();
TItemWpnOriginalSaber *TItemWpnOriginalSaber_ctor_8c17a14c(TItemWpnOriginalSaber *o, int a1, int a2)
{
    call_8c075398(o, a1, a2);
    o->dispatch = (void *)0x8c271670;
    o->tag = (int)(*(int *)0x8c319710);
    o->size = 0x238;
    o->f1e0 = 0;
    o->f1e1 = 1;
    o->f1fc |= 0x22;
    o->f22c = operation_1abd98_8c1c6104;
    o->f220 = 10.0f;
    o->f234 = 0;
    return o;
}
