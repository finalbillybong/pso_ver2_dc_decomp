/* Provisional address-based name; preserve retry states, allocation arithmetic and cleanup order. */
#include "src/include/resource_lifecycle.h"
#define base_at ((void (*)(ResourceLifecycle *,int,int,unsigned int))0x8c19336c)
#define allocate_at ((void *(*)(unsigned int))0x8c18de4c)
ResourceLifecycle *operation_193470(ResourceLifecycle *o,int argument,int source,unsigned int count,register int size){
    base_at(o,argument,source,count);
    o->dispatch=(void *)0x8c272814;
    o->extra=allocate_at(((size+2047)/2048)<<11);
    o->extra_size=size;
    {
        /* Address exposure retains observed stack parameter loads. */
        ResourceLifecycle **self=&o;
        (void)self;
        return o;
    }
}
