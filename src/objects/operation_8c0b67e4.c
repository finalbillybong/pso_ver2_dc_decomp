#include "src/include/classes/TOSwitchAttackSub.h"
typedef struct TOSwitchAttackSub_p24 TOSwitchAttackSub_p24;
extern void play_se_8c05fbf8(void *, void *, int, int);
void operation_8c0b67e4(TOSwitchAttackSub *o)
{
    o->f22 += 1;
    if (o->f22 > o->f20) {
        play_se_8c05fbf8((void *)(o->f24), (void *)(((char *)o + 0x28)), 0, 0);
        o->f04 |= 1;
    }
}
