/* Provisional reconstruction; preserve observed arithmetic and call order. */
#include "src/include/effect_child_prefix.h"
#define destroy_at ((void (*)(EffectChildPrefix *,int))0x8c051f28)
#define release_at ((void (*)(void *,void *))0x8c122774)
EffectChildPrefix *operation_0c67c0(EffectChildPrefix *object,short release){
    if(object){
        object->dispatch=(void *)0x8c26681c;
        if(object->child)object->child->flags|=1;
        destroy_at(object,0);
        if(release>0)release_at(*(void **)0x8c4d97e0,object);
    }
    return object;
}
