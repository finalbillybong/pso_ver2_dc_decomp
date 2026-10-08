/* Provisional address-based name; preserve observed calls, guards and field accesses. */
#include "src/include/matrix_child.h"
#define prepare_at ((void (*)(Vector3 *,int))0x8c0a777c)
#define allocate_at ((void *(*)(void *,int))0x8c122700)
#define initialize_at ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c1ac17c)
void *operation_1ac120(void *parent,Vector3 *position,Vector3 *direction,float value){
    void *result;
    prepare_at(position,9);
    result=allocate_at(*(void **)0x8c4d97e0,108);
    if(result)initialize_at(result,parent,position,direction,value);
    return result;
}
