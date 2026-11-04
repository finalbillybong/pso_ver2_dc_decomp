#include "src/include/classes/TObjEneMoja.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjEneMoja_p3b4 TObjEneMoja_p3b4;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void operation_8c052124(void *);
extern void destroy_field_8c178048(void *, short);
extern void TObjEnemy_dtor_8c0120f4(void *, int);
extern void call_8c122774(void *, TObjEneMoja *);
TObjEneMoja *TObjEneMoja_dtor_8c03843c(TObjEneMoja *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c261768;
        if (o->f3b4 != 0) {
            v1 = (S_vv1 *)o->f3b4;
            v1->f04 |= 1;
            o->f3b4 = (TObjEneMoja_p3b4 *)0;
        }
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0x3b8)), (short)-1);
        TObjEnemy_dtor_8c0120f4((void *)o, 0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
