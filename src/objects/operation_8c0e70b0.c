#include "src/include/classes/TItemProArmor.h"
extern void flag_owner_8c074ddc(void *);
void TItemProArmor_v15_8c0e70b0(TItemProArmor *o)
{
    if (!((unsigned int)o->f1db < (unsigned int)o->f1d9) && !((unsigned int)o->f1dc < (unsigned int)o->f1da)) {
        return;
    }
    flag_owner_8c074ddc((void *)o);
}
