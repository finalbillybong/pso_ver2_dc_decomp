#include "src/include/classes/TObjMesBase.h"
extern "C" void TObjMesBase_update_8c1ab1b8(TObjMesBase *o)
{
    if (o->fe8 != 0) {
        if (o->fe8 != 1) {
            return;
        }
    } else {
        o->v15();
        return;
    }
    o->v16();
}
