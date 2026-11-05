#include "src/include/classes/TObjWarnChime.h"
extern int call_8c25c6a8(void);
void TObjWarnChime_update_step_8c25c51c(TObjWarnChime *o)
{
    int t1;
    o->f24 = -1;
    o->f28 = 0;
    t1 = call_8c25c6a8();
    if (t1 != 0) {
        o->f20 = 1;
    }
}
