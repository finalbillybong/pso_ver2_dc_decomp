#include "src/include/classes/TODoorAncient06.h"
typedef struct S_g8c4d8484 S_g8c4d8484;
struct S_g8c4d8484 {
    int f00;
    int f04;
};
extern int call_8c0eea7c(float);
extern void operation_8c05426c(void *, int, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TODoorAncient06_v17_8c11e9b4(TODoorAncient06 *o)
{
    int t1;
    if ((o->f108 & 1) == 1) {
        o->f28 = (int)((*(S_g8c4d8484 **)0x8c4d8484)->f04);
        t1 = call_8c0eea7c(4900.0f);
        if (t1 != 1) {
            return;
        }
        o->fe4 = 1;
        operation_8c05426c((void *)o, 0, 0x10);
        play_se_8c05fbf8(0x40008, (void *)(((char *)o + 0x3c)), 0, 0);
        return;
    }
    o->f28 = (int)((*(S_g8c4d8484 **)0x8c4d8484)->f00);
}
