#include "src/include/classes/TObjEneGyaranzo.h"
void operation_8c13d638(TObjEneGyaranzo *o, int a1)
{
    if (((o->f34 & 0x800)) == 0) {
        {
            int *pf1 = (int *)((char *)o + 0x3a4);
            *pf1 = (unsigned int)*pf1 >> 1 << 1;
        }
        if (((o->f3a4 & 1)) == 0 && o->f30a != 2) {
            o->f39c = o->f30a;
            o->f390 = 2;
        }
        o->f3c4 = a1;
    }
}
