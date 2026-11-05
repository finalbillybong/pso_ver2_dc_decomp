#include "src/include/classes/TOMine.h"
typedef struct Arg1 Arg1;
struct Arg1 {
    char unknown0[0x302];
    short f302;
};
typedef struct ObjectData {

} ObjectData;
extern "C" float TOMine_vslot26_8c0fd718(TOMine *o, Arg1 *a1)
{
    if (a1->f302 != 0) {
        o->v24(0, 1.0f);
    }
    return 0.0f;
}
