#include "src/include/classes/TOSensorGeneral01.h"
void TOSensorGeneral01_v17_8c15d634(TOSensorGeneral01 *o)
{
    int v3;
    TOSensorGeneral01 *v5;
    o->f11c += 0x28f;
    *(int *)((char *)o + 0x124) -= 1;
    v3 = (int)o->f124;
    v5 = (TOSensorGeneral01 *)o;
    if (!(o->f124 >= 0)) {
        o->f124 = 0;
        o->f120 = 0;
        o->f64 += 0xccc;
        o->f3c.y += 1.0f;
        return;
    }
    if (30.0f > (float)v3) {
        v5->f120 = 1;
        v5->f64 += 0x147;
        return;
    }
    if (60.0f > (float)v3) {
        v5->f120 = 2;
        v5->f64 += 0x147;
        return;
    }
    if (90.0f > (float)v3) {
        v5->f120 = 3;
        v5->f64 += 0x147;
    }
}
