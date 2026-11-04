#include "src/include/classes/TItemDisconnectCtrl.h"
extern void operation_8c01b9e0(void);
void TItemDisconnectCtrl_update_8c25f920(TItemDisconnectCtrl *o)
{
    if (*(int *)0x8c5134c0 != 0) {
        operation_8c01b9e0();
        o->f04 |= 1;
    }
}
