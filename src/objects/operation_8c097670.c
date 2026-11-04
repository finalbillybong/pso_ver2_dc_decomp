#include "src/include/classes/TItemEffHeaven.h"
void operation_8c097670(TItemEffHeaven *o)
{
    TItemEffHeaven *v2;
    if (o->f30 != 1) {
        v2 = (TItemEffHeaven *)o;
    } else {
        if (!(0.0f > (o->f48 += -0.222222224f))) {
            return;
        }
        o->f48 = 0.0f;
        return;
    }
    if ((v2->f48 += 0.0833333358f) > 1.0f) {
        v2->f48 = 1.0f;
    }
}
