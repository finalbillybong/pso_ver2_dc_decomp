#include "src/include/object.h"
int clamp_330(Object *o, short *value)
{
    if (*value < 0) {
        *value = 0;
        return 0;
    }
    if (*value > o->limit_198) {
        *value = o->limit_198;
        return 0;
    }
    return 1;
}
