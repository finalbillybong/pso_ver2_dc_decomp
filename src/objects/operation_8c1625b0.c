#include "src/include/classes/TODoorMachine01.h"
extern int call_8c0eea7c(float);
extern void operation_8c05428c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorMachine01_v19_8c1625b0(TODoorMachine01 *o)
{
    int t1;
    if (((o->f108 & 1)) != 0) {
        t1 = call_8c0eea7c(10000.0f);
        if (t1 == 1) {
            return;
        }
    }
    o->fe4 = 3;
    operation_8c05428c((void *)o, 0, 0x10);
    play_se_8c05fbf8(0x40001, (void *)(((char *)o + 0x3c)), 0, 0);
}
