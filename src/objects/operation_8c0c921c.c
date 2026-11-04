#include "src/include/classes/TObjEneRe4Sorcerer.h"
extern int capture_current_contact(void *);
int TObjEneRe4Sorcerer_v108_8c0c921c(TObjEneRe4Sorcerer *o)
{
    int t1;
    t1 = capture_current_contact((void *)o);
    if (t1 == 0) {
        o->f3e4 &= -0x11;
    } else {
        o->f3e4 |= 0x10;
    }
    return (int)(t1);
}
