#include "src/include/classes/TObjLazerFenceExtra.h"
extern "C" void call_8c081520(TObjLazerFenceExtra *);
extern "C" void operation_8c0814c0(void *);
extern "C" void TObjLazerFenceExtra_render_8c081460(TObjLazerFenceExtra *o)
{
    int t1;
    t1 = o->v11(300.0f, 40.0f);
    if (t1 != 0 && o->f110 != 0) {
        switch (o->fec) {
        case 0:
            call_8c081520(o);
            return;
        case 1:
            operation_8c0814c0((void *)o);
        }
    }
}
