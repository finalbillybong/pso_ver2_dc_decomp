#include "src/include/classes/TMapCsnCtrl.h"
extern void TObject_ctor_8c0330e4(void *, void *);
extern void call_8c1a1984(TMapCsnCtrl *);
TMapCsnCtrl *TMapCsnCtrl_ctor_8c1a18fc(TMapCsnCtrl *o, int a1)
{
    TMapCsnCtrl **home = &o;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->vtable = (void *)0x8c272f0c;
    o->tag = (int)(*(int *)0x8c31cf88);
    o->size = 0x820;
    call_8c1a1984(o);
    return o;
}
