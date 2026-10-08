/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
#define base_at ((void (*)(ResourceOwner *,void *,void *))0x8c075398)
ResourceOwner *operation_23963c(ResourceOwner *o,void *a,void *b){
    base_at(o,a,b);
    o->dispatch=(void *)0x8c27923c;
    o->tag=*(unsigned int *)0x8c33a330;
    o->size=0x250;
    o->field1e0=2;
    o->field1e1=1;
    o->flags|=0x23;
    o->field224=4;
    o->callback=(void *)0x8c239998;
    o->angle=0;
    o->speed=0xccc;
    o->counter=0;
    o->state=1;
    return o;
}
