#include "src/include/classes/TOBarrierEnergy01.h"
typedef struct S_g8c4d7cc4 S_g8c4d7cc4;
struct S_g8c4d7cc4 {
    int f00;
};
extern void call_8c0eeb58(void);
extern void operation_8c10b9d0(int);
extern void operation_8c05428c(void *, int, int);
void TOBarrierEnergy01_v19_8c10b950(TOBarrierEnergy01 *o)
{
    call_8c0eeb58();
    operation_8c10b9d0((int)o);
    if ((o->f108 & 1) != 1) {
        o->fe4 = 3;
        operation_8c05428c((void *)o, 0, 0x10);
        o->f28 = (int)((*(S_g8c4d7cc4 **)0x8c4d7cc4)->f00);
    }
}
