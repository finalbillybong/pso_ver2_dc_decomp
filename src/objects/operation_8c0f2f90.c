#include "src/include/classes/TOFenceAncient03.h"
extern void operation_8c05428c(void *, int, int);
void TOFenceAncient03_v17_8c0f2f90(TOFenceAncient03 *o)
{
    int v1;
    o->fe4 = 0;
    o->f108 = 0;
    v1 = (int)0;
    while (4 > v1) {
        operation_8c05428c((void *)o, v1, 0x10);
        v1 = (int)(v1 + 1);
    }
}
