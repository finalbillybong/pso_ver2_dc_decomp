/* Provisional address-based name; preserve observed field accesses and call order. */
#include "src/include/resource_owner.h"
#define rotate_at ((void (*)(int,int))0x8c37dd28)
void operation_2397f8_8c250d90(ResourceOwner *o){
    if(*(int *)0x8c4689f0==3)rotate_at(0,o->angle);
}
