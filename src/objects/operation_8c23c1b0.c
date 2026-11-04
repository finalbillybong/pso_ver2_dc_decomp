#include "src/include/classes/TItemWpnDoubleCanon.h"
typedef struct Arg0_234 Arg0_234;
extern void operation_8c074ce4(void);
extern void njRotateZ_8c37e02c(int, void *);
void TItemWpnDoubleCanon_v57_8c23c1b0(TItemWpnDoubleCanon *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 != 4) {
            return;
        }
    } else {
        operation_8c074ce4();
        njRotateZ_8c37e02c(0, (void *)(o->f234));
        return;
    }
    operation_8c074ce4();
    njRotateZ_8c37e02c(0, (void *)(-(int)(o->f234)));
}
