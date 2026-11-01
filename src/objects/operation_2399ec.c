/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define TItemShootModel_ctor_8c1abe00 ((void (*)(ResourceChild *,void *,Vector3 *,Vector3 *,float))0x8c1abe00)
ResourceChild *TItemShootWindCane_ctor_8c2399ec(ResourceChild *o,void *parent,Vector3 *argument,Vector3 *direction,float value){
    TItemShootModel_ctor_8c1abe00(o,parent,argument,direction,value);
    o->dispatch=(void *)0x8c27921c;
    o->tag=*(unsigned int *)0x8c33a334;
    o->size=100;
    o->angle_z=0;
    return o;
}
