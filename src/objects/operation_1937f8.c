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
#define open_at ((void *(*)(int,int))0x8c34d43c)
#define size_at ((int (*)(void *))0x8c34d9b8)
#define begin_at ((void (*)(void *,int,void *))0x8c34d6ae)
void operation_1937f8(ResourceFlagState *o){
    if(has_flag(o)==0){
        if(*(int *)0x8c4dc2f8==1)return;
        *(int *)0x8c4dc2f8=1;
        o->flags|=4;
    }
    {
        int argument=o->argument;
        if(o->ready==1){
            reset(o);
            o->handle=open_at(o->source,argument);
            if(o->handle)o->field_c=size_at(o->handle);
        }
    }
    if(o->handle){
        void **buffer=(void **)0x8c4dc2f4;
        int length=o->field_c;
        begin_at(o->handle,length,*buffer);
        o->state=2;
    }
}
