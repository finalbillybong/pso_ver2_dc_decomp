#include "src/include/classes/TWindowSubSymbolChatParts.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubSymbolChatParts_update_step_2_8c225338(TWindowSubSymbolChatParts *o)
{
    if (((o->f80 & 1)) == 0) {
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->f80 |= 2;
    }
}
