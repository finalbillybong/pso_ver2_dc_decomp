#include "src/include/classes/TObjDFDemo4.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_94 Arg0_94;
typedef struct TObjDFDemo4_pf0 TObjDFDemo4_pf0;
extern void operation_8c161c38(int);
extern void mark_effect_for_release(void *);
extern void call_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, TObjDFDemo4 *);
TObjDFDemo4 *TObjDFDemo4_dtor_8c229cdc(TObjDFDemo4 *o, int a1)
{
    int v8;
    int v7;
    if (o != 0) {
        o->dispatch = (void *)0x8c278cd8;
        if (o->ff0 != 0) {
            operation_8c161c38((int)(o->ff0));
            o->ff0 = (TObjDFDemo4_pf0 *)0;
        }
        v7 = (int)0;
        while (2 > v7) {
            v8 = (int)(v7 << 2);
            if (*(int *)((char *)((char *)o + 0x94) + (v8)) != 0) {
                mark_effect_for_release((void *)(*(Arg0_94 **)((char *)((char *)o + 0x94) + (v8))));
                *(int *)((char *)((char *)o + 0x94) + (v8)) = 0;
            }
            v7 = (int)(v7 + 1);
        }
        call_8c0a21a4();
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
