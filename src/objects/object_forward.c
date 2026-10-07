#include "src/include/calls.h"
/* Two operations with the same state predicate; names are provisional. */

int object_forward_0(void *object)
{
    if (object_ready_at(object))
        return operation_45b8c_at(object);
    return 0;
}

int object_forward_1(void *object)
{
    if (object_ready_at(object))
        return operation_45d6c_at(object);
    return 0;
}
