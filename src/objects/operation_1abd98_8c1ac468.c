/* Provisional address-based name; preserve observed guards, offsets and call order. */
#include "src/include/base_child.h"
#define allocate_at ((void *(*)(void *,int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c1ac4d0)
void *operation_1abd98_8c1ac468(void *parent,Vector3 *position,Vector3 *direction,float value){
    void *result=0;
    if(value!=0.0f && parent && *(void **)0x8c44be9c){
        result=allocate_at(*(void **)0x8c4d97e0,100);
        if(result)initialize_at(result,parent,position,direction,value);
    }
    return result;
}
