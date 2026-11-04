#include "src/include/classes/TBoss3Volopt.h"
extern void call_8c138424(TBoss3Volopt *);
void TBoss3Volopt_update_8c13836c(TBoss3Volopt *o)
{
    char *v12;
    v12 = (char *)o->f34;
    if ((((int)(v12) & 0x800)) != 0) {
        o->f04 |= 1;
        return;
    }
    if ((((int)(v12) & 0x4000)) != 0) {
        if (--o->f2f8 <= 0) {
            o->f2f0 = 0;
            o->f2f4 = 0.0f;
            o->f2f8 = 0;
            o->f34 &= -0x4001;
        }
        return;
    }
    if (o->f390 != o->f30a) {
        if (o->f398 != -1) {
            o->f398 = -1;
            call_8c138424(o);
        }
        o->f30a = o->f390;
        o->f398 = 0;
    }
    call_8c138424(o);
}
