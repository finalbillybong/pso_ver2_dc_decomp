#include "src/include/classes/TItemMag.h"
typedef struct TItemMag_p13c TItemMag_p13c;
struct TItemMag_p13c {
    char unknown0[0x20];
    short f20;
};
extern int call_8c1931d4(short, unsigned char, unsigned char, int);
void TItemMag_v44_8c07d1ac(TItemMag *o)
{
    unsigned char v1;
    int t1;
    v1 = o->f136;
    if (v1 >= 0x39) {
        v1 = (int)0x39;
    }
    t1 = call_8c1931d4(o->f13c->f20, 2, v1, -1);
    o->f1c4 = (int)(t1);
}
