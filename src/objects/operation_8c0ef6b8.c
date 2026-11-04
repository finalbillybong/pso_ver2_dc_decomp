#include "src/include/classes/TODoorAncient01.h"
extern int call_8c0eea7c(TODoorAncient01 *, float);
extern void operation_8c05428c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorAncient01_v19_8c0ef6b8(TODoorAncient01 *o)
{
    int t1;
    if (((o->f108 & 1)) != 0) {
        t1 = call_8c0eea7c(o, 10000.0f);
        if (t1 != 0) {
            return;
        }
    }
    o->fe4 = 3;
    operation_8c05428c((void *)o, 0, 0x10);
    play_se_8c05fbf8(0x40008, (void *)(((char *)o + 0x3c)), 0, 0);
}
