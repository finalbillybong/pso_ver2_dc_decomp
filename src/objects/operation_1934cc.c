/* Provisional address-based name; preserve retry states, allocation arithmetic and cleanup order. */
#include "src/include/resource_lifecycle.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
#define free_buffer_at ((void (*)(void *))0x8c18de08)
#define free_at ((void (*)(ResourceLifecycle *))0x8c011ed8)
static inline void destroy_base(ResourceLifecycle *o){
    if(o){
        o->dispatch=(void *)0x8c272820;
        if(o->handle){
            close_at(o->handle);
            o->handle=0;
            o->field_c=0;
        }
        free_buffer_at(o->buffer);
    }
}
ResourceLifecycle *operation_1934cc(ResourceLifecycle *o,short release){
    if(o){
        o->dispatch=(void *)0x8c272814;
        free_buffer_at(o->extra);
        destroy_base(o);
        if(release>0)free_at(o);
    }
    return o;
}
