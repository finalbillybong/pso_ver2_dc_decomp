#include "src/include/classes/TWindowSubShortCutList.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubShortCutList_p98 TWindowSubShortCutList_p98;
extern void operation_192b28(void *, short);
extern void destroy_context_8c1ccd60(void *, short);
extern void call_8c122774(void *, TWindowSubShortCutList *);
TWindowSubShortCutList *TWindowSubShortCutList_dtor_8c21c8ac(TWindowSubShortCutList *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2785d0;
        operation_192b28((void *)(o->f98), (short)1);
        destroy_context_8c1ccd60((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
