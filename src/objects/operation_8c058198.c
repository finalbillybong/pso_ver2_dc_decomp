#include "src/include/classes/TObjEneBm3FlyNest.h"
extern void call_8c059ea4(TObjEneBm3FlyNest *, int);
void TObjEneBm3FlyNest_v71_8c058198(TObjEneBm3FlyNest *o)
{
    if (o->f30a != 9 && o->f30a != 8 && o->f30a != 4) {
        if (o->f3c4 == 0) {
            call_8c059ea4(o, 4);
            return;
        }
        call_8c059ea4(o, 8);
    }
}
