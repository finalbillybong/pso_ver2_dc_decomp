/* Provisional address-based name; preserve output guards and intervening reloads. */
#include "src/include/resource_outputs.h"
#define owner (*(ResourceOutputOwner **)0x8c4dc2e0)
void operation_193300(int index,void **output){
    if(output){
        int offset=index<<4;
        char *base=(char *)owner->table+8;
        *output=*(void **)(base+offset);
    }
}
