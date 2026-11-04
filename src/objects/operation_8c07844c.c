#include "src/include/classes/TItemWpnSpreadGun.h"
extern void operation_8c172c30(void *, int, int);
void TItemWpnSpreadGun_v51_8c07844c(TItemWpnSpreadGun *o)
{
    if (0x2000 > o->f238) {
        operation_8c172c30((void *)(&o->f238), 0x2d8, 0x2000);
    }
}
