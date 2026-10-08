/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
#define base_destroy_at ((void (*)(ResourceOwner *,int))0x8c0755c0)
#define free_at ((void (*)(void *,ResourceOwner *))0x8c122774)
ResourceOwner *operation_2396d8(ResourceOwner *o,short release){
    if(o){
        o->dispatch=(void *)0x8c27923c;
        base_destroy_at(o,0);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
