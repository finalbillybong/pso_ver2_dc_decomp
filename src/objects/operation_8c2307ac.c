#include "src/include/classes/TWindowSubMagPhoton.h"
extern void play_se_8c05fbf8(int, int, int, int);
void TWindowSubMagPhoton_update_step_2_8c2307ac(TWindowSubMagPhoton *o)
{
    play_se_8c05fbf8(0x50001, 0, 0, 0);
    o->f68 |= 1;
}
