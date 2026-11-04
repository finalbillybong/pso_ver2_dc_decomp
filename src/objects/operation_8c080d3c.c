#include "src/include/classes/TObjLazerFenceNorm.h"
extern void call_8c080dac(void);
extern void operation_8c080d70(void *);
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
    operation_8c080d70((void *)o);
}
