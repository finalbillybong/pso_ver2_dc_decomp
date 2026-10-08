/* Provisional address-based name; preserve observed field accesses and forwarded inputs. */
#include "src/include/state_query_views.h"
short operation_02c350(IndexObject *object){
    short value=object->index;
    if(value>=15)value=1;
    return value;
}
