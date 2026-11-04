#include "src/include/classes/TOTrap.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    short f00;
};
extern "C" void operation_8c09e6b4(void *);
extern "C" void TOTrap_v05_8c140e58(TOTrap *o, Arg1 *a1, int a2)
{
    if (a1->f00 == 4) {
        if (a2 == 1) {
            o->v92();
        }
        operation_8c09e6b4((void *)o);
        o->f04 |= 1;
    }
}
