#include "src/include/classes/TOMineTrap.h"
extern void operation_8c05426c(void *, int, int);
void TOMineTrap_v96_8c0fe828(TOMineTrap *o)
{
    o->f30a = 2;
    operation_8c05426c((void *)o, 0, 1);
    o->f34 &= -0x40001;
}
