#include "src/include/classes/TObjEneDD.h"
extern void TObjEnemy_ctor_8c012008(void);
TObjEneDD *TObjEneDD_ctor_8c059bc0(TObjEneDD *o)
{
    TObjEnemy_ctor_8c012008();
    o->dispatch = (void *)0x8c2627b8;
    o->tag = (int)(*(int *)0x8c2f35d0);
    o->size = 0x3a8;
    o->f390 = 0;
    o->f394 = 0;
    o->f398 = 5.0f;
    o->f39c = 0;
    o->f3a0 = 0;
    o->f3a4 = 0;
    return o;
}
