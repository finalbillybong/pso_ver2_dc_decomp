#include "src/include/classes/TObjHexLine.h"
extern void call_8c2574a0(TObjHexLine *);
void TObjHexLine_update_8c2572f4(TObjHexLine *o)
{
    o->fa0 += *(float *)0x8c33ff6c;
    if (!(1.0f > o->fa0)) {
        call_8c2574a0(o);
    }
}
