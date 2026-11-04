#include "src/include/classes/TObjContainerEnemy.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern "C" void operation_8c05428c(void *, int, int);
extern "C" void operation_8c09e6b4(void *);
extern "C" void TObjContainerEnemy_v05_8c084cc0(TObjContainerEnemy *o, Arg1 *a1, int a2)
{
    if (a2 != 0) {
        if (a1->f00 != 1) {
            return;
        }
        o->v86();
        operation_8c05428c((void *)o, 0, 1);
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
        o->f30a = 1;
        return;
    }
    if (a1->f00 == 1) {
        operation_8c05428c((void *)o, 0, 1);
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
        o->f30a = 1;
    }
}
