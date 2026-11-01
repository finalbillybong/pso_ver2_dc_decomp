/* Provisional address-based name; preserve guards, slot reloads and call order. */
#include "src/include/derived_effect_child.h"
#define heap_alloc_8c122700 ((void *(*)(void *,int))0x8c122700)
#define TItemShootParticle_ctor_8c1abf98 ((void (*)(void *,void *,Vector3 *,Vector3 *,float))0x8c1abf98)
void *operation_1abf30(void *parent,Vector3 *position,Vector3 *direction,float value){
    if(value!=0.0f && parent && *(void **)0x8c44be9c){
        void *result=heap_alloc_8c122700(*(void **)0x8c4d97e0,104);
        if(result)TItemShootParticle_ctor_8c1abf98(result,parent,position,direction,value);
        return result;
    }
    return 0;
}
