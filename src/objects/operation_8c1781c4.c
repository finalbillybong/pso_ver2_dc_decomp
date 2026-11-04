#include "src/include/classes/TItemWpnKatana.h"
extern void call_8c075398(void);
TItemWpnKatana *TItemWpnKatana_ctor_8c1781c4(TItemWpnKatana *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c270cec;
    o->tag = (int)(*(int *)0x8c319550);
    o->size = 0x234;
    if ((o->f138) != 0) {
        o->f21c = 0xe8;
    }
    return o;
}
