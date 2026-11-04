#include "src/include/classes/TObjEneLappy.h"
extern void call_8c09e6d0(void);
void operation_8c0519c8(TObjEneLappy *o)
{
    if (((o->f390 & 0x80)) == 0) {
        o->f390 |= 0x80;
        call_8c09e6d0();
    }
}
