#include "src/include/classes/TBoss3VoloptMonitor.h"
extern void update_phase_8c151a74(void *);
extern void call_8c151a44(TBoss3VoloptMonitor *);
extern void call_8c151850(TBoss3VoloptMonitor *);
extern void call_8c151938(TBoss3VoloptMonitor *);
void TBoss3VoloptMonitor_update_step_8c151678(TBoss3VoloptMonitor *o)
{
    if (o->f30a != 0) {
        if (o->f30a == 1) {
            goto L_8c15169e;
        }
        if (o->f30a == 4) {
            goto L_8c1516a8;
        }
        if (o->f30a == 5) {
            goto L_8c1516b2;
        }
        return;
    }
    update_phase_8c151a74((void *)o);
    return;
L_8c15169e:;
    call_8c151a44(o);
    return;
L_8c1516a8:;
    call_8c151850(o);
    return;
L_8c1516b2:;
    call_8c151938(o);
}
