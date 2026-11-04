#include "src/include/classes/TChallenge.h"
typedef struct Block1300 {
    int words[325];
} Block1300;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern Block1300 g_8c33978c;
extern Block1300 g_8c339ca0;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c510ba0;
extern void operation_8c246608(void);
extern void call_8c237c80(TChallenge *);
extern void TObject_dtor_8c03311c(void *, short);
extern void call_8c122774(void *, TChallenge *);
TChallenge *TChallenge_dtor_8c237998(TChallenge *o, int a1)
{
    if (o != 0) {
        o->vtable = (void *)0x8c279200;
        operation_8c246608();
        call_8c237c80(o);
        *(Block1300 *)&g_8c339ca0 = *(Block1300 *)&g_8c33978c;
        g_8c510ba0 = 0;
        TObject_dtor_8c03311c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
