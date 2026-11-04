#include "src/include/classes/TObjLazerFence4.h"
extern "C" void call_8c11da04(TObjLazerFence4 *);
extern "C" void operation_8c11dad4(void *);
extern "C" void TObjLazerFence4_render_8c11d8f0(TObjLazerFence4 *o)
{
    int t1;
    t1 = o->v11(300.0f, 40.0f);
    if (t1 != 0) {
        if (o->fe4 != 0) {
            if (o->fe4 != 1) {
                return;
            }
        } else {
            call_8c11da04(o);
            return;
        }
        operation_8c11dad4((void *)o);
    }
}
