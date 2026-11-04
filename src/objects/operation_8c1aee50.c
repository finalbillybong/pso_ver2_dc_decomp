#include "src/include/classes/TODoorCave03.h"
extern void call_8c05fd7c(int, TODoorCave03 *, void *, int, int);
void TODoorCave03_v20_8c1aee50(TODoorCave03 *o)
{
    float v1;
    v1 = (float)o->f58;
    if (!((o->f40 - v1) > 0.0f)) {
        o->f40 = v1;
        o->fe4 = 0;
    } else {
        o->f40 -= 1.0f;
    }
    call_8c05fd7c(0x40007, o, (void *)(((char *)o + 0x3c)), 0, 0);
}
