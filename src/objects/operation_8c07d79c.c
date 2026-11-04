#include "src/include/classes/TItemMag.h"
extern void call_8c07f06c(TItemMag *, int);
void operation_8c07d79c(TItemMag *o)
{
    if (o->f214 > 0.0f) {
        o->f214 -= 1.0f;
    }
    if (((o->f34 & 0x8000000)) == 0) {
        call_8c07f06c(o, 1);
        return;
    }
    call_8c07f06c(o, 0);
}
