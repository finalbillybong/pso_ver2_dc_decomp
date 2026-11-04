#include "src/include/classes/TWindowSubComCardList.h"
typedef struct S_g8c4d97e0 S_g8c4d97e0;
typedef struct TWindowSubComCardList_p9c TWindowSubComCardList_p9c;
extern S_g8c4d97e0 *g_8c4d97e0;
extern void operation_192b28(void *, short);
extern void TWindowMenu_dtor_8c1567bc(TWindowSubComCardList *, int);
extern void call_8c122774(void *, TWindowSubComCardList *);
TWindowSubComCardList *TWindowSubComCardList_dtor_8c206fd0(TWindowSubComCardList *o, int a1)
{
    if (o != 0) {
        o->dispatch = (void *)0x8c278090;
        operation_192b28((void *)(o->f9c), (short)1);
        TWindowMenu_dtor_8c1567bc(o, 0);
        if ((short)a1 > 0) {
            call_8c122774(g_8c4d97e0, o);
        }
    }
    return o;
}
