#include "src/include/classes/TBoss2Mine.h"
extern "C" void operation_8c059ea4(void *, int);
extern "C" void operation_8c165c18(TBoss2Mine *o, int a1)
{
    switch (a1) {
    case 0:
    case 5:
        break;
    case 4:
        o->v101();
        *(int *)((char *)o + 0x3a8) |= 1;
        o->f3a8 &= -7;
        return;
    case 3:
        if (((o->f3a8 & 0x100)) != 0) {
            o->f3a8 &= -0x101;
            operation_8c059ea4((void *)o, 1);
        }
    }
}
