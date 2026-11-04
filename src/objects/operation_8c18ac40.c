#include "src/include/classes/TItemWpnCaduseus.h"
extern void call_8c075398(void);
TItemWpnCaduseus *TItemWpnCaduseus_ctor_8c18ac40(TItemWpnCaduseus *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27242c;
    o->tag = (int)(*(int *)0x8c319f20);
    o->size = 0x234;
    o->f1fc |= 0x22;
    return o;
}
