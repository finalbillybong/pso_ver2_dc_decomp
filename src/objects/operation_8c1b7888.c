#include "src/include/classes/TBoss4Type3.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TBoss4Type3_p518 TBoss4Type3_p518;
typedef struct TBoss4Type3_p51c TBoss4Type3_p51c;
typedef struct TBoss4Type3_p520 TBoss4Type3_p520;
typedef struct TBoss4Type3_p524 TBoss4Type3_p524;
typedef struct S_vv3 S_vv3;
typedef struct S_vv6 S_vv6;
typedef struct S_x11968_0 S_x11968_0;
struct S_vv3 {
    char unknown0[0x4];
    short f04;
};
struct S_vv6 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_8c1b82cc(int);
extern void destroy_vector_grid(void *, int);
extern void operation_8c161c38(int);
extern void operation_8c052124(void *);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void call_8c122774(void *, TBoss4Type3 *);
TBoss4Type3 *TBoss4Type3_dtor_8c1b7888(TBoss4Type3 *o, int a1)
{
    S_vv3 *v3;
    S_vv6 *v6;
    int v10;
    int v9;
    int v8;
    if (o != 0) {
        o->dispatch = (void *)0x8c274f10;
        operation_8c1b82cc((int)o);
        if (o->f518 != 0) {
            destroy_vector_grid((void *)(o->f518), 1);
            o->f518 = (TBoss4Type3_p518 *)0;
        }
        if (o->f520 != 0) {
            v3 = (S_vv3 *)o->f520;
            v3->f04 |= 1;
            o->f520 = (TBoss4Type3_p520 *)0;
        }
        if (o->f51c != 0) {
            destroy_vector_grid((void *)(o->f51c), 1);
            o->f51c = (TBoss4Type3_p51c *)0;
        }
        if (o->f524 != 0) {
            v6 = (S_vv6 *)o->f524;
            v6->f04 |= 1;
            o->f524 = (TBoss4Type3_p524 *)0;
        }
        v9 = (int)0;
        v8 = (int)0x434;
        while (3 > v9) {
            v10 = (int)(v9 << 2);
            operation_8c161c38((int)(*(S_x11968_0 **)((char *)((char *)((int)o + v8) + 0x0) + (v10))));
            *(int *)((char *)((char *)((int)o + v8) + 0x0) + (v10)) = 0;
            v9 = (int)(v9 + 1);
        }
        operation_8c052124((void *)o);
        o->f39c = 0;
        TObjEnemy_dtor_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
