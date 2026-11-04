#include "src/include/classes/TWindowGetComCard.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowGetComCard_p20 TWindowGetComCard_p20;
typedef struct TWindowGetComCard_p24 TWindowGetComCard_p24;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void request_resource_release(void *);
extern int lookup_low_id(int);
extern void operation_8c0264ac(void);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowGetComCard *);
TWindowGetComCard *TWindowGetComCard_dtor_8c2094ac(TWindowGetComCard *o, int a1)
{
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c278138;
        if (o->f24 != 0) {
            request_resource_release((void *)(o->f24));
            o->f24 = (TWindowGetComCard_p24 *)0;
        }
        if (o->f20 != 0) {
            request_resource_release((void *)(o->f20));
            o->f20 = (TWindowGetComCard_p20 *)0;
        }
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 &= -5;
        }
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 &= -3;
        }
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0) {
            operation_8c0264ac();
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
