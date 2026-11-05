#include "src/include/classes/TWindowSubMag.h"
void TWindowSubMag_update_step_8c1912ac(TWindowSubMag *o, int a1)
{
    switch (a1) {
    case 1:
        o->f20 = 6;
        return;
    case 0:
        o->f20 = 0xf;
        return;
    case 2:
    case 3:
    case 4:
        o->f20 = 5;
        return;
    }
}
