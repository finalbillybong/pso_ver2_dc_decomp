#include "src/include/classes/TObjEneDD.h"
typedef struct ObjectData {

} ObjectData;
extern "C" int operation_8c059d2c(TObjEneDD *o)
{
    int t1;
    int t2;
    int t3;
    t1 = o->v42();
    if (t1 != 0) {
        o->v71();
        return 1;
    }
    o->v50();
    o->v51();
    o->v47();
    t2 = o->v90();
    if (t2 != 0) {
        return 4;
    }
    t3 = o->v41();
    if (t3 != 0) {
        o->v70();
        return 2;
    }
    return 0;
}
