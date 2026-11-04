#include "src/include/classes/TObjWarpBase.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
} ObjectData;
extern "C" void destroy_context_8c051f28(void *, short);
extern "C" void call_8c122774(void *, TObjWarpBase *);
extern "C" TObjWarpBase *operation_8c0894c4(TObjWarpBase *o, int a1)
{
    if (o != 0) {
        *(void **)((char *)o + 0x18) = (void *)(void *)0x8c265064;
        if (o != 0) {
            *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2650bc;
            o->v15();
            if (o != 0) {
                *(void **)((char *)o + 0x18) = (void *)(void *)0x8c2651bc;
                o->v15();
                destroy_context_8c051f28((void *)o, (short)0);
            }
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
