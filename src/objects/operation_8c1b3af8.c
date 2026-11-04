#include "src/include/classes/TBoss4Type1.h"
extern void play_se_8c05fbf8(int, void *, int, int);
void TBoss4Type1_v70_8c1b3af8(TBoss4Type1 *o)
{
    o->f34 &= -0x201;
    o->f3dc = 1;
    play_se_8c05fbf8(0x30022, (void *)(((char *)o + 0x3c)), 0, 1);
}
