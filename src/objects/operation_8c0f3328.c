#include "src/include/classes/TOFenceAncient04.h"
extern void operation_8c05428c(void *, int, int);
void TOFenceAncient04_v17_8c0f3328(TOFenceAncient04 *o)
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
