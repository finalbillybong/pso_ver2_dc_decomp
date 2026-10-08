/* Provisional address-based name; preserve retry states, allocation arithmetic and cleanup order. */
#include "src/include/resource_lifecycle.h"
#define reset_at ((void (*)(ResourceLifecycle *))0x8c19344c)
#define free_buffer_at ((void (*)(void *))0x8c18de08)
#define free_at ((void (*)(ResourceLifecycle *))0x8c011ed8)
ResourceLifecycle *operation_193408(ResourceLifecycle *o,short release){
    if(o){
        o->dispatch=(void *)0x8c272820;
        reset_at(o);
        free_buffer_at(o->buffer);
        if(release>0)free_at(o);
    }
    return o;
}
