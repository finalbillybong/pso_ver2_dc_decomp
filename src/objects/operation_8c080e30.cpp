#include "src/include/classes/TObjLazerFenceNorm.h"
extern "C" void call_8c080ee4(TObjLazerFenceNorm *);
extern "C" void operation_8c080e84(void *);
extern "C" void TObjLazerFenceNorm_render_8c080e30(TObjLazerFenceNorm *o)
{
    int t1;
    t1 = o->v11(300.0f, 40.0f);
    if (t1 != 0) {
        switch (o->fec) {
        case 0:
            call_8c080ee4(o);
            return;
        case 1:
            operation_8c080e84((void *)o);
        }
    }
}
