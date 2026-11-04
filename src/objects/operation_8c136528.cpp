#include "src/include/classes/TOKeyAncient03.h"
extern "C" void operation_8c1130e8(void *);
extern "C" void call_8c136688(TOKeyAncient03 *, int);
extern "C" void TOKeyAncient03_update_8c136528(TOKeyAncient03 *o)
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
        call_8c136688(o, 1);
        o->v19();
        o->f10c = 1;
        return;
    }
    o->v17();
    t2 = o->v16();
    if (t2 != 1) {
        call_8c136688(o, 0);
        o->v20();
        o->f10c = 0;
    }
}
