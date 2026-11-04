#include "src/include/classes/TObject.h"
extern void TObject_ctor_8c0330e4(TObject *, int);
extern void call_8c07c9c0(TObject *, int, int, int);
TObject *initialize_effect_node_8c07c980(TObject *o, int a1, int a2, int a3, int a4)
{
    TObject **home = &o;
    (void)home;
    TObject_ctor_8c0330e4(o, a1);
    o->vtable = (void *)0x8c2641e8;
    call_8c07c9c0(o, a2, a3, a4);
    return o;
}
