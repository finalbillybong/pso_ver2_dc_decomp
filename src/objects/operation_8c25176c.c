#include "src/include/classes/TItemWpnOnRocketPunch.h"
extern void operation_8c241158(void *);
TItemWpnOnRocketPunch *TItemWpnOnRocketPunch_ctor_8c25176c(TItemWpnOnRocketPunch *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c27f498;
    o->f234 = 0;
    o->tag = (int)(*(int *)0x8c33f970);
    o->size = 0x250;
    o->f1c0 |= 0x20;
    o->f1fc |= 0x203;
    o->f228 = (void *)0x8c251bd4;
    o->f230 = (void *)0x8c251c18;
    o->f22c = (void *)0x8c251a60;
    o->f220 = 10.0f;
    o->f234 = 0;
    return o;
}
