#include "src/include/classes/TOKeyMachine01.h"
extern "C" void operation_8c1130e8(void *);
extern "C" void TOKeyMachine01_update_step_8c162c24(TOKeyMachine01 *, int);
extern "C" void TOKeyMachine01_update_8c1629d4(TOKeyMachine01 *o)
{
    int t1;
    int t2;
    operation_8c1130e8((void *)o);
    if (o->f10c != 1) {
        o->v18();
        t1 = o->v16();
        if (t1 != 1) {
            return;
        }
        TOKeyMachine01_update_step_8c162c24(o, 1);
        o->v19();
        o->f10c = 1;
        return;
    }
    o->v17();
    t2 = o->v16();
    if (t2 != 1) {
        TOKeyMachine01_update_step_8c162c24(o, 0);
        o->v20();
        o->f10c = 0;
    }
}
