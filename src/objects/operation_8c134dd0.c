#include "src/include/classes/TODoorCave02.h"
extern int call_8c0eea7c(TODoorCave02 *, float);
extern void operation_8c05426c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorCave02_v17_8c134dd0(TODoorCave02 *o)
{
    int t1;
    if (((o->f108 & 0x100000)) != 0) {
        o->f110 += 0.1f;
        if (1.0f > o->f110) {
            goto L_8c134e28;
        }
        o->f108 &= -0x100001;
    } else {
        o->f110 -= 0.1f;
        if (!(o->f110 > 0.0f)) {
            o->f108 |= 0x100000;
        }
    }
L_8c134e28:;
    if ((o->f108 & 1) == 1) {
        t1 = call_8c0eea7c(o, 4900.0f);
        if (t1 == 1) {
            o->fe4 = 1;
            operation_8c05426c((void *)o, 0, 0x10);
            play_se_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
        }
    }
}
