#include "src/include/classes/TObjHashiBase.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, TObjHashiBase *);
TObjHashiBase *operation_8c11a3b0(TObjHashiBase *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c269f84;
        call_8c053f54();
        operation_8c052124((void *)o);
        if (o != 0) {
            o->vtable = (void *)0x8c26a014;
            destroy_object_8c0ee900((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
