/* Provisional address-based name; preserve observed field accesses and forwarded inputs. */
#include "src/include/state_query_views.h"
#define index_at ((short (*)(FlaggedObject *))0x8c02c350)
short operation_1e9610(FlaggedObject *object){
    int bank=0;
    short index;
    if(object->flags&0x100000)bank=1;
    index=index_at(object);
    return *(short *)(*(char **)(0x8c2e72d8+(bank<<2))+(index<<1));
}
