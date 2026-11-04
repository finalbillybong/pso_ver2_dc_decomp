#include "src/include/classes/TItemWpnFamitsu.h"
extern void call_8c075398(void);
TItemWpnFamitsu *TItemWpnFamitsu_ctor_8c255e68(TItemWpnFamitsu *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c281524;
    o->tag = (int)(*(int *)0x8c33fe58);
    o->size = 0x234;
    return o;
}
