#include "src/include/classes/TItemProShieldModel2.h"
extern void call_8c255408(TItemProShieldModel2 *, int);
void TItemProShieldModel2_v26_8c255174(TItemProShieldModel2 *o)
{
    char *v1;
    call_8c255408(o, 0x13);
    v1 = (char *)o->f38;
    o->f38 = (int)(o->f1d4);
    call_8c255408(o, 0xa);
    o->f38 = (int)(v1);
}
