#include "src/include/classes/TObjItemNameSelect.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjItemNameSelect_p20 TObjItemNameSelect_p20;
typedef struct TObjItemNameSelect_p24 TObjItemNameSelect_p24;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjItemNameSelect *);
TObjItemNameSelect *TObjItemNameSelect_dtor_8c1743dc(TObjItemNameSelect *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c270204;
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TObjItemNameSelect_p24 *)0;
        }
        if (o->f20 != 0) {
            request_resource_release((void *)(o->f20));
            o->f20 = (TObjItemNameSelect_p20 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
