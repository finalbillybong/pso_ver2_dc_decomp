#include "src/include/classes/TItemWpnChineseFlypan.h"
extern void call_8c075398(void);
TItemWpnChineseFlypan *TItemWpnChineseFlypan_ctor_8c23b2a4(TItemWpnChineseFlypan *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279f94;
    o->tag = (int)(*(int *)0x8c33a498);
    o->size = 0x234;
    return o;
}
