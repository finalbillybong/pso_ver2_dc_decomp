#include "src/include/classes/TOFenceAncient04.h"
extern void operation_8c05426c(void *, int, int);
void TOFenceAncient04_v16_8c0f32ec(TOFenceAncient04 *o)
{
    int v1;
    o->fe4 = 1;
    o->f108 = 1;
    v1 = (int)0;
    while (4 > v1) {
        operation_8c05426c((void *)o, v1, 0x10);
        v1 = (int)(v1 + 1);
    }
}
