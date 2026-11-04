#include "src/include/classes/TItemProArmorRecalc.h"
extern void TItemProArmor_ctor_8c0e6d1c(void);
TItemProArmorRecalc *TItemProArmorRecalc_ctor_8c255930(TItemProArmorRecalc *o)
{
    TItemProArmor_ctor_8c0e6d1c();
    o->dispatch = (void *)0x8c28134c;
    o->tag = (int)(*(int *)0x8c33fe10);
    o->size = 0x1e0;
    return o;
}
