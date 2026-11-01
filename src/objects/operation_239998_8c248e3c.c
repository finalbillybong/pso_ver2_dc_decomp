/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
#define TItemShootBasyoSen2_ctor_8c248e90 ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c248e90)
void *TItemShootBasyoSen2_create_8c248e3c(void *parent,Vector3 *argument,Vector3 *direction,float value){
    void *result=0;
    if(parent){
        result=heap_alloc_8c122700(*(void **)0x8c4d97e0,100);
        if(result)TItemShootBasyoSen2_ctor_8c248e90(result,parent,argument,direction,value);
    }
    return result;
}
