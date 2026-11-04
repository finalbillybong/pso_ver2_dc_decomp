#include "src/include/classes/TObjLoadGmPlNjReq.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct Arg0_6c Arg0_6c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4d9e58;
extern void call_8c03dc40(void *, int);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TObjLoadGmPlNjReq *);
TObjLoadGmPlNjReq *TObjLoadGmPlNjReq_dtor_8c13f594(TObjLoadGmPlNjReq *o, int a1)
{
    int v1;
    if (o != 0) {
        o->vtable = (void *)0x8c26dc24;
        v1 = (int)g_8c4d9e58;
        if (v1 >= 0 && !(v1 > 1) && o->f70 != 0) {
            g_8c4d9e58 = v1 + -1;
            o->f70 = 0;
        }
        if (o->f6c != 0) {
            call_8c03dc40((void *)(o->f6c), 1);
        }
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
