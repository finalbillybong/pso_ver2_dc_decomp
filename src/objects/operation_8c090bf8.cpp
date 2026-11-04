#include "src/include/classes/TObjEneMe1Canadin.h"
typedef struct TObjEneMe1Canadin_pdc TObjEneMe1Canadin_pdc;
struct TObjEneMe1Canadin_pdc {
    char unknown0[0x4];
    float f04;
};
extern "C" void operation_8c090bf8(TObjEneMe1Canadin *o)
{
    o->f410 = o->f414 - o->f40;
    if (30.0f > o->f410) {
        o->v104();
    } else {
        o->v103();
    }
    o->fdc->f04 = o->f410;
}
