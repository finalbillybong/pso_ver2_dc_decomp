#include "src/include/classes/TItemWpnDevilCane.h"
typedef struct Arg0_23c Arg0_23c;
extern int g_8c4689f0;
extern void njRotateY_8c37df90(int, void *);
extern void operation_8c074ce4(void);
void TItemWpnDevilCane_v57_8c23b82c(TItemWpnDevilCane *o)
{
    switch (g_8c4689f0) {
    case 1:
        njRotateY_8c37df90(0, (void *)(o->f23c));
        return;
    case 2:
        operation_8c074ce4();
        return;
    case 3:
        njRotateY_8c37df90(0, (void *)(-(int)(o->f23c)));
        return;
    case 4:
        operation_8c074ce4();
        return;
    case 6:
        operation_8c074ce4();
        return;
    case 0:
    case 5:
        break;
    }
}
