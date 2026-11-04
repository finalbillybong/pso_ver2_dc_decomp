#include "src/include/classes/TBoss2Mine.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void TObjEneDD_dtor_8c059c30(void *, short);
extern void call_8c122774(void *, TBoss2Mine *);
TBoss2Mine *operation_8c1660f0(TBoss2Mine *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26fb14;
        if (o != 0) {
            o->dispatch = (void *)0x8c26fcec;
            operation_8c052124((void *)o);
            TObjEneDD_dtor_8c059c30((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
