/* Provisional address-based name; preserve retry states, allocation arithmetic and cleanup order. */
#include "src/include/resource_lifecycle.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
void operation_19344c(ResourceLifecycle *o){
    if(o->handle){
        close_at(o->handle);
        o->handle=0;
        o->field_c=0;
    }
}
