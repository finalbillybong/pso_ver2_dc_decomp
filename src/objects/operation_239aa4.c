/* Provisional address-based name; preserve observed calls, guards and offsets. */
#include "src/include/resource_child.h"
#define base_at ((void (*)(ResourceChild *,int))0x8c1abb78)
#define free_at ((void (*)(void *,ResourceChild *))0x8c122774)
static inline void destroy_base(ResourceChild *o){
    if(o){
        o->dispatch=(void *)0x8c2748b4;
        base_at(o,0);
    }
}
ResourceChild *operation_239aa4(ResourceChild *o,short release){
    if(o){
        o->dispatch=(void *)0x8c27921c;
        destroy_base(o);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
