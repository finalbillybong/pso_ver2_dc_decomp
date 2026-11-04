#include "src/include/classes/TCineCtrl.h"
extern void operation_8c1afac8(void *);
extern void call_8c1afb74(void);
void TCineCtrl_update_8c1afa58(TCineCtrl *o)
{
    if (o->f2c != 0) {
        if (o->f2c != 1) {
            if (o->f2c != 2) {
                return;
            }
        } else {
            operation_8c1afac8((void *)o);
            return;
        }
        call_8c1afb74();
    }
}
