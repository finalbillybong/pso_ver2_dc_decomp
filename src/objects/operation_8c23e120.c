#include "src/include/classes/TItemWpnMagicBook.h"
extern void call_8c075398(void);
TItemWpnMagicBook *TItemWpnMagicBook_ctor_8c23e120(TItemWpnMagicBook *o)
{
    call_8c075398();
    o->dispatch = (void *)0x8c27b07c;
    o->tag = (int)(*(int *)0x8c33a6f8);
    o->size = 0x234;
    o->f1fc |= 0x22;
    o->f218 = 2;
    return o;
}
