#include "src/include/classes/TODoorVS2Door01.h"
extern int call_8c0eea7c(float);
extern void operation_8c05426c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorVS2Door01_v17_8c24ba8c(TODoorVS2Door01 *o)
{
    int t1;
    if (((o->f108 & 1)) != 0) {
        t1 = call_8c0eea7c(4900.0f);
        if (t1 != 0) {
            o->fe4 = 1;
            operation_8c05426c((void *)o, 0, 0x10);
            play_se_8c05fbf8(0x4000b, (void *)(((char *)o + 0x3c)), 0, 0);
        }
    }
}
