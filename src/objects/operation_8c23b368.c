#include "src/include/classes/TItemWpnChineseFlypan2.h"
extern void call_8c075398(void);
TItemWpnChineseFlypan2 *TItemWpnChineseFlypan2_ctor_8c23b368(TItemWpnChineseFlypan2 *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27a088;
    o->tag = (int)(*(int *)0x8c33a4b8);
    o->size = 0x234;
    o->f1fc |= 0x201;
    return o;
}
