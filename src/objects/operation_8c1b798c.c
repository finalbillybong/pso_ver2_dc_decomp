#include "src/include/classes/TBoss4Type3.h"
extern void play_se_8c05fbf8(int, void *, int, int);
void TBoss4Type3_v70_8c1b798c(TBoss4Type3 *o)
{
    o->f34 &= -0x201;
    play_se_8c05fbf8(0x30034, (void *)(((char *)o + 0x3c)), 0, 1);
}
