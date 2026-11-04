#include "src/include/classes/TODoorVS2Door01.h"
extern int call_8c0eeb00(TODoorVS2Door01 *);
int operation_8c24ba5c(TODoorVS2Door01 *o)
{
    int v3;
    int t1;
    v3 = (int)1;
    t1 = call_8c0eeb00(o);
    if (t1 == 0 && o->fe4 == 0) {
        v3 = (int)0;
    }
    return (int)(v3);
}
