#include "src/include/classes/TItemWpnBraveSaber.h"
extern void call_8c075398(void);
TItemWpnBraveSaber *TItemWpnBraveSaber_ctor_8c23aaa4(TItemWpnBraveSaber *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c279ad0;
    o->tag = (int)(*(int *)0x8c33a420);
    o->size = 0x234;
    o->f1e0 = 3;
    o->f1e1 = 2;
    return o;
}
