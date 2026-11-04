#include "src/include/classes/TObjWarpBase.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
} ObjectData;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void destroy_context_8c051f28(void *, short);
extern "C" void call_8c122774(void *, TObjWarpBase *);
extern "C" TObjWarpBase *TObjWarpBase_dtor_8c0886a8(TObjWarpBase *o, int a1)
{
    if (o != 0) {
        *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2651bc;
        o->v15();
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
