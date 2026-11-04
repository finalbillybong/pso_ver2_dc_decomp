#include "src/include/classes/TItemWpnSpreadGun.h"
typedef struct Arg0_238 Arg0_238;
extern void njRotateZ_8c37e02c(int, void *);
void TItemWpnSpreadGun_v57_8c078574(TItemWpnSpreadGun *o)
{
    if (*(int *)0x8c4689f0 == 1) {
        njRotateZ_8c37e02c(0, (void *)(o->f238));
    }
    if (*(int *)0x8c4689f0 == 4) {
        njRotateZ_8c37e02c(0, (void *)(-(int)(o->f238)));
    }
}
