/* Inferred object layout; these functions test three independent flag bits. */
#include "src/include/object.h"

#include "src/include/calls.h"

unsigned int query_flag_8(Object *object)
{
    if (object_ready_at(object))
        return object->flags & 8;
    return 0;
}

unsigned int query_flag_16(Object *object)
{
    if (object_ready_at(object))
        return object->flags & 16;
    return 0;
}

unsigned int query_flag_32(Object *object)
{
    if (object_ready_at(object))
        return object->flags & 32;
    return 0;
}
