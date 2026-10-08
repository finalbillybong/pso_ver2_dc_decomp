/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#include "src/include/resource_state.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
#define open_at ((void *(*)(int,int))0x8c34d43c)
#define size_at ((int (*)(void *))0x8c34d9b8)
#define begin_at ((void (*)(void *,int,void *))0x8c34d6ae)
#define status_at ((int (*)(void *))0x8c34da3c)
#define wait_at ((void (*)(void))0x8c104c60)
#define base_at ((void (*)(ResourceContext *,int))0x8c0330e4)
#define result_at ((int (*)(ResourceContext *))0x8c104e00)
#define destroy_at ((void (*)(ResourceContext *,int))0x8c03311c)
static inline void reset(ResourceLifecycle *o){
    if(o->handle){
        close_at(o->handle);
        o->handle=0;
        o->field_c=0;
    }
}
int operation_193530(ResourceLifecycle *o,int argument){
    if(o->ready==1){
        int i;
        for (i = 0; i < 3; i++){
            int success=0;
            if(o->ready==1){
                reset(o);
                o->handle=open_at(o->source,argument);
                if(o->handle)o->field_c=size_at(o->handle);
            }
            if(!o->handle)return 0;
            if(o->field_c>0 && o->extra){
                int done=0;
                begin_at(o->handle,o->field_c,o->extra);
                while(!done){
                    switch(status_at(o->handle)){
                        case 1:
                        done=1;
                        break;
                        case 3:
                        done=1;
                        success=1;
                        break;
                        case 2:
                        wait_at();
                        break;
                        case 4:
                        done=1;
                        break;
                    }
                }
            }
            reset(o);
            if(success){
                ResourceContext context;
                int result;
                base_at(&context,0);
                context.dispatch=(void *)0x8c26586c;
                context.buffer=o->extra;
                context.size=o->extra_size;
                result=result_at(&context);
                context.dispatch=(void *)0x8c26586c;
                destroy_at(&context,0);
                return result;
            }
        }
    }
    return 0;
}
