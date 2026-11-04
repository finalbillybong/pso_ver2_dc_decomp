#include "src/include/classes/TObjEneMoja.h"
typedef struct TObjEneMoja_pdc TObjEneMoja_pdc;
struct TObjEneMoja_pdc {
    char unknown0[0x18];
    int f18;
};
void TObjEneMoja_v68_8c039b60(TObjEneMoja *o)
{
    switch (o->f39c) {
    case 2:
        o->f30a = 6;
        o->ff0 = 5;
        break;
    case 1:
        o->f30a = 5;
        o->ff0 = 2;
        break;
    case 0:
    default:
        o->f30a = 4;
        o->ff0 = 3;
    }
    o->f30c = 0;
    o->f34 |= 0x200000;
    o->f34 &= -0x6040001;
    o->fdc->f18 |= 1;
    o->f390 = 0;
}
