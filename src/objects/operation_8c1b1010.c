#include "src/include/classes/TBoss4Type2.h"
extern void play_se_8c05fbf8(int, void *, int, int);
void TBoss4Type2_v70_8c1b1010(TBoss4Type2 *o)
{
    o->f3ec = 1;
    o->f34 &= -0x201;
    play_se_8c05fbf8(0x30023, (void *)(((char *)o + 0x3c)), 0, 1);
}
