#include "src/include/classes/TBoss1DragonEffBreath.h"
typedef struct TBoss1DragonEffBreath_p38 TBoss1DragonEffBreath_p38;
extern void call_8c3bdf60(void *, void *);
extern int operation_8c065330(void);
extern void operation_8c067c1c(void *, int, int);
void TBoss1DragonEffBreath_update_8c078ab0(TBoss1DragonEffBreath *o)
{
    int t1;
    call_8c3bdf60((void *)(((char *)o + 0x20)), (void *)(((char *)o + 0x2c)));
    if (-10.0f > o->f20.y) {
        o->f04 |= 1;
        return;
    }
    if (30.0f > o->f20.y) {
        t1 = operation_8c065330();
        operation_8c067c1c((void *)t1, (int)(((char *)o + 0x20)), (int)(o->f38));
    }
}
