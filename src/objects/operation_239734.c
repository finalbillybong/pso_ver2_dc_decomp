/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
void operation_239734(ResourceOwner *o){
    unsigned int *counter=&o->counter;
    (*counter)++;
    if(!(o->counter&3) && o->speed<0x3333)o->speed+=182;
}
