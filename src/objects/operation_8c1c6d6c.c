#include "src/include/classes/TOSparkMachine01.h"
extern void TOSparkMachine01_update_step_8c1c6dc4(TOSparkMachine01 *, int);
void TOSparkMachine01_update_8c1c6d6c(TOSparkMachine01 *o)
{
    int v1;
    if (o->f70 > 0.0f) {
        v1 = (int)0;
        while (4 > v1) {
            TOSparkMachine01_update_step_8c1c6dc4(o, v1);
            v1 = (int)(v1 + 1);
        }
        return;
    }
    o->fa7 = 0;
    o->fa6 = 0;
    o->fa4 = 0;
    TOSparkMachine01_update_step_8c1c6dc4(o, 1);
}
