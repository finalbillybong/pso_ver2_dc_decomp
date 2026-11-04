#include "src/include/classes/TObjEneBm3FlyNest.h"
extern int operation_8c05bbf8(void);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void TObjEneBm3FlyNest_v70_8c0581d8(TObjEneBm3FlyNest *o)
{
    int t1;
    if (o->f30a == 3) {
        t1 = operation_8c05bbf8();
        if (t1 != 0) {
            reset_segments_8c05a124((void *)o);
            return;
        }
    }
    if (o->f30a == 4) {
        reset_segments_8c05a124((void *)o);
        return;
    }
    if (o->f30a != 7) {
        operation_8c059ea4((void *)o, 7);
    }
}
