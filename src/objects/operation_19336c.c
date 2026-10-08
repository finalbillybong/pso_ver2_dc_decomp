/* Provisional address-based name; preserve retry states, allocation arithmetic and cleanup order. */
#include "src/include/resource_lifecycle.h"
#define allocate_at ((void *(*)(unsigned int))0x8c18de4c)
#define start_at ((int (*)(int,int,int,void *))0x8c34cd84)
#define status_at ((int (*)(int))0x8c34ce88)
#define wait_at ((void (*)(void))0x8c104c60)
ResourceLifecycle *operation_19336c(ResourceLifecycle *o,int argument,int source,unsigned int count){
    int i;
    o->dispatch=(void *)0x8c272820;
    o->buffer=allocate_at((((count+1)<<1)+62)>>2<<2);
    o->source=source;
    o->handle=0;
    o->field_c=0;
    o->ready=0;
    if(start_at(source,argument,0,o->buffer)==0){
        for (i = 0; i != 3;){
            int status=status_at(source);
            if(status==2){
                wait_at();
                continue;
            }
            if(status==3){
                o->ready=1;
                break;
            }
            if(!(i<3))break;
            start_at(source,argument,0,o->buffer);
            i++;
        }
    }
    return o;
}
