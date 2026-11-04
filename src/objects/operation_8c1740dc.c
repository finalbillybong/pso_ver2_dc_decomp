#include "src/include/classes/TObjItemNameEntry.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjItemNameEntry_p20 TObjItemNameEntry_p20;
typedef struct TObjItemNameEntry_p24 TObjItemNameEntry_p24;
typedef struct S_vv6 S_vv6;
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjItemNameEntry *);
TObjItemNameEntry *TObjItemNameEntry_dtor_8c1740dc(TObjItemNameEntry *o, int a1)
{
    S_vv6 *v6;
    if (o != 0) {
        o->vtable = (void *)0x8c270220;
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TObjItemNameEntry_p24 *)0;
        }
        if (o->f20 != 0) {
            v6 = (S_vv6 *)o->f20;
            v6->f04 |= 1;
            o->f20 = (TObjItemNameEntry_p20 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
