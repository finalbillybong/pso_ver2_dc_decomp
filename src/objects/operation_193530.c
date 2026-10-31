/* Provisional address-based name; preserve status transitions and cleanup ordering. */
#include "src/include/resource_state.h"
#define close_at ((void (*)(void *))0x8c34d4e8)
#define open_at ((void *(*)(int,int))0x8c34d43c)
#define ADXF_GetFsizeSct_8c34d9b8 ((int (*)(void *))0x8c34d9b8)
#define ADXF_ReadNw32_8c34d6ae ((void (*)(void *,int,void *))0x8c34d6ae)
#define ADXF_GetStat_8c34da3c ((int (*)(void *))0x8c34da3c)
#define loading_wait_frame_8c104c60 ((void (*)(void))0x8c104c60)
#define TObject_ctor_8c0330e4 ((void (*)(ResourceContext *,int))0x8c0330e4)
#define result_at ((int (*)(ResourceContext *))0x8c104e00)
#define TObject_dtor_8c03311c ((void (*)(ResourceContext *,int))0x8c03311c)
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
                if(o->handle)o->field_c=ADXF_GetFsizeSct_8c34d9b8(o->handle);
            }
            if(!o->handle)return 0;
            if(o->field_c>0 && o->extra){
                int done=0;
                ADXF_ReadNw32_8c34d6ae(o->handle,o->field_c,o->extra);
                while(!done){
                    switch(ADXF_GetStat_8c34da3c(o->handle)){
                        case 1:
                        done=1;
                        break;
                        case 3:
                        done=1;
                        success=1;
                        break;
                        case 2:
                        loading_wait_frame_8c104c60();
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
                TObject_ctor_8c0330e4(&context,0);
                context.dispatch=(void *)0x8c26586c;
                context.buffer=o->extra;
                context.size=o->extra_size;
                result=result_at(&context);
                context.dispatch=(void *)0x8c26586c;
                TObject_dtor_8c03311c(&context,0);
                return result;
            }
        }
    }
    return 0;
}
