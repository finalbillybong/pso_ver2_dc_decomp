#include "src/include/classes/TItemWpnUnknownCane.h"
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct TItemWpnUnknownCane_p13c TItemWpnUnknownCane_p13c;
struct TItemWpnUnknownCane_p13c {
    char unknown0[0x310];
    int f310;
};
extern void call_8c1c577c(void *, TItemWpnUnknownCane *, int, int);
void TItemWpnUnknownCane_v49_8c253f30(TItemWpnUnknownCane *o)
{
    int v1;
    v1 = (int)(((o->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        call_8c1c577c((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 1, 2);
    }
}
