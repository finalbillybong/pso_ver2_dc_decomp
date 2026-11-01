/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#include "src/include/resource_state.h"
#define operator_delete_8c18de08 ((void (*)(void *))0x8c18de08)
#define free_at ((void (*)(ResourceBuffer *))0x8c011ed8)
ResourceBuffer *operation_193704(ResourceBuffer *o,short release){
    if(o){
        operator_delete_8c18de08(o->buffer);
        if(release>0)free_at(o);
    }
    return o;
}
