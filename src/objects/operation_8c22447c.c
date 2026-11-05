#include "src/include/classes/TWindowSubSymbolChatPartsSet.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubSymbolChatPartsSet_update_step_2_8c22447c(TWindowSubSymbolChatPartsSet *o)
{
    if (((o->f70 & 1)) == 0) {
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->f70 |= 2;
    }
}
