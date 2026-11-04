#include "src/include/classes/TItemWpnOnCane.h"
extern void operation_8c241158(void *);
TItemWpnOnCane *TItemWpnOnCane_ctor_8c253078(TItemWpnOnCane *o)
{
    operation_8c241158((void *)o);
    o->dispatch = (void *)0x8c280130;
    o->tag = (int)(*(int *)0x8c33faf0);
    o->size = 0x234;
    return o;
}
