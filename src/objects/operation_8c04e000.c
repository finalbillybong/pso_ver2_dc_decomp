#include "src/include/classes/TObjGrass.h"
void TObjGrass_v68_8c04e000(TObjGrass *o, int a1, int a2)
{
    int v3;
    if (o->f3ba != 0) {
        if (o->f3ba == 1) {
            goto L_8c04e022;
        }
        if (o->f3ba == 2) {
            goto L_8c04e02a;
        }
        o->f3ba = 0;
    }
    o->f30a = 3;
    v3 = (int)a2;
    goto L_8c04e054;
L_8c04e022:;
    o->f30a = 5;
    v3 = (int)a2;
    goto L_8c04e054;
L_8c04e02a:;
    o->f30a = 4;
    o->f3b4 = 0.0f;
    v3 = (int)0;
    while (0xc > v3) {
        *(int *)((char *)((char *)o + 0x3f0) + (v3 << 2)) = 0;
        v3 = (int)(v3 + 1);
    }
L_8c04e054:;
    o->f30c = 0;
    o->ff0 = 1;
    o->f34 |= 0x200000;
    o->f34 &= -0x40001;
}
