#include "src/include/classes/TObjDFDemo0.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_98 Arg0_98;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void operation_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, TObjDFDemo0 *);
TObjDFDemo0 *TObjDFDemo0_dtor_8c228fe4(TObjDFDemo0 *o, int a1)
{
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c278c58;
        v1 = (int)0;
        while (5 > v1) {
            v2 = (int)(v1 << 2);
            if (*(int *)((char *)((char *)o + 0x98) + (v2)) != 0) {
                mark_effect_for_release((void *)(*(Arg0_98 **)((char *)((char *)o + 0x98) + (v2))));
                *(int *)((char *)((char *)o + 0x98) + (v2)) = 0;
            }
            v1 = (int)(v1 + 1);
        }
        operation_8c0a21a4();
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
