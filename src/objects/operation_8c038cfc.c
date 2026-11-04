#include "src/include/classes/TObjEneMoja.h"
typedef struct TObjEneMoja_pdc TObjEneMoja_pdc;
struct TObjEneMoja_pdc {
    char unknown0[0x18];
    int f18;
};
extern int operation_456a4(void *);
int TObjEneMoja_v45_8c038cfc(TObjEneMoja *o)
{
    int t1;
    t1 = operation_456a4((void *)o);
    if (t1 != 0) {
        switch (o->f30a) {
        case 0:
        case 1:
            o->f30a = 0;
            o->f30c = 0;
            o->f3a4 = 1;
            o->f3a0 = -1;
            o->f358 = 0;
            o->f390 = 0;
            o->ff0 = 2;
            o->f34 &= -0x6040001;
            o->fdc->f18 |= 1;
        }
        return 1;
    }
    return 0;
}
