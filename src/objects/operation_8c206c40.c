#include "src/include/classes/TBoss3VoloptCtrl.h"
typedef struct S_g8c44be8c S_g8c44be8c;
extern void TObject_ctor_8c0330e4(void *, void *);
TBoss3VoloptCtrl *TBoss3VoloptCtrl_ctor_8c206c40(TBoss3VoloptCtrl *o)
{
    TObject_ctor_8c0330e4((void *)o, (void *)(*(S_g8c44be8c **)0x8c44be8c));
    o->vtable = (void *)0x8c278074;
    o->tag = (int)(*(int *)0x8c335d00);
    o->size = 0x24;
    o->f20 = 4;
    return o;
}
