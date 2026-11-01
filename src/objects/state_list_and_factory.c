/* Provisional names; preserve observed bounds, field widths and call order. */
#include "src/include/state_owner.h"
List *operation_2395d0(List *list){
    int i;
    for (i = 0; i < 4; i++) *(int *)((char *)list+(i<<2))=0;
    list->field10=0;
    list->field14=0;
    return list;
}
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
#define TItemWpnWindCane_ctor_8c23963c ((void (*)(void *,void *,void *))0x8c23963c)
void *TItemWpnWindCane_create_8c2395f0(void *argument){
    void *result;
    if(argument){
        result=heap_alloc_8c122700(*(void **)0x8c4d97e0,0x250);
        if(result)TItemWpnWindCane_ctor_8c23963c(result,*(void **)0x8c4689e0,argument);
        return result;
    }
    return 0;
}
