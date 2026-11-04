#include "src/include/classes/TItemProShieldRecalc.h"
extern void TItemProShield_ctor_8c0e8360(void);
TItemProShieldRecalc *TItemProShieldRecalc_ctor_8c2554f4(TItemProShieldRecalc *o)
{
    TItemProShield_ctor_8c0e8360();
    o->dispatch = (void *)0x8c2811a0;
    o->tag = (int)(*(int *)0x8c33fdb8);
    o->size = 0x1e4;
    return o;
}
