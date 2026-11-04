#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4dc4d8;
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c19e09c(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c272a90;
        if (o != 0) {
            o->vtable = (void *)0x8c272c0c;
            g_8c4dc4d8 -= 1;
            destroy_context_8c051f28((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
