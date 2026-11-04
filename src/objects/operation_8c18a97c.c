#include "src/include/classes/TItemWpnStingTip.h"
typedef struct Arg0_234 Arg0_234;
extern void operation_8c074ce4(void);
extern void njRotateZ_8c37e02c(int, void *);
void TItemWpnStingTip_v57_8c18a97c(TItemWpnStingTip *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 == 2) {
            goto L_8c18a9aa;
        }
        if (*(int *)0x8c4689f0 == 3) {
            goto L_8c18a9c0;
        }
        return;
    }
    operation_8c074ce4();
    njRotateZ_8c37e02c(0, (void *)(o->f234));
    return;
L_8c18a9aa:;
    operation_8c074ce4();
    njRotateZ_8c37e02c(0, (void *)(-(int)(o->f234)));
    return;
L_8c18a9c0:;
    operation_8c074ce4();
}
