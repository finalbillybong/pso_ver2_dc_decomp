#include "src/include/classes/TItemProShield.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TItemProShield_v42_8c0e85ac(TItemProShield *o)
{
    if (((o->fec & 0x40)) == 0) {
        play_se_8c05fbf8(0xa, (int)((int)o->f13c + 0x3c), 0, 0);
    }
}
