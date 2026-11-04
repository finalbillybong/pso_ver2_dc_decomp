#include "src/include/classes/TObjLazerFence4.h"
extern void call_8c11d944(void);
extern void call_8c11d9c8(void);
void TObjLazerFence4_update_8c11d8bc(TObjLazerFence4 *o)
{
    if (o->fe4 != 0) {
        if (o->fe4 != 1) {
            return;
        }
    } else {
        call_8c11d944();
        return;
    }
    call_8c11d9c8();
}
