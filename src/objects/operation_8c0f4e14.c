#include "src/include/classes/TObjEneDf2Bringer.h"
extern void operation_8c0f5348(void *);
extern void reset_segments_8c05a124(void *);
extern void operation_8c059ea4(void *, int);
void TObjEneDf2Bringer_v70_8c0f4e14(TObjEneDf2Bringer *o)
{
    if (o->f30a != 9 && o->f30a != 8) {
        operation_8c0f5348((void *)o);
    }
    if (((o->f3dc & 4)) != 0) {
        reset_segments_8c05a124((void *)o);
        return;
    }
    if (o->f30a != 9) {
        operation_8c059ea4((void *)o, 9);
    }
}
