#include "src/include/classes/TItemWpnTessen.h"
typedef struct Arg0_240 Arg0_240;
extern void njRotateX_8c37dd28(int, void *);
extern void scale_current_matrix_v_8c37e390(void *);
void TItemWpnTessen_v57_8c2407b0(TItemWpnTessen *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 == 2) {
            goto L_8c2407d4;
        }
        if (*(int *)0x8c4689f0 == 3) {
            goto L_8c2407e2;
        }
        return;
    }
    njRotateX_8c37dd28(0, (void *)(o->f240));
    return;
L_8c2407d4:;
    scale_current_matrix_v_8c37e390((void *)(((char *)o + 0x234)));
    return;
L_8c2407e2:;
    njRotateX_8c37dd28(0, (void *)(-(int)(o->f240)));
}
