#include "src/include/classes/TObjSoloPlayWin.h"
extern void operation_8c25f24c(void *);
extern void call_8c25f290(void);
void TObjSoloPlayWin_update_8c25f21c(TObjSoloPlayWin *o)
{
    if (o->f20 != 0) {
        if (o->f20 != 1) {
            return;
        }
    } else {
        operation_8c25f24c((void *)o);
        return;
    }
    call_8c25f290();
}
