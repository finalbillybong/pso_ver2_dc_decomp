/* Provisional address-based name; preserve observed guards, offsets and call order. */
#include "src/include/base_child.h"
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
#define TItemShootModel_ctor_8c1abe00 ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c1abe00)
void *operation_1abd98(void *parent,Vector3 *position,Vector3 *direction,float value){
    void *result=0;
    if(value!=0.0f && parent && *(void **)0x8c44be9c){
        result=heap_alloc_8c122700(*(void **)0x8c4d97e0,100);
        if(result)TItemShootModel_ctor_8c1abe00(result,parent,position,direction,value);
    }
    return result;
}
