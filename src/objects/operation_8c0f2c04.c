#include "src/include/classes/TOFenceAncient02.h"
extern void operation_8c05426c(void *, int, int);
void TOFenceAncient02_v16_8c0f2c04(TOFenceAncient02 *o)
{
    o->fe4 = 1;
    o->f108 = 1;
    operation_8c05426c((void *)o, 0, 0x10);
}
