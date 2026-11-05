#include "src/include/classes/TTecSlicer.h"
extern int call_8c011214(int, int, int);
void TTecSlicer_update_step_8c137c3c(TTecSlicer *o)
{
    int t1;
    t1 = call_8c011214((int)((char *)o + 0x48), (int)((char *)o + 0x3c), 0x40000100);
    if (t1 != 0) {
        o->f04 |= 1;
    }
}
