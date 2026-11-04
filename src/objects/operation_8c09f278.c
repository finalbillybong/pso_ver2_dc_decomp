#include "src/include/classes/TSceneSora.h"
extern void TObjectShared_ctor_8c01d1ec(void);
TSceneSora *TSceneSora_ctor_8c09f278(TSceneSora *o)
{
    TObjectShared_ctor_8c01d1ec();
    o->dispatch = (void *)0x8c265920;
    o->tag = (int)(*(int *)0x8c302070);
    o->size = 0x94;
    return o;
}
