#include "src/include/classes/TObjDoaEx01.h"
extern int operation_8c0eea7c(int, float);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjDoaEx01_v19_8c24b3ec(TObjDoaEx01 *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        t1 = operation_8c0eea7c((int)o, 10000.0f);
        if (t1 != 0) {
            return;
        }
        o->fe4 = 3;
        play_se_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    o->fe4 = 3;
    play_se_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
}
