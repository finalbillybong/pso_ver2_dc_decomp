#include "src/include/classes/TOHealGeneral.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_x43376_0 S_x43376_0;
extern void mark_effect_for_release(void *);
extern void call_8c053f54(TOHealGeneral *);
extern void operation_8c052124(void *);
extern void destroy_object_8c0ee900(void *, short);
extern void call_8c122774(void *, TOHealGeneral *);
TOHealGeneral *TOHealGeneral_dtor_8c19fdf0(TOHealGeneral *o, int a1)
{
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c272cb4;
        v2 = (int)0;
        v1 = (int)0x124;
        while (2 > v2) {
            if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2)) != 0) {
                mark_effect_for_release((void *)(*(S_x43376_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v2 << 2))));
            }
            v2 = (int)(v2 + 1);
        }
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_object_8c0ee900((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
