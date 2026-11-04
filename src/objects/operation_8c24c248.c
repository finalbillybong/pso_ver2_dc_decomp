#include "src/include/classes/TOVS2Wreck03.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TOVS2_p100 TOVS2_p100;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TOVS2Wreck03 *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, TOVS2Wreck03 *);
TOVS2Wreck03 *TOVS2Wreck03_dtor_8c24c248(TOVS2Wreck03 *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27dab0;
        if (o != 0) {
            o->dispatch = (void *)0x8c27db88;
            if (o->f100 != 0) {
                v1 = (S_vv1 *)o->f100;
                v1->f04 |= 1;
                o->f100 = (TOVS2_p100 *)0;
            }
            call_8c053f54(o);
            operation_8c052124((void *)o);
            destroy_object_8c0ee900((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
