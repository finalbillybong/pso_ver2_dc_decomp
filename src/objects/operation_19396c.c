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
#define ready_at ((int (*)(void))0x8c03ed64)
#define buffer_at ((void *(*)(void *))0x8c03ed10)
#define copy_at ((int (*)(void *,void *))0x8c0787cc)
#define convert_at ((void (*)(void *,void *))0x8c3877a8)
#define finish_at ((void (*)(void *))0x8c03ed70)
void operation_19396c(ResourceFlagState *o){
    if(ready_at()==1){
        void *buffer=buffer_at(*(void **)0x8c31a328);
        if(*(void **)0x8c4dc2f4&&buffer)copy_at(*(void **)0x8c4dc2f4,buffer);
        convert_at(buffer,o->output);
        finish_at(*(void **)0x8c31a328);
        o->output=0;
        reset(o);
        o->flags|=2;
        if(has_flag(o)!=0){
            *(int *)0x8c4dc2f8=0;
            o->flags&=~4;
        }
        o->state=0;
    }
}
