#include "src/include/classes/TItemMag.h"
extern void call_8c07ddcc(TItemMag *, int);
extern void call_8c07dac0(TItemMag *, int);
void operation_8c07d868(TItemMag *o)
{
    if (o->f218 == 0x5a) {
        call_8c07ddcc(o, 0x11);
        return;
    }
    if (o->f218 > 0x5a) {
        call_8c07dac0(o, 1);
    }
}
