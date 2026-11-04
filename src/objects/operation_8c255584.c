#include "src/include/classes/TItemProArmorParticle.h"
extern void TItemProArmor_ctor_8c0e6d1c(TItemProArmorParticle *, int, int);
TItemProArmorParticle *TItemProArmorParticle_ctor_8c255584(TItemProArmorParticle *o, int a1, int a2)
{
    unsigned char v7;
    TItemProArmor_ctor_8c0e6d1c(o, a1, a2);
    o->dispatch = (void *)0x8c281284;
    o->tag = (int)(*(int *)0x8c33fdd8);
    o->size = 0x1ec;
    o->f1e0 = -1;
    v7 = (unsigned char)o->f138;
    if ((unsigned int)0xc > (unsigned int)(unsigned char)(v7 + -0x29)) {
        o->f1e4 = (int)(*(int *)((char *)0x8c2e2078 + ((unsigned char)(v7 + -0x29) << 2)));
        if ((unsigned int)5 > (unsigned int)(unsigned char)(v7 + -0x29)) {
            o->f1e8 = 1;
            goto L_8c2555e0;
        }
        o->f1e8 = 2;
    } else {
        o->f1e4 = 0;
        o->f1e8 = 0;
    }
L_8c2555e0:;
    return o;
}
