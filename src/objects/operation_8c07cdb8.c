#include "src/include/classes/TEneEffHamon.h"
void TEneEffHamon_update_8c07cdb8(TEneEffHamon *o)
{
    if (o->f50 > 0) {
        o->f50 += -1;
        return;
    }
    o->f38 += o->f48;
    o->f54 += o->f4c;
    if (!(o->f54 > 0.0f)) {
        o->f04 |= 1;
    }
}
