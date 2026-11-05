#include "src/include/classes/TObjLazerFenceExtra.h"
extern void call_8c0813dc(void);
extern void TObjLazerFenceExtra_update_step_8c0813a0(void *);
void TObjLazerFenceExtra_update_8c08136c(TObjLazerFenceExtra *o)
{
    if (o->fec != 0) {
        if (o->fec != 1) {
            return;
        }
    } else {
        call_8c0813dc();
        return;
    }
    TObjLazerFenceExtra_update_step_8c0813a0((void *)o);
}
