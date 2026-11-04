#include "src/include/classes/TItemProArmor.h"
extern "C" void TItemProArmor_v17_8c0e6e44(TItemProArmor *o)
{
    unsigned char v1;
    v1 = (unsigned char)o->f138;
    if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x18 && (unsigned int)0x1a >= (unsigned int)(unsigned char)v1) {
        goto L_8c0e6e68;
    }
    if ((unsigned int)(unsigned char)v1 >= (unsigned int)0x26 && (unsigned int)0x28 >= (unsigned int)(unsigned char)v1) {
L_8c0e6e68:;
        o->v23();
    }
}
