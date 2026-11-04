#include "src/include/classes/TItemTimer.h"
typedef struct Arg0_24 Arg0_24;
extern int hierarchy_is_active(void *);
void TItemTimer_update_8c1ab0c0(TItemTimer *o)
{
    int t1;
    o->f20 += -1;
    t1 = hierarchy_is_active((void *)(o->f24));
    if (t1 == 0) {
        o->f04 |= 1;
        return;
    }
    if (o->f20 == 0) {
        if (o->f28 != 0) {
            ((void (*)(void *))(o->f28))((void *)(o->f24));
        }
        o->f04 |= 1;
    }
}
