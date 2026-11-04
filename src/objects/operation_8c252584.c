#include "src/include/classes/TItemWpnOnSpreadGun.h"
extern void operation_8c172c30(void *, int, int);
void TItemWpnOnSpreadGun_v50_8c252584(TItemWpnOnSpreadGun *o)
{
    if (o->f238 > 0) {
        operation_8c172c30((void *)(&o->f238), -0x2000, 0);
    }
}
