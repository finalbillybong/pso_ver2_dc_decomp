/* Provisional address-based name; preserve observed field accesses and forwarded inputs. */
#include "src/include/state_query_views.h"
#define value_at ((short (*)(StateRecord *))0x8c1e9610)
int operation_021fcc(StateRecord *object){
    if(object->mask&0x1e000)return 0;
    object->flags|=0x10000;
    object->mode=16;
    object->value=value_at(object);
    object->state=0;
    object->saved_angle=object->angle;
    return 1;
}
