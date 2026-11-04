#include "src/include/classes/TObjCMCheck.h"
extern void call_8c260acc(void);
void TObjCMCheck_update_8c260914(TObjCMCheck *o)
{
    if (o->f20 == 0) {
        o->f04 |= 1;
        return;
    }
    call_8c260acc();
}
