/* Provisional address-based name; preserve observed flag-table behavior. */
#include "src/include/flag_object.h"
#define construct_at ((void (*)(FlagObject *,void *))0x8c0330e4)
FlagObject *operation_03cf18(FlagObject *object,void *parent){
    construct_at(object,parent);
    object->dispatch=(void *)0x8c261b80;
    object->tag=*(unsigned int *)0x8c2ef020;
    object->size=44;
    object->state=0;
    object->field24=0;
    object->field28=0;
    return object;
}
