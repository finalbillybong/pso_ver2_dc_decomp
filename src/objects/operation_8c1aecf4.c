#include "src/include/classes/TODoorCave03.h"
extern int call_8c0eea7c(TODoorCave03 *, float);
extern void operation_8c05426c(void *, int, int);
void TODoorCave03_v17_8c1aecf4(TODoorCave03 *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(o, 4900.0f);
        if (t1 != 1) {
            return;
        }
        o->fe4 = 1;
        operation_8c05426c((void *)o, 0, 0x10);
        return;
    }
    if (((o->f108 & 0x10000)) != 0) {
        o->f110 += 0.1f;
        if (1.0f > o->f110) {
            return;
        }
        o->f108 &= -0x10001;
        return;
    }
    o->f110 -= 0.1f;
    if (!(o->f110 > 0.0f)) {
        o->f108 |= 0x10000;
    }
}
