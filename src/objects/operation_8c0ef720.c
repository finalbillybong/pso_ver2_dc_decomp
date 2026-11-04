#include "src/include/classes/TODoorAncient03.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TODoorAncient03 *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0eebe4(void *, short);
extern void call_8c122774(void *, TODoorAncient03 *);
TODoorAncient03 *TODoorAncient03_dtor_8c0ef720(TODoorAncient03 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c268184;
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_object_8c0eebe4((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
