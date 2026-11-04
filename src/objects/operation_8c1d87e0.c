#include "src/include/classes/TObjCity_Season_XmasTree.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjCity_Season_XmasTree_pec TObjCity_Season_XmasTree_pec;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void call_8c053f54(TObjCity_Season_XmasTree *);
extern void operation_8c052124(void *);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObjCity_Season_XmasTree *);
TObjCity_Season_XmasTree *TObjCity_Season_XmasTree_dtor_8c1d87e0(TObjCity_Season_XmasTree *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c277098;
        if (o->fec != 0) {
            v1 = (S_vv1 *)o->fec;
            v1->f04 |= 1;
            o->fec = (TObjCity_Season_XmasTree_pec *)0;
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
