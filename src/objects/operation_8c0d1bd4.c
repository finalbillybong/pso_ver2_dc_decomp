#include "src/include/classes/TObjEneRe7Berura.h"
extern int call_8c18e768(int, int);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void TObjEneRe7Berura_v70_8c0d1bd4(TObjEneRe7Berura *o)
{
    int t1;
    if (((o->f3dc & 4)) == 0) {
        t1 = call_8c18e768((int)(o->f198), 5);
        if (!(t1 > (o->f35a - o->f330))) {
            goto L_8c0d1c0e;
        }
    }
    reset_segments_8c05a124((void *)o);
    return;
L_8c0d1c0e:;
    if (o->f30a != 0xa) {
        operation_8c059ea4((void *)o, 0xa);
    }
}
