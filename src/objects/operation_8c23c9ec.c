#include "src/include/classes/TItemWpnFast.h"
typedef struct TItemWpnFast_p1d4 TItemWpnFast_p1d4;
typedef struct S_vv1 S_vv1;
struct TItemWpnFast_p1d4 {
    char unknown0[0x2c];
    int f2c;
};
struct S_vv1 {
    int f00;
    char unknown4[0x1c];
    float f20;
    float f24;
    float f28;
};
extern void call_8c3aa716(TItemWpnFast_p1d4 *);
void TItemWpnFast_v57_8c23c9ec(TItemWpnFast *o)
{
    char *v86;
    S_vv1 *v1;
    if (*(int *)0x8c4689f0 == 1 && o->f1d4 != 0 && o->f280 == 1) {
        v86 = (char *)o->f1d4->f2c;
        if (v86 != 0) {
            v1 = (S_vv1 *)v86;
            v1->f20 = 0.1f;
            v1->f24 = 0.1f;
            v1->f28 = 0.1f;
            v1->f00 &= -5;
            call_8c3aa716((TItemWpnFast_p1d4 *)(o->f1d4));
            v1->f00 |= 4;
            v1->f20 = 1.0f;
            v1->f24 = 1.0f;
            v1->f28 = 1.0f;
        }
    }
}
