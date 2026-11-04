#include "src/include/classes/TItemWpnDorillArm.h"
typedef struct TItemWpnDorillArm_p1d4 TItemWpnDorillArm_p1d4;
typedef struct Arg0_23c Arg0_23c;
extern void njRotateZ_8c37e02c(int, void *);
extern void call_8c3aa716(void *);
void TItemWpnDorillArm_v57_8c23bd7c(TItemWpnDorillArm *o)
{
    char *v62;
    v62 = (char *)*(int *)0x8c4689f0;
    if ((int)(v62) > 0 && 4 > (int)(v62)) {
        njRotateZ_8c37e02c(0, (void *)(o->f23c));
        return;
    }
    if ((int)(v62) == 4 && o->f1d4 != 0 && o->f234 == 1) {
        call_8c3aa716((void *)(o->f1d4));
    }
}
