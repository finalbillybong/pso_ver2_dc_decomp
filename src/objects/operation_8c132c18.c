#include "src/include/classes/TODoorCave01.h"
extern int call_8c0eea7c(TODoorCave01 *, float);
extern void operation_8c05428c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorCave01_v19_8c132c18(TODoorCave01 *o)
{
    int v1;
    int t1;
    v1 = !(o->f108 & 1);
    if (v1 != 1) {
        t1 = call_8c0eea7c(o, 10000.0f);
        if (t1 == 1) {
            return;
        }
    }
    o->fe4 = 3;
    operation_8c05428c((void *)o, 0, 0x10);
    play_se_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
}
