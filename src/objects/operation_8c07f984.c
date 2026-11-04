#include "src/include/classes/TItemMag.h"
void operation_8c07f984(TItemMag *o)
{
    if (o->f1dc != 0.0f) {
        o->f1dc -= 1.0f;
        if (o->f1dc == 0.0f) {
            o->f1e0 = 0.0f;
        }
    }
}
