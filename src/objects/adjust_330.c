#include "src/include/object.h"
int adjust_330(Object *o, short amount)
{
    if (amount < 0) return 0;
    *(short *)((unsigned char *)o + 0x330) -= amount;
    if (o->value_330 < 0) {
        o->value_330 = 0;
        return 0;
    }
    return 1;
}
