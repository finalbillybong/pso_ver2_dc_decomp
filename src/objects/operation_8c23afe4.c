#include "src/include/classes/TItemWpnChaoCane.h"
extern void call_8c075398(void);
TItemWpnChaoCane *TItemWpnChaoCane_ctor_8c23afe4(TItemWpnChaoCane *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279ea0;
    o->tag = (int)(*(int *)0x8c33a480);
    o->size = 0x23c;
    o->f1fc |= 1;
    o->f234 = 0;
    o->f238 = 1;
    return o;
}
