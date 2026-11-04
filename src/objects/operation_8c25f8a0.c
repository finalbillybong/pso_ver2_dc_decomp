#include "src/include/classes/TItemDisconnectCtrl.h"
typedef struct S_g8c44be9c S_g8c44be9c;
extern void TObject_ctor_8c0330e4(void *, void *);
TItemDisconnectCtrl *TItemDisconnectCtrl_ctor_8c25f8a0(TItemDisconnectCtrl *o)
{
    TObject_ctor_8c0330e4((void *)o, (void *)(*(S_g8c44be9c **)0x8c44be9c));
    o->dispatch = (void *)0x8c281dc4;
    o->tag = (int)(*(int *)0x8c3406c0);
    o->size = 0x20;
    o->f04 |= 0x10;
    return o;
}
