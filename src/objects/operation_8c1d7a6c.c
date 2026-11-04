#include "src/include/classes/TWindowSubAreaMapDisp.h"
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubAreaMapDisp_p78 TWindowSubAreaMapDisp_p78;
typedef struct TWindowSubAreaMapDisp_p7c TWindowSubAreaMapDisp_p7c;
struct S_g8c46fe20 {
    char unknown0[0x20];
    short f20;
};
extern S_g8c46fe20 *g_8c46fe20;
extern int g_8c4d5954;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operator_delete_8c18de08(void *);
extern void operation_8c199b40(int, int);
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, TWindowSubAreaMapDisp *);
TWindowSubAreaMapDisp *TWindowSubAreaMapDisp_dtor_8c1d7a6c(TWindowSubAreaMapDisp *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c276ed4;
        if (o->f7c != 0) {
            operator_delete_8c18de08((void *)(o->f7c));
            o->f7c = (TWindowSubAreaMapDisp_p7c *)0;
        }
        if (o->f74 != 0) {
            if (g_8c46fe20 != 0) {
                g_8c46fe20->f20 &= -9;
            }
            g_8c4d5954 = 0;
        }
        operation_8c199b40((int)(o->f78), 1);
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
