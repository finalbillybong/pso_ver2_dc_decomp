/* Provisional address-based name; preserve retry states, allocation arithmetic and cleanup order. */
#include "src/include/resource_lifecycle.h"
#define operator_new_8c18de4c ((void *(*)(unsigned int))0x8c18de4c)
#define ADXF_LoadPartitionNw_8c34cd84 ((int (*)(int,int,int,void *))0x8c34cd84)
#define ADXF_GetPtStat_8c34ce88 ((int (*)(int))0x8c34ce88)
#define loading_wait_frame_8c104c60 ((void (*)(void))0x8c104c60)
ResourceLifecycle *operation_19336c(ResourceLifecycle *o,int argument,int source,unsigned int count){
    int i;
    o->dispatch=(void *)0x8c272820;
    o->buffer=operator_new_8c18de4c((((count+1)<<1)+62)>>2<<2);
    o->source=source;
    o->handle=0;
    o->field_c=0;
    o->ready=0;
    if(ADXF_LoadPartitionNw_8c34cd84(source,argument,0,o->buffer)==0){
        for (i = 0; i != 3;){
            int status=ADXF_GetPtStat_8c34ce88(source);
            if(status==2){
                loading_wait_frame_8c104c60();
                continue;
            }
            if(status==3){
                o->ready=1;
                break;
            }
            if(!(i<3))break;
            ADXF_LoadPartitionNw_8c34cd84(source,argument,0,o->buffer);
            i++;
        }
    }
    return o;
}
