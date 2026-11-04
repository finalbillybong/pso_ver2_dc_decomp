#include "src/include/classes/TWindowCtrlMain.h"
typedef struct S_g8c44bea4 S_g8c44bea4;
typedef struct S_g8c4d97e0 S_g8c4d97e0;
extern int g_8c328420;
extern S_g8c44bea4 *g_8c44bea4;
extern S_g8c4d97e0 *g_8c4d97e0;
extern int g_8c4e2bbc;
extern void TObject_ctor_8c0330e4(void *, void *);
extern int heap_alloc_8c122700(void *, unsigned int);
extern void TWindowCtrlMainKiller_ctor_8c1bee70(int, void *);
TWindowCtrlMain *TWindowCtrlMain_ctor_8c1bec9c(TWindowCtrlMain *o, int a1)
{
    TWindowCtrlMain **home = &o;
    int t1;
    (void)home;
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c27563c;
    o->tag = g_8c328420;
    o->size = 0x20;
    t1 = heap_alloc_8c122700(g_8c4d97e0, (unsigned int)0x20);
    if (t1 != 0) {
        TWindowCtrlMainKiller_ctor_8c1bee70(t1, g_8c44bea4);
    }
    g_8c4e2bbc = t1;
    return o;
}
