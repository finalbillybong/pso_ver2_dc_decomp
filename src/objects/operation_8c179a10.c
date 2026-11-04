#include "src/include/classes/TItemWpnCSorcer.h"
extern void operation_8c074ce4(void);
extern void scale_current_matrix_v_8c37e390(int);
void TItemWpnCSorcer_v57_8c179a10(TItemWpnCSorcer *o)
{
    if (*(int *)0x8c4689f0 != 1) {
        if (*(int *)0x8c4689f0 == 4) {
            goto L_8c179a46;
        }
        if (*(int *)0x8c4689f0 == 7) {
            goto L_8c179a62;
        }
        return;
    }
    operation_8c074ce4();
    scale_current_matrix_v_8c37e390((int)(o->f234 * 0xc + 0x8c286758));
    return;
L_8c179a46:;
    operation_8c074ce4();
    scale_current_matrix_v_8c37e390((int)(o->f234 * 0xc + 0x8c2867b8));
    return;
L_8c179a62:;
    operation_8c074ce4();
}
