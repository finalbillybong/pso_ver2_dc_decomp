#include "src/include/classes/TItemMag.h"
typedef struct TItemMag_p13c TItemMag_p13c;
struct TItemMag_p13c {
    char unknown0[0x330];
    short f330;
};
extern void call_8c07ddcc(TItemMag *, int);
extern void call_8c07dac0(TItemMag *, int);
void operation_8c07d820(TItemMag *o)
{
    if (o->f218 == 0x5a) {
        if (!(o->f13c->f330 > 0)) {
            return;
        }
        call_8c07ddcc(o, 0xf);
        return;
    }
    if (o->f218 > 0x5a) {
        call_8c07dac0(o, 1);
    }
}
