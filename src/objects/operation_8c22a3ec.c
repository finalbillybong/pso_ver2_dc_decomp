#include "src/include/classes/TObjDFDemo5.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjDFDemo5_p10c TObjDFDemo5_p10c;
typedef struct Arg0_94 Arg0_94;
typedef struct TObjDFDemo5_pf0 TObjDFDemo5_pf0;
extern void operation_8c161c38(int);
extern void mark_effect_for_release(void *);
extern int get_game_mode_8c01c25c(void);
extern void call_8c0a21a4(void);
extern void destroy_shared_object(void *, short);
extern void call_8c122774(void *, TObjDFDemo5 *);
TObjDFDemo5 *TObjDFDemo5_dtor_8c22a3ec(TObjDFDemo5 *o, int a1)
{
    int v41;
    int v42;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c278d18;
        if (o->ff0 != 0) {
            operation_8c161c38((int)(o->ff0));
            o->ff0 = (TObjDFDemo5_pf0 *)0;
        }
        if (o->f10c != 0) {
            operation_8c161c38((int)(o->f10c));
            o->f10c = (TObjDFDemo5_p10c *)0;
        }
        v41 = (int)0;
        while (5 > v41) {
            v42 = (int)(v41 << 2);
            if (*(int *)((char *)((char *)o + 0x94) + (v42)) != 0) {
                mark_effect_for_release((void *)(*(Arg0_94 **)((char *)((char *)o + 0x94) + (v42))));
                *(int *)((char *)((char *)o + 0x94) + (v42)) = 0;
            }
            v41 = (int)(v41 + 1);
        }
        t1 = get_game_mode_8c01c25c();
        if (t1 != 0x10) {
            call_8c0a21a4();
        }
        destroy_shared_object((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
