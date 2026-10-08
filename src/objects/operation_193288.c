/* Provisional address-based name; preserve output guards and intervening reloads. */
#include "src/include/resource_outputs.h"
#define owner (*(ResourceOutputOwner **)0x8c4dc2e0)
void operation_193288(unsigned char index,void **mesh,void **matrix){
    if(mesh && matrix){
        int offset=index<<4;
        int table_offset=1068;
        char *base=(char *)(*(ResourceOutputTable **)((char *)owner+table_offset))+56;
        *mesh=*(void **)(base+offset);
        base=(char *)(*(ResourceOutputTable **)((char *)owner+table_offset))+60;
        *matrix=*(void **)(base+offset);
    }
}
