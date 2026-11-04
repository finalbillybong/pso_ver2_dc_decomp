#include "src/include/classes/TItemMag.h"
typedef struct S_vv3 S_vv3;
struct S_vv3 {
    int f00;
};
extern void call_8c07f5d8(TItemMag *);
extern void call_8c07f06c(TItemMag *, int);
void operation_8c07db40(TItemMag *o, int a1)
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
    *(int *)((char *)o + 0x1d8) &= 0xf0;
    o->f1d8 |= a1;
    o->f214 = 30.0f;
    o->f218 = 0;
    call_8c07f5d8(o);
    call_8c07f06c(o, 1);
}
