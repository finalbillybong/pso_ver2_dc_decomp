#include "src/include/classes/TObjEneSlimeOne.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjEneSlimeOne_p3a4 TObjEneSlimeOne_p3a4;
typedef struct TObjEneSlimeOne_p404 TObjEneSlimeOne_p404;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c052124(void *);
extern void mark_effect_for_release(void *);
extern void destroy_motion_profile_8c0ffdcc(void *, short);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void call_8c122774(void *, TObjEneSlimeOne *);
TObjEneSlimeOne *TObjEneSlimeOne_dtor_8c0f8760(TObjEneSlimeOne *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c268d28;
        operation_8c052124((void *)o);
        o->f3a8 = 0;
        if (o->f404 != 0) {
            mark_effect_for_release((void *)(o->f404));
            o->f404 = (TObjEneSlimeOne_p404 *)0;
        }
        destroy_motion_profile_8c0ffdcc((void *)(o->f3a4), (short)1);
        o->f3a4 = (TObjEneSlimeOne_p3a4 *)0;
        TObjEnemy_dtor_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
