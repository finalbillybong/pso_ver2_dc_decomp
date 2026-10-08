/* Provisional address-based name; preserve output guards and intervening reloads. */
#include "src/include/resource_outputs.h"
#define owner (*(ResourceOutputOwner **)0x8c4dc2e0)
void operation_1932c4(void **mesh,void **matrix,void **extra){
    if(mesh && matrix && extra){
        *mesh=owner->table->mesh;
        *matrix=owner->table->matrix;
        *extra=owner->extra->value;
    }
}
