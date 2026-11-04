#include "src/include/classes/TObjDFDemoF.h"
void TObjDFDemoF_update_8c22b71c(TObjDFDemoF *o)
{
    if (!(120.0f > (o->fbc += 1.0f))) {
        o->fbc = 120.0f;
    }
    if (++o->f94 >= 0x78) {
        o->f04 |= 1;
    }
}
