/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define allocate_at ((void *(*)(void *,int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c23cabc)
void *create_object_8c23ca68(void *parent,Vector3 *argument,Vector3 *direction,float value){
    void *result=0;
    if(parent){
        result=allocate_at(*(void **)0x8c4d97e0,104);
        if(result)initialize_at(result,parent,argument,direction,value);
    }
    return result;
}
