#include "src/include/classes/TItemWpnStarCane.h"
typedef struct Arg0_234 Arg0_234;
extern void operation_8c074ce4(void);
extern void njRotateY_8c37df90(int, void *);
void TItemWpnStarCane_v57_8c240290(TItemWpnStarCane *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 != 3) {
            return;
        }
    } else {
        operation_8c074ce4();
        njRotateY_8c37df90(0, (void *)(o->f234));
        return;
    }
    operation_8c074ce4();
    njRotateY_8c37df90(0, (void *)(-(int)(o->f234)));
}
