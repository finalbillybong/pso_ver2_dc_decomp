#include "src/include/classes/TBoss4Type2.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss4Type2_p44c TBoss4Type2_p44c;
typedef struct S_x97296_0 S_x97296_0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void mark_effect_for_release(void *);
extern void operation_8c161c38(int);
extern void operation_8c052124(void *);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void call_8c122774(void *, TBoss4Type2 *);
TBoss4Type2 *TBoss4Type2_dtor_8c1b0f60(TBoss4Type2 *o, int a1)
{
    int v3;
    int v2;
    int v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c274c38;
        v2 = (int)0;
        v1 = (int)0x42c;
        while (8 > v2) {
            v3 = (int)(v2 << 2);
            if (*(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) != 0) {
                mark_effect_for_release((void *)(*(S_x97296_0 **)((char *)((char *)((int)o + v1) + 0x0) + (v3))));
                *(int *)((char *)((char *)((int)o + v1) + 0x0) + (v3)) = 0;
            }
            v2 = (int)(v2 + 1);
        }
        operation_8c161c38((int)(o->f44c));
        o->f44c = (TBoss4Type2_p44c *)0;
        operation_8c052124((void *)o);
        o->f39c = 0;
        TObjEnemy_dtor_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
