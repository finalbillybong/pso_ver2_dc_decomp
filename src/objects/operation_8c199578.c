#include "src/include/classes/TWindowSubCustomSelect.h"
typedef struct TWindowSubCustomSelect_p88 TWindowSubCustomSelect_p88;
extern void play_se_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void operation_8c199578(TWindowSubCustomSelect *o)
{
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f83 |= 1;
    call_8c19a044((void *)(o->second), 2);
}
