#include "src/include/classes/TODoorCave03.h"
extern int call_8c0eea7c(float);
extern void operation_8c05428c(void *, int, int);
void TODoorCave03_v19_8c1aedf4(TODoorCave03 *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(10000.0f);
        if (t1 == 1) {
            return;
        }
        o->fe4 = 3;
        operation_8c05428c((void *)o, 0, 0x10);
        return;
    }
    o->fe4 = 3;
    operation_8c05428c((void *)o, 0, 0x10);
}
