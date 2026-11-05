#include "src/include/classes/TWindowSubSymbolChatPartsSet.h"
typedef struct TWindowSubSymbolChatPartsSet_p90 TWindowSubSymbolChatPartsSet_p90;
extern void play_se_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void TWindowSubSymbolChatPartsSet_update_step_8c224438(TWindowSubSymbolChatPartsSet *o)
{
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f70 |= 1;
    call_8c19a044((void *)(o->f90), 2);
}
