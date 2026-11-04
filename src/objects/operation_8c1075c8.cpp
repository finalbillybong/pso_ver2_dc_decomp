#include "src/include/classes/TItemEffHeaven.h"
typedef struct TItemEffHeaven_p38 TItemEffHeaven_p38;
extern "C" int hierarchy_is_active(void *);
extern "C" void operation_8c1075c8(TItemEffHeaven *o)
{
    int t1;
    if (o->f38 != 0) {
        t1 = hierarchy_is_active((void *)(o->f38));
        if (t1 != 0) {
            goto L_8c1075e6;
        }
    }
    o->f04 |= 1;
    return;
L_8c1075e6:;
    o->f30 += 1;
    if (o->f30 >= o->f34) {
        o->f30 = 0;
        o->v5();
    }
}
