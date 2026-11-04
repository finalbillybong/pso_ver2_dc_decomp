#include "src/include/classes/TObjEneBm3Fly.h"
typedef struct ObjectData {

} ObjectData;
extern "C" void call_8c05bfd8(int, float);
extern "C" void call_8c05c07c(int, float);
extern "C" void TObjEneBm3Fly_v109_8c055278(TObjEneBm3Fly *o, float f0)
{
    int t1;
    t1 = o->v105();
    if (t1 != 0) {
        call_8c05bfd8((int)(o), f0);
        return;
    }
    call_8c05c07c((int)(o), f0);
}
