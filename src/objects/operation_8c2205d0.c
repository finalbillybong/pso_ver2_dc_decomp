#include "src/include/classes/TWindowSubSymbolChatFaceType.h"
typedef struct TWindowSubSymbolChatFaceType_p70 TWindowSubSymbolChatFaceType_p70;
extern void play_se_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void TWindowSubSymbolChatFaceType_update_step_2_8c2205d0(TWindowSubSymbolChatFaceType *o)
{
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 1;
    call_8c19a044((void *)(o->child), 2);
}
