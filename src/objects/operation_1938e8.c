/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#include "src/include/resource_flag_state.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
static inline int has_flag(ResourceFlagState *o){
    return (o->flags&4)!=0;
}
static inline int has_error(ResourceFlagState *o){
    return (o->flags&1)!=0;
}
static inline void reset(ResourceFlagState *o){
    if(o->handle){
        close_at(o->handle);
        o->handle=0;
        o->field_c=0;
    }
}
void operation_1938e8(ResourceFlagState *o){
}
