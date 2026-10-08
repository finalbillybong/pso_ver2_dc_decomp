/* Provisional address-based name; preserve owner state transitions, repeated loads and signed cleanup conditions. */
#include "src/include/resource_task_owner.h"
#define base_destroy_at ((void (*)(ResourceTaskOwner *,short))0x8c03311c)
#define free_at ((void (*)(void *,ResourceTaskOwner *))0x8c122774)
ResourceTaskOwner *operation_193fe8(ResourceTaskOwner *o,short release){
    if(o){
        o->dispatch=(void *)0x8c27282c;
        base_destroy_at(o,0);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
