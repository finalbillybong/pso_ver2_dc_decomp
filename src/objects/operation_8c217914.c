#include "src/include/classes/TWindowBreakIn.h"
extern void initialize_base_8c0db1d0(void *, int);
TWindowBreakIn *TWindowBreakIn_ctor_8c217914(TWindowBreakIn *o)
{
    initialize_base_8c0db1d0((void *)o, (int)((void *)0x8c3361fc));
    o->dispatch = (void *)0x8c2782f4;
    o->tag = (int)(*(int *)0x8c3360d0);
    o->size = 0x68;
    return o;
}
