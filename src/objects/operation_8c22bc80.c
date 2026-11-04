#include "src/include/classes/TWindowSoundBalance.h"
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c22bc80(TWindowSoundBalance *o)
{
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 1;
}
