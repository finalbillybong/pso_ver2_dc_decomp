#include "src/include/classes/TOKeyCave01.h"
extern "C" void operation_8c1130e8(void *);
extern "C" void call_8c1354cc(TOKeyCave01 *, int);
extern "C" void TOKeyCave01_update_8c1352e4(TOKeyCave01 *o)
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
        call_8c1354cc(o, 1);
        o->v19();
        o->f10c = 1;
        return;
    }
    o->v17();
    t2 = o->v16();
    if (t2 != 1) {
        call_8c1354cc(o, 0);
        o->v20();
        o->f10c = 0;
    }
}
