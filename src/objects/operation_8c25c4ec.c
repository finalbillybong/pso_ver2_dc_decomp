#include "src/include/classes/TObjWarnChime.h"
extern void operation_8c25c51c(void *);
extern void operation_8c25c540(void *);
void TObjWarnChime_update_8c25c4ec(TObjWarnChime *o)
{
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        operation_8c25c51c((void *)o);
        return;
    }
    operation_8c25c540((void *)o);
}
