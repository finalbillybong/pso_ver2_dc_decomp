#include "src/include/classes/TObjLazerFenceNorm.h"
extern void call_8c080dac(void);
extern void TObjLazerFenceNorm_update_step_8c080d70(void *);
void TObjLazerFenceNorm_update_8c080d3c(TObjLazerFenceNorm *o)
{
    if (o->fec != 0) {
        if (o->fec != 1) {
            return;
        }
    } else {
        call_8c080dac();
        return;
    }
    TObjLazerFenceNorm_update_step_8c080d70((void *)o);
}
