/* Provisional address-based name; preserve guards, slot reloads and call order. */
#include "src/include/derived_effect_child.h"
#define base_at ((void (*)(DerivedEffectChild *,void *,Vector3 *,Vector3 *,float))0x8c1aba3c)
DerivedEffectChild *operation_1abf98(DerivedEffectChild *o,void *parent,Vector3 *position,Vector3 *direction,float value){
    int i;
    base_at(o,parent,position,direction,value);
    o->dispatch=(void *)0x8c274894;
    o->tag=*(unsigned int *)0x8c324f90;
    o->size=104;
    o->effect_flags=0;
    for (i = 0; i != 2; i++)(*(void **)((char *)o->effects+(i<<2)))=0;
    o->flags|=16;
    return o;
}
