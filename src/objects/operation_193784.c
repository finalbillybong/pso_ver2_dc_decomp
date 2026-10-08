/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#include "src/include/resource_state.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
#define free_buffer_at ((void (*)(void *))0x8c18de08)
#define free_at ((void (*)(FlagResource *))0x8c011ed8)
static inline int has_flag(FlagResource *o){
    return (o->flags&4)!=0;
}
static inline void destroy_base(FlagResource *o){
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
FlagResource *operation_193784(FlagResource *o,short release){
    if(o){
        o->dispatch=(void *)0x8c272804;
        if(has_flag(o)!=0)*(int *)0x8c4dc2f8=0;
        destroy_base(o);
        if(release>0)free_at(o);
    }
    return o;
}
