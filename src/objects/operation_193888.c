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
#define status_at ((int (*)(void *))0x8c34da3c)
void operation_193888(ResourceFlagState *o){
    int status=status_at(o->handle);
    if(status==2)return;
    if(status==3)o->flags&=~1;
    else o->flags|=1;
    reset(o);
    if(has_error(o)!=0)o->state=1;
    else o->state=4;
}
