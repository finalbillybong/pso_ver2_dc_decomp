#include "src/include/classes/TObjEneDarkGunner.h"
extern void create_effect_777c(void *, int);
extern void play_se_8c05fbf8(int, void *, int, int);
void TObjEneDarkGunner_v69_8c07a95c(TObjEneDarkGunner *o)
{
    o->f34 &= -0x101;
    create_effect_777c((void *)(((char *)o + 0x324)), 0xd7);
    play_se_8c05fbf8(0x3002d, (void *)(((char *)o + 0x3c)), 0, 0);
}
