#include "src/include/classes/TObjEneMoja.h"
typedef struct TObjEneMoja_pdc TObjEneMoja_pdc;
struct TObjEneMoja_pdc {
    char unknown0[0x18];
    int f18;
};
void TObjEneMoja_v67_8c03966c(TObjEneMoja *o)
{
    if (o->f30a != 3) {
        o->f30a = 3;
        switch (o->f3a4) {
        case 1:
            o->f30c = 0;
            o->ff0 = 1;
            break;
        default:
            o->f30c = 0;
            o->ff0 = 2;
            break;
        }
        o->f3a0 = -1;
        o->f34 &= -0x6040001;
        o->fdc->f18 |= 1;
        o->f390 = 0;
    }
}
