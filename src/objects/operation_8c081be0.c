#include "src/include/classes/TObjDoorKey.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TObjDoorKey_p12c TObjDoorKey_p12c;
typedef struct S_vv1 S_vv1;
struct S_vv1 {
    char unknown0[0x4];
    short f04;
};
extern void call_8c053f54(void);
extern void operation_8c052124(void *);
extern void TOKey_dtor_8c112efc(void *, short);
extern void call_8c122774(void *, TObjDoorKey *);
TObjDoorKey *TObjDoorKey_dtor_8c081be0(TObjDoorKey *o, int a1)
{
    S_vv1 *v1;
    if (o != 0) {
        o->dispatch = (void *)0x8c264504;
        call_8c053f54();
        operation_8c052124((void *)o);
        if (o->f12c != 0) {
            v1 = (S_vv1 *)o->f12c;
            v1->f04 |= 1;
            o->f12c = (TObjDoorKey_p12c *)0;
        }
        TOKey_dtor_8c112efc((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774((void *)(*(S_g8c4d97e0 **)0x8c4d97e0), o);
        }
    }
    return o;
}
