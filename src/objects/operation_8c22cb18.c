#include "src/include/classes/TWindowLoadItemTexture.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowLoadItemTexture_p6c TWindowLoadItemTexture_p6c;
struct TWindowLoadItemTexture_p6c {
    char unknown0[0x4];
    short f04;
};
extern S_g8c4d97e0 *g_8c4d97e0;
extern void destroy_context_8c0db244(void *, short);
extern void call_8c122774(void *, TWindowLoadItemTexture *);
TWindowLoadItemTexture *TWindowLoadItemTexture_dtor_8c22cb18(TWindowLoadItemTexture *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278e84;
        o->f6c->f04 |= 1;
        destroy_context_8c0db244((void *)o, (short)0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
