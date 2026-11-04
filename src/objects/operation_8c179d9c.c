#include "src/include/classes/TItemWpnFrameVisit.h"
extern void call_8c075398(void);
TItemWpnFrameVisit *TItemWpnFrameVisit_ctor_8c179d9c(TItemWpnFrameVisit *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271488;
    o->tag = (int)(*(int *)0x8c3196c0);
    o->size = 0x234;
    o->f220 = 5.0f;
    o->f230 = (void *)0x8c1c5a30;
    o->f22c = (void *)0x8c1ab92c;
    return o;
}
