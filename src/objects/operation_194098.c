/* Provisional address-based name; preserve resource state, call ordering and signed dispatch conditions. */
#include "src/include/resource_widget.h"
#define child_destroy_at ((void (*)(void *,short))0x8c192b28)
#define base_destroy_at ((void (*)(ResourceWidget *,short))0x8c0db244)
#define free_at ((void (*)(void *,ResourceWidget *))0x8c122774)
ResourceWidget *operation_194098(ResourceWidget *o,short release){
    if(o){
        o->dispatch=(void *)0x8c272848;
        child_destroy_at(o->child,1);
        base_destroy_at(o,0);
        if(release>0)free_at(*(void **)0x8c4d97e0,o);
    }
    return o;
}
