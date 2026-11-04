#include "src/include/classes/TObjContainerAbeEnemy.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern "C" void operation_8c09e6b4(void *);
extern "C" void TObjContainerAbeEnemy_v05_8c085c70(TObjContainerAbeEnemy *o, Arg1 *a1, int a2)
{
    if (a2 != 0) {
        if (a1->f00 != 1) {
            return;
        }
        o->v86();
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
        o->f30a = 1;
        return;
    }
    if (a1->f00 == 1) {
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
        o->f30a = 1;
    }
}
