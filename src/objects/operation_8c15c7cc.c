#include "src/include/classes/TOSensor.h"
extern int g_8c3166a8;
extern void TOKey_ctor_8c112e74(void *);
TOSensor *TOSensor_ctor_8c15c7cc(TOSensor *o)
{
    TOKey_ctor_8c112e74((void *)o);
    o->dispatch = (void *)0x8c26eecc;
    *(Vector3 *)&o->f54 = *(Vector3 *)&o->f3c;
    o->tag = (int)(g_8c3166a8);
    o->size = 0x11c;
    return o;
}
