#include "src/include/classes/TBoss4Type3.h"
extern void operation_8c1b81b4(void *, int);
void TBoss4Type3_v71_8c1b79b0(TBoss4Type3 *o)
{
    if (o->f390 != 3 && o->f390 != 2) {
        o->f3c2 = o->f3c0 = 0xffff;
        operation_8c1b81b4((void *)o, 3);
    }
}
