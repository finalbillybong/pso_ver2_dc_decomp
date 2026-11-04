#include "src/include/classes/TItemMag.h"
extern void call_8c07dac0(TItemMag *, int);
void operation_8c07d8c0(TItemMag *o)
{
    if (o->f218 > 0x2d) {
        call_8c07dac0(o, 1);
    }
}
