#include "src/include/classes/TODoorCave02.h"
typedef struct S_g8c4d9ac4 S_g8c4d9ac4;
struct S_g8c4d9ac4 {
    int f00;
    int f04;
};
extern int call_8c0eea7c(float);
extern void operation_8c05428c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorCave02_v19_8c134e90(TODoorCave02 *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        o->f28 = (int)((*(S_g8c4d9ac4 **)0x8c4d9ac4)->f04);
        t1 = call_8c0eea7c(10000.0f);
        if (t1 == 1) {
            return;
        }
        o->fe4 = 3;
        operation_8c05428c((void *)o, 0, 0x10);
        play_se_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    o->fe4 = 3;
    o->f28 = (int)((*(S_g8c4d9ac4 **)0x8c4d9ac4)->f00);
    operation_8c05428c((void *)o, 0, 0x10);
    play_se_8c05fbf8(0x40007, (void *)(((char *)o + 0x3c)), 0, 0);
}
