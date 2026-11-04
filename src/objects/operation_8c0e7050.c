#include "src/include/classes/TItemProArmor.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x5];
    char f05;
};
extern int operation_8c073e5c(void *, void *);
extern void call_8c1c9334(Arg1 *, int);
extern void call_8c1c9340(Arg1 *, int);
int TItemProArmor_v31_8c0e7050(TItemProArmor *o, Arg1 *a1)
{
    int t1;
    t1 = operation_8c073e5c((void *)o, (void *)a1);
    if (t1 == 1) {
        a1->f05 = o->f1d8;
        call_8c1c9334(a1, (int)(o->f1d9));
        call_8c1c9340(a1, (int)(o->f1da));
        return 1;
    }
    return 0;
}
