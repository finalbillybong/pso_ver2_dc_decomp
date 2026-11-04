#include "src/include/classes/TObject.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void word_operation_8c139fb8(unsigned int);
extern void TObjEnemyCustom_dtor_8c0c23c8(void *, short);
extern void call_8c122774(void *, TObject *);
TObject *operation_8c13a874(TObject *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c26d24c;
        operation_8c052124((void *)o);
        word_operation_8c139fb8((unsigned int)0);
        TObjEnemyCustom_dtor_8c0c23c8((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
