#include "src/include/classes/TItemProUnit.h"
extern void flag_owner_8c074ddc(void *);
void TItemProUnit_v15_8c17b838(TItemProUnit *o)
{
    short a;
    short b;
    a = o->f20a;
    b = o->f208;
    if (b > a || -a > b) {
        flag_owner_8c074ddc((void *)o);
    }
}
