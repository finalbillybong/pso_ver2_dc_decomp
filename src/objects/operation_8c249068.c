#include "src/include/classes/TItemWpnChaoBranch.h"
typedef struct S_g8c44be9c S_g8c44be9c;
typedef struct TItemWpnChaoBranch_p13c TItemWpnChaoBranch_p13c;
struct TItemWpnChaoBranch_p13c {
    char unknown0[0x310];
    int f310;
};
extern void call_8c1c5890(void *, TItemWpnChaoBranch *, int);
void TItemWpnChaoBranch_v49_8c249068(TItemWpnChaoBranch *o)
{
    int v1;
    v1 = (int)(((o->f13c->f310 & 0x20)) != 0);
    if (v1 != 0) {
        call_8c1c5890((void *)(*(S_g8c44be9c **)0x8c44be9c), o, 1);
    }
}
