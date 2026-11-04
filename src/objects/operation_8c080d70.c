#include "src/include/classes/TObjLazerFenceNorm.h"
extern int operation_03d080(unsigned short);
extern void operation_8c05426c(void *, int, int);
void operation_8c080d70(TObjLazerFenceNorm *o)
{
    int t1;
    t1 = operation_03d080((unsigned short)o->fe8);
    if ((unsigned char)t1 == 0) {
        operation_8c05426c((void *)o, 0, 1);
        o->fec = 0;
    }
}
