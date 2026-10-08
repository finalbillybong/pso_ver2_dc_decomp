/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
extern void adjust_at(int *,int);
void operation_23971c(ResourceOwner *o){
    adjust_at(&o->angle,o->speed);
}
