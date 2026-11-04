#include "src/include/classes/TWindowShortListCtrl.h"
typedef struct S_g8c418248 S_g8c418248;
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct S_g8c4dbde0 S_g8c4dbde0;
typedef struct TWindowShortListCtrl_p2c TWindowShortListCtrl_p2c;
typedef struct TWindowShortListCtrl_p30 TWindowShortListCtrl_p30;
struct S_g8c4dbde0 {
    char unknown0[0x20];
    int f20;
};
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c418248 *g_8c418248;
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern S_g8c4dbde0 *g_8c4dbde0;
extern int lookup_low_id(int);
extern void operation_8c0264ac(void);
extern void request_resource_release(void *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TWindowShortListCtrl *);
TWindowShortListCtrl *TWindowShortListCtrl_dtor_8c234e04(TWindowShortListCtrl *o, int a1)
{
    int v1;
    int t1;
    if (o != 0) {
        o->dispatch = (void *)0x8c279030;
        t1 = lookup_low_id((int)g_8c418248);
        if (t1 != 0) {
            if (g_8c4dbde0 == 0) {
                v1 = (int)0;
            } else {
                v1 = (int)(g_8c4dbde0->f20 & 1);
            }
            if (v1 == 0) {
                operation_8c0264ac();
            }
        }
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 &= -0x21;
        }
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f20 &= -0x101;
        }
        if (o->f30 != 0) {
            request_resource_release((void *)(o->f30));
            o->f30 = (TWindowShortListCtrl_p30 *)0;
        }
        if (o->f2c != 0) {
            request_resource_release((void *)(o->f2c));
            o->f2c = (TWindowShortListCtrl_p2c *)0;
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
