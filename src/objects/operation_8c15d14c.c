#include "src/include/classes/TOSensorAncient01.h"
extern void call_8c15d1bc(TOSensorAncient01 *);
void TOSensorAncient01_v17_8c15d14c(TOSensorAncient01 *o)
{
    o->f120 = (int)((float)o->f120 + 1310.0f);
    call_8c15d1bc(o);
    if (o->f11c > 0) {
        o->f11c += -1;
        return;
    }
    o->f11c = 0;
    o->f3c.y += 1.0f;
}
