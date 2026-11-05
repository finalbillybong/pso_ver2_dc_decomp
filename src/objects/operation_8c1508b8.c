#include "src/include/classes/TBoss3VoloptHiraisin.h"
extern void operation_8c150c8c(void *);
extern void update_phase_8c150ad4(void *);
extern void call_8c150b74(void);
extern void call_8c150d90(void);
void TBoss3VoloptHiraisin_update_step_8c1508b8(TBoss3VoloptHiraisin *o)
{
    switch (o->f30a) {
    case 0:
    case 1:
        operation_8c150c8c((void *)o);
        return;
    case 4:
        update_phase_8c150ad4((void *)o);
        return;
    case 5:
        call_8c150b74();
        return;
    case 7:
        call_8c150d90();
        return;
    case 2:
    case 3:
    case 6:
        break;
    }
}
