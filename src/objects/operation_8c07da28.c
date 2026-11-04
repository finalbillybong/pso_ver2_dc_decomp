#include "src/include/classes/TItemMag.h"
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
void operation_8c07da28(TItemMag *o)
{
    int v1;
    int v2;
    S_vv3 *v3;
    v1 = (int)o->f13c;
    if (v1 != 0 && ((o->f224 & 0x100)) != 0) {
        v2 = (int)((int)o->f21c - (int)o->f218);
        if (v2 > 0) {
            v3 = (S_vv3 *)(v1 + 0x5c8);
            v3->f00 -= v2;
            if (!(v3->f00 >= 0)) {
                v3->f00 = 0;
            }
        }
        o->f224 &= -0x101;
    }
}
