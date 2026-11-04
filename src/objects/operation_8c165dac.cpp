#include "src/include/classes/TBoss2Mine.h"
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c165dac(TBoss2Mine *o, int a1)
{
    switch (a1) {
    case 0:
        break;
    case 4:
        o->v102();
        o->f3a8 &= -8;
        return;
    case 3:
        operation_8c059ea4((void *)o, 0);
        return;
    case 5:
        o->f34 &= -0x801;
        o->f330 = o->f198;
    }
}
