#include "src/include/classes/TOContainerAncientEnemy.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern "C" void operation_8c09e6b4(void *);
extern "C" void operation_8c1e4e00(TOContainerAncientEnemy *o, Arg1 *a1, int a2)
{
    if (a1->f00 == 1) {
        if (a2 != 0) {
            o->v86();
        }
        o->f30a = 1;
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
    }
}
