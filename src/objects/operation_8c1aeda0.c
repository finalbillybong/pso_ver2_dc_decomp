#include "src/include/classes/TODoorCave03.h"
extern void call_8c05fd7c(int, TODoorCave03 *, void *, int, int);
void TODoorCave03_v18_8c1aeda0(TODoorCave03 *o)
{
    float v1;
    v1 = (float)o->f58;
    if (!(60.0f > (o->f40 - v1))) {
        o->f40 = v1 + 60.0f;
        o->fe4 = 2;
    } else {
        o->f40 += 1.0f;
    }
    call_8c05fd7c(0x40007, o, (void *)(((char *)o + 0x3c)), 0, 0);
}
