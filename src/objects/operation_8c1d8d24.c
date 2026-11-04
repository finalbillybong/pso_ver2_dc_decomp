#include "src/include/classes/TObjCity_Season_21_21.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjCity_Season_21_21_pf0 TObjCity_Season_21_21_pf0;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TObjCity_Season_21_21 *);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObjCity_Season_21_21 *);
TObjCity_Season_21_21 *TObjCity_Season_21_21_dtor_8c1d8d24(TObjCity_Season_21_21 *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c276fd4;
        if (o->ff0 != 0) {
            v1 = (S_vv1 *)o->ff0;
            v1->f04 |= 1;
            o->ff0 = (TObjCity_Season_21_21_pf0 *)0;
        }
        if (o != 0) {
            o->dispatch = (void *)0x8c277164;
            if (o->fdc != 0) {
                call_8c053f54(o);
                operation_8c052124((void *)o);
            }
            destroy_context_8c051f28((void *)o, (short)0);
        }
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
