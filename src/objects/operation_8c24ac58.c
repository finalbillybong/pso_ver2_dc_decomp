#include "src/include/classes/TObjBigTuitate.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjBigTuitate_p100 TObjBigTuitate_p100;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c053f54(TObjBigTuitate *);
extern void operation_8c052124(void *);
extern void destroy_field_8c178048(void *, short);
extern void destroy_context_8c051f28(void *, short);
extern void call_8c122774(void *, TObjBigTuitate *);
TObjBigTuitate *TObjBigTuitate_dtor_8c24ac58(TObjBigTuitate *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c27d710;
        if (o->f100 != 0) {
            v1 = (S_vv1 *)o->f100;
            v1->f04 |= 1;
            o->f100 = (TObjBigTuitate_p100 *)0;
        }
        call_8c053f54(o);
        operation_8c052124((void *)o);
        destroy_field_8c178048((void *)(((char *)o + 0xe4)), (short)-1);
        destroy_context_8c051f28((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
