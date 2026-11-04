#include "src/include/classes/TObjItemOKWindow.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjItemOKWindow_p60 TObjItemOKWindow_p60;
typedef struct TObjItemOKWindow_p64 TObjItemOKWindow_p64;
typedef struct TObjItemOKWindow_p68 TObjItemOKWindow_p68;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjItemOKWindow *);
TObjItemOKWindow *TObjItemOKWindow_dtor_8c174700(TObjItemOKWindow *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c2701e8;
        if (o->f68 != 0) {
            request_resource_release((void *)(o->f68));
            o->f68 = (TObjItemOKWindow_p68 *)0;
        }
        if (o->f60 != 0) {
            request_resource_release((void *)(o->f60));
            o->f60 = (TObjItemOKWindow_p60 *)0;
        }
        if (o->f64 != 0) {
            request_resource_release((void *)(o->f64));
            o->f64 = (TObjItemOKWindow_p64 *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
