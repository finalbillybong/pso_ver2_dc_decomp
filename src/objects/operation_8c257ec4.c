#include "src/include/classes/TItemMenuCtrl.h"
extern int g_8c340060;
extern TItemMenuCtrl *g_8c513360;
extern void TObject_ctor_8c0330e4(void *, void *);
TItemMenuCtrl *TItemMenuCtrl_ctor_8c257ec4(TItemMenuCtrl *o, int a1)
{
    TObject_ctor_8c0330e4((void *)o, (void *)a1);
    o->dispatch = (void *)0x8c281a04;
    o->f20 = 0;
    g_8c513360 = o;
    o->tag = (int)(g_8c340060);
    o->size = 0x24;
    return o;
}
