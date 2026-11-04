#include "src/include/classes/TItemWpnStarCane.h"
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct TItemWpnStarCane_p13c TItemWpnStarCane_p13c;
struct TItemWpnStarCane_p13c {
    char unknown0[0x310];
    int f310;
};
extern void call_8c1c577c(void *, TItemWpnStarCane *, int, int);
void TItemWpnStarCane_v49_8c240240(TItemWpnStarCane *o)
{
    int v1;
    v1 = (int)(((o->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        call_8c1c577c((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 2, 4);
    }
}
