#include "src/include/classes/TWindowSubQuestBoardSelect.h"
extern void play_se_8c05fbf8(int, int, int, int);
void operation_8c21e920(TWindowSubQuestBoardSelect *o)
{
    if (((o->f68 & 4)) == 0) {
        play_se_8c05fbf8(0x50001, 0, 0, 0);
        o->f68 |= 1;
    }
}
