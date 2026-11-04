#include "src/include/classes/TObjWarnChime.h"
extern int call_8c25c6a8(void);
extern void call_8c25c574(TObjWarnChime *);
extern void call_8c25c664(TObjWarnChime *);
void operation_8c25c540(TObjWarnChime *o)
{
    int t1;
    t1 = call_8c25c6a8();
    if (t1 == 0) {
        o->f20 = 0;
        return;
    }
    call_8c25c574(o);
    call_8c25c664(o);
}
