#include "src/include/classes/TItemWpnFlypan.h"
extern void call_8c075398(void);
TItemWpnFlypan *TItemWpnFlypan_ctor_8c179cd8(TItemWpnFlypan *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c271394;
    o->tag = (int)(*(int *)0x8c3196a8);
    o->size = 0x234;
    return o;
}
