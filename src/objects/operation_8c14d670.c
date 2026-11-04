#include "src/include/classes/TOTrapAncient02R.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TOTrapAncient02R *);
extern void operation_8c052124(void *);
extern void TOTrap_dtor_8c140b8c(void *, short);
extern void call_8c122774(void *, TOTrapAncient02R *);
TOTrapAncient02R *TOTrapAncient02R_dtor_8c14d670(TOTrapAncient02R *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26e15c;
        if (o != 0) {
            o->dispatch = (void *)0x8c26e2dc;
            call_8c053f54(o);
            operation_8c052124((void *)o);
            TOTrap_dtor_8c140b8c((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
