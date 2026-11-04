#include "src/include/classes/TOMineTrap.h"
extern void operation_8c05426c(void *, int, int);
void TOMineTrap_v97_8c0fe858(TOMineTrap *o)
{
    o->f30a = 3;
    operation_8c05426c((void *)o, 0, 1);
    o->f34 &= -0x40001;
}
