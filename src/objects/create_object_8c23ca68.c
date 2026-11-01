/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
#define TItemShootFast_ctor_8c23cabc ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c23cabc)
void *TItemShootFast_create_8c23ca68(void *parent,Vector3 *argument,Vector3 *direction,float value){
    void *result=0;
    if(parent){
        result=heap_alloc_8c122700(*(void **)0x8c4d97e0,104);
        if(result)TItemShootFast_ctor_8c23cabc(result,parent,argument,direction,value);
    }
    return result;
}
