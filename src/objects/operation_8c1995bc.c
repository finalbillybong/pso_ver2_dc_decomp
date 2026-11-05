#include "src/include/classes/TWindowSubCustomSelect.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubCustomSelect_update_step_3_8c1995bc(TWindowSubCustomSelect *o)
{
    if (((o->f83 & 1)) == 0) {
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->f83 |= 2;
    }
}
