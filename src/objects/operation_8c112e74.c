#include "src/include/classes/TOKey.h"
extern void call_8c0ee870(void);
TOKey *TOKey_ctor_8c112e74(TOKey *o)
{
    call_8c0ee870();
    o->dispatch = (void *)0x8c269c48;
    o->tag = *(int *)0x8c30ff10;
    o->size = 0x11c;
    o->f100 = -1;
    o->f104 = 20.0f;
    o->f108 = 2;
    o->f10c = 0;
    o->f118 = 0;
    o->f110 = 0x1c;
    o->f114 = 0x1c;
    o->fd8 = 3;
    return o;
}
