#include "src/include/classes/TObjEneBm5Wolf.h"
typedef struct TObjEneBm5Wolf_pdc TObjEneBm5Wolf_pdc;
struct TObjEneBm5Wolf_pdc {
    char unknown0[0x4];
    float f04;
};
void TObjEneBm5Wolf_v94_8c061020(TObjEneBm5Wolf *o)
{
    o->fdc->f04 = o->f428 + 10.0f;
}
