#include "src/include/classes/TWindowSubItem.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubItem_p24 TWindowSubItem_p24;
typedef struct TWindowSubItem_p28 TWindowSubItem_p28;
typedef struct TWindowSubItem_p2c TWindowSubItem_p2c;
typedef struct TWindowSubItem_p30 TWindowSubItem_p30;
typedef struct TWindowSubItem_p34 TWindowSubItem_p34;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowSubItem *);
TWindowSubItem *TWindowSubItem_dtor_8c1a2e3c(TWindowSubItem *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c273770;
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowSubItem_p30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowSubItem_p2c *)0;
        }
        if (o->f28 != 0) {
            request_resource_release((void *)(o->f28));
            o->f28 = (TWindowSubItem_p28 *)0;
        }
        if (o->f34 != 0) {
            request_resource_release((void *)(o->f34));
            o->f34 = (TWindowSubItem_p34 *)0;
        }
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TWindowSubItem_p24 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
