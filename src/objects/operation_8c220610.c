#include "src/include/classes/TWindowSubSymbolChatFaceType.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubSymbolChatFaceType_update_step_3_8c220610(TWindowSubSymbolChatFaceType *o)
{
    if (((o->f68 & 1)) == 0) {
        play_se_8c05fbf8(0x50016, 0, 0, 0);
        o->f68 |= 2;
    }
}
