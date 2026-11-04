#include "src/include/classes/TObjBoss2Tunnel.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_running_profile(void *, short);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjBoss2Tunnel *);
TObjBoss2Tunnel *TObjBoss2Tunnel_dtor_8c14ba44(TObjBoss2Tunnel *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c26e124;
        destroy_running_profile((void *)(((char *)o + 0x6c)), (short)-1);
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
