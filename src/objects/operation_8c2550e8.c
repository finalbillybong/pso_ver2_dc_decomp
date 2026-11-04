#include "src/include/classes/TItemProShieldModel2.h"
extern void TItemProShieldModel_ctor_8c255200(void);
TItemProShieldModel2 *TItemProShieldModel2_ctor_8c2550e8(TItemProShieldModel2 *o)
{
    TItemProShieldModel_ctor_8c255200();
    o->dispatch = (void *)0x8c281010;
    o->tag = (int)(*(int *)0x8c33fd80);
    o->size = 0x1e8;
    o->f1e4 = 0;
    return o;
}
