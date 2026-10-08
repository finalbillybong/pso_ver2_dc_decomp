/* Provisional names; preserve observed bounds, field widths and call order. */
#include "src/include/state_owner.h"
List *operation_2395d0(List *list){
    int i;
    for (i = 0; i < 4; i++) *(int *)((char *)list+(i<<2))=0;
    list->field10=0;
    list->field14=0;
    return list;
}
#define allocate_at ((void *(*)(void *,int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,void *))0x8c23963c)
void *operation_2395f0(void *argument){
    void *result;
    if(argument){
        result=allocate_at(*(void **)0x8c4d97e0,0x250);
        if(result)initialize_at(result,*(void **)0x8c4689e0,argument);
        return result;
    }
    return 0;
}
