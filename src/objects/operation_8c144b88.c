#include "src/include/classes/TBoss2DeRolLe.h"
extern void operation_8c05b744(void *);
extern int operation_8c05bbf8(void);
extern void call_8c144c30(TBoss2DeRolLe *);
void TBoss2DeRolLe_v99_8c144b88(TBoss2DeRolLe *o)
{
    int t1;
    operation_8c05b744((void *)o);
    if (((o->f3dc & 8)) == 0) {
        t1 = operation_8c05bbf8();
        if (t1 == 0) {
            return;
        }
    }
    call_8c144c30(o);
}
