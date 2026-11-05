#include "src/include/classes/TObjWarnChime.h"
extern void TObjWarnChime_update_step_8c25c51c(void *);
extern void TObjWarnChime_update_step_2_8c25c540(void *);
void TObjWarnChime_update_8c25c4ec(TObjWarnChime *o)
{
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        TObjWarnChime_update_step_8c25c51c((void *)o);
        return;
    }
    TObjWarnChime_update_step_2_8c25c540((void *)o);
}
