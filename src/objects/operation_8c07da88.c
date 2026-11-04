#include "src/include/classes/TItemMag.h"
typedef struct TItemMag_p13c TItemMag_p13c;
struct TItemMag_p13c {
    char unknown0[0x5c8];
    int f5c8;
};
void operation_8c07da88(TItemMag *o)
{
    int v7;
    if (o->f13c != 0 && o->f13c->f5c8 == 0) {
        v7 = (int)((int)o->f21c - (int)o->f218);
        if (v7 > 0) {
            o->f13c->f5c8 = (int)(v7);
        }
    }
}
