/* Provisional address-based name; preserve observed flag-table behavior. */
#include "src/include/flag_object.h"
#define destroy_at ((void (*)(FlagObject *,int))0x8c03311c)
#define release_at ((void (*)(void *,void *))0x8c122774)
FlagObject *operation_03d174(FlagObject *object,short release){
    if(object){
        object->dispatch=(void *)0x8c261b80;
        destroy_at(object,0);
        if(release>0)release_at(*(void **)0x8c4d97e0,object);
    }
    return object;
}
