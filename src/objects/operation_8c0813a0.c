#include "src/include/classes/TObjLazerFenceExtra.h"
extern int operation_03d080(unsigned short);
extern void operation_8c05426c(void *, int, int);
void operation_8c0813a0(TObjLazerFenceExtra *o)
{
    int t1;
    t1 = operation_03d080((unsigned short)o->fe8);
    if ((unsigned char)t1 == 0) {
        operation_8c05426c((void *)o, 0, 1);
        o->fec = 0;
    }
}
