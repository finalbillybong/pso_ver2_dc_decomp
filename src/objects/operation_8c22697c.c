#include "src/include/classes/TWindowSetLevelUp.h"
extern void call_8c2269a8(TWindowSetLevelUp *);
void TWindowSetLevelUp_update_8c22697c(TWindowSetLevelUp *o)
{
    short v1;
    v1 = o->f22;
    o->f22 = v1 - 1;
    if (!(v1 > 0)) {
        call_8c2269a8(o);
    }
}
