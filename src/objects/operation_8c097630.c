#include "src/include/classes/TItemEffHeaven.h"
void operation_8c097630(TItemEffHeaven *o)
{
    TItemEffHeaven *v2;
    if (o->f30 != 0) {
        v2 = (TItemEffHeaven *)o;
    } else {
        if (!((o->f44 += 0.0833333358f) > 1.0f)) {
            return;
        }
        o->f44 = 1.0f;
        return;
    }
    if (0.0f > (v2->f44 += -0.222222224f)) {
        v2->f44 = 0.0f;
    }
}
