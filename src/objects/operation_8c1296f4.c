#include "src/include/classes/TContainerAncient01.h"
extern void call_8c01c5f0(TContainerAncient01 *);
extern int call_8c18e954(int, int);
extern void operation_8c129a08(void *, int, int);
void operation_8c1296f4(TContainerAncient01 *o)
{
    int t1;
    call_8c01c5f0(o);
    t1 = call_8c18e954((int)((unsigned int)o->f180), 0xf);
    if (t1 == 0) {
        operation_8c129a08((void *)o, (int)(((char *)o + 0x360)), 0x7d);
    }
    if (!(60.0f > o->f180)) {
        o->f30a = 2;
        o->ff0 = o->f30a;
        o->f180 = -1.0f;
    }
}
