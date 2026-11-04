#include "src/include/classes/TObjTailsTailsMove.h"
extern void call_8c25fba0(void);
extern void operation_8c25fbdc(void *);
void TObjTailsTailsMove_update_8c25fb70(TObjTailsTailsMove *o)
{
    if (o->f28 != 0) {
        if (o->f28 != 1) {
            return;
        }
    } else {
        call_8c25fba0();
        return;
    }
    operation_8c25fbdc((void *)o);
}
