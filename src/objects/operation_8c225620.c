#include "src/include/classes/TWindowMessageLog.h"
typedef struct S_g8c46fe20 S_g8c46fe20;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowMessageLog_pa0 TWindowMessageLog_pa0;
struct S_g8c46fe20 {
    char unknown0[0x6c];
    int f6c;
};
extern S_g8c46fe20 *g_8c46fe20;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_motion_profile_8c199ba0(void *, short);
extern void TWindowMessage_dtor_8c11953c(void *, short);
extern void call_8c122774(void *, TWindowMessageLog *);
TWindowMessageLog *TWindowMessageLog_dtor_8c225620(TWindowMessageLog *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278b0c;
        destroy_motion_profile_8c199ba0((void *)(o->fa0), (short)1);
        if (g_8c46fe20 != 0) {
            g_8c46fe20->f6c = 0;
        }
        TWindowMessage_dtor_8c11953c((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
