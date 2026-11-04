#include "src/include/classes/TOContainerAncientItemCommon.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern "C" void operation_8c084240(void *, int);
extern "C" void operation_8c09e6b4(void *);
extern "C" void TOContainerAncientItemCommon_v05_8c1e4554(TOContainerAncientItemCommon *o, Arg1 *a1, int a2)
{
    if (a1->f00 == 1) {
        if (a2 != 0) {
            o->v86();
            operation_8c084240((void *)o, (int)o);
        }
        o->f30a = 1;
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
    }
}
