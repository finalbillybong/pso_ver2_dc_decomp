#include "src/include/classes/TObjEneSaver.h"
typedef struct TObjEneSaver_pdc TObjEneSaver_pdc;
struct TObjEneSaver_pdc {
    char unknown0[0x18];
    int f18;
};
void TObjEneSaver_v69_8c0bef20(TObjEneSaver *o)
{
    if (o->f30a != 7) {
        o->f30a = 7;
        o->f30c = 0;
        o->ff0 = 5;
    }
    o->fdc->f18 |= 1;
    o->f34 &= -0x6640001;
}
