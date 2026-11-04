#include "src/include/classes/TWindowSubComCard.h"
extern void call_8c0de3cc(void);
void operation_8c1d4730(TWindowSubComCard *o)
{
    if (((o->f21 & 1)) != 0) {
        call_8c0de3cc();
        o->f21 = (unsigned int)o->f21 >> 1 << 1;
    }
}
