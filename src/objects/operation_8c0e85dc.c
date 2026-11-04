#include "src/include/classes/TItemProShield.h"
extern int operation_8c073e5c(void *, void *);
extern void call_8c1c9334(int, int);
extern void call_8c1c9340(int, int);
int TItemProShield_v31_8c0e85dc(TItemProShield *o, int a1)
{
    int t1;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        call_8c1c9334(a1, (int)(o->f1e0));
        call_8c1c9340(a1, (int)(o->f1e1));
        return 1;
    }
    return 0;
}
