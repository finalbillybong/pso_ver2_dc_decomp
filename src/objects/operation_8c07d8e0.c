#include "src/include/classes/TItemMag.h"
extern void call_8c07dac0(TItemMag *, int);
void operation_8c07d8e0(TItemMag *o)
{
    if (o->f218 > 0x5a) {
        call_8c07dac0(o, 1);
    }
}
