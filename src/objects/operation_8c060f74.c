#include "src/include/classes/TObjEneBm5Wolf.h"
extern void call_8c059ea4(TObjEneBm5Wolf *, int);
void TObjEneBm5Wolf_v71_8c060f74(TObjEneBm5Wolf *o)
{
    if (o->f30a != 0x10 && o->f30a != 0x11) {
        call_8c059ea4(o, 0x10);
    }
}
