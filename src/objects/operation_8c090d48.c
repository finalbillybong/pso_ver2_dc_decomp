#include "src/include/classes/TObjEneMe1Canadin.h"
extern int apply_contact_position(void *, void *);
int operation_8c090d48(TObjEneMe1Canadin *o, int a1)
{
    int t1;
    t1 = apply_contact_position((void *)o, (void *)a1);
    if (t1 == 0) {
        o->f3e4 &= -0x1000001;
    } else {
        o->f3e4 |= 0x1000000;
    }
    return (int)(t1);
}
