#include "src/include/classes/TItemWpnMagicalPiece.h"
extern void call_8c075398(void);
TItemWpnMagicalPiece *TItemWpnMagicalPiece_ctor_8c18aa6c(TItemWpnMagicalPiece *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c272338;
    o->tag = (int)(*(int *)0x8c319f00);
    o->size = 0x234;
    o->f1fc |= 0x22;
    return o;
}
