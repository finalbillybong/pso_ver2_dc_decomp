#include "src/include/object.h"
#define clamp_330_at ((int (*)(Object *, short *))0x8c04a7ec)
int set_330(Object *o, short value)
{
    o->value_330 = value;
    return clamp_330_at(o, &o->value_330);
}
