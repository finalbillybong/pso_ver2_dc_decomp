#include "src/include/classes/TItemWpnOnSpreadGun.h"
typedef struct Arg0_238 Arg0_238;
extern void njRotateZ_8c37e02c(int, void *);
void TItemWpnOnSpreadGun_v57_8c2526e0(TItemWpnOnSpreadGun *o)
{
    if (*(int *)0x8c4689f0 == 1) {
        njRotateZ_8c37e02c(0, (void *)(o->f238));
    }
    if (*(int *)0x8c4689f0 == 4) {
        njRotateZ_8c37e02c(0, (void *)(-(int)(o->f238)));
    }
}
