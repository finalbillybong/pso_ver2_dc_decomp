#include "src/include/classes/TOVS2Wall01.h"
extern int operation_8c03d338(void);
extern void operation_8c24cd78(TOVS2Wall01 *);
extern void operation_8c24c90c(void *);
extern void operation_8c24c94c(void *);
void TOVS2Wall01_update_8c24c8b0(TOVS2Wall01 *o)
{
    int t1;
    t1 = operation_8c03d338();
    if (t1 == 1) {
        operation_8c24cd78(o);
        return;
    }
    if (o->f30a != 0) {
        if (o->f30a == 1) {
            goto L_8c24c8ea;
        }
        o->f30a = 0;
    }
    operation_8c24c90c((void *)o);
    return;
L_8c24c8ea:;
    operation_8c24c94c((void *)o);
}
