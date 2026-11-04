#include "src/include/classes/TPhotonEstlla.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct ObjectData {
    char unknown0[0x18];
    void *dispatch;
} ObjectData;
extern S_g8c4d97e0 *g_8c4d97e0;
extern "C" void release_optional_member(void *);
extern "C" void destroy_context_8c13e8ac(void *, short);
extern "C" void call_8c122774(void *, TPhotonEstlla *);
extern "C" TPhotonEstlla *TPhotonEstlla_dtor_8c164ae8(TPhotonEstlla *o, int a1)
{
    if (o != 0) {
        *(void **)((char *)o + 0x18) = (void *)(void *)0x8c26f8b0;
        o->v16();
        release_optional_member((void *)o);
        destroy_context_8c13e8ac((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
