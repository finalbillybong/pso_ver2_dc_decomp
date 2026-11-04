#include "src/include/classes/TObjDFEnding.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjDFEnding_p150 TObjDFEnding_p150;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern void operation_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, TObjDFEnding *);
TObjDFEnding *TObjDFEnding_dtor_8c230b8c(TObjDFEnding *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278f58;
        if (o->f150 != 0) {
            request_resource_release((void *)(o->f150));
            o->f150 = (TObjDFEnding_p150 *)0;
        }
        operation_8c0a21a4();
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
