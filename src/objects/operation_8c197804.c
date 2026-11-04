#include "src/include/classes/TWindowSubCustomEquip.h"
typedef struct TWindowSubCustomEquip_p70 TWindowSubCustomEquip_p70;
extern void play_se_8c05fbf8(int, int, int, int);
extern void call_8c19a044(void *, int);
void operation_8c197804(TWindowSubCustomEquip *o)
{
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 1;
    call_8c19a044((void *)(o->child), 2);
}
