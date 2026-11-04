#include "src/include/classes/TWindowKeyBoardBase.h"
extern "C" int operation_8c1e2330(void *);
extern "C" void call_8c0db5d4(TWindowKeyBoardBase *, int);
extern "C" void call_8c1e1120(TWindowKeyBoardBase *, int);
extern "C" void TWindowKeyBoardBase_render_8c1e10b4(TWindowKeyBoardBase *o)
{
    int t1;
    int t2;
    if (((o->f68 & 8)) == 0) {
        t1 = operation_8c1e2330((void *)o);
        if (t1 == 0 && ((o->f6a & 2)) == 0) {
            return;
        }
        t2 = o->v5();
        if (((o->f6a & 2)) != 0) {
            call_8c0db5d4(o, t2);
        }
        call_8c1e1120(o, t2);
    }
}
