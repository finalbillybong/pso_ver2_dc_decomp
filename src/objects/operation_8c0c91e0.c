#include "src/include/classes/TObjEneRe4Sorcerer.h"
extern int apply_contact_position(void *, void *);
int TObjEneRe4Sorcerer_v107_8c0c91e0(TObjEneRe4Sorcerer *o, int a1)
{
    int t1;
    t1 = apply_contact_position((void *)o, (void *)a1);
    if (t1 == 0) {
        o->f3e4 &= -0x11;
    } else {
        o->f3e4 |= 0x10;
    }
    return (int)(t1);
}
