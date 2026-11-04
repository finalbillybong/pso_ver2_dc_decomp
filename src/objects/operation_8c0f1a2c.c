#include "src/include/classes/TOMonumentAncient02.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TOMonumentAncient02_p120 TOMonumentAncient02_p120;
extern void mark_effect_for_release(void *);
extern void call_8c053f54(TOMonumentAncient02 *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, TOMonumentAncient02 *);
TOMonumentAncient02 *TOMonumentAncient02_dtor_8c0f1a2c(TOMonumentAncient02 *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c2685a8;
        mark_effect_for_release((void *)(o->f120));
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_object_8c0ee900((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
