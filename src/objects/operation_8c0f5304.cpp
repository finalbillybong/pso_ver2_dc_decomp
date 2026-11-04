#include "src/include/classes/TObjEneDf2Bringer.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void call_8c05bfd8(int, float);
extern "C" void call_8c05c07c(int, float);
extern "C" void TObjEneDf2Bringer_v109_8c0f5304(TObjEneDf2Bringer *o, float f0)
{
    int t1;
    t1 = o->v105();
    if (t1 != 0) {
        call_8c05bfd8((int)(o), f0);
        return;
    }
    call_8c05c07c((int)(o), f0);
}
