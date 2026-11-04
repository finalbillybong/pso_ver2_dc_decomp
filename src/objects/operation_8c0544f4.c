#include "src/include/classes/TObjCGrass.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjCGrass_p134 TObjCGrass_p134;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operator_delete_8c18de08(void *);
extern void destroy_object_8c01c500(void *, short);
extern void call_8c122774(void *, TObjCGrass *);
TObjCGrass *TObjCGrass_dtor_8c0544f4(TObjCGrass *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c26220c;
        operator_delete_8c18de08((void *)(o->f134));
        destroy_object_8c01c500((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
