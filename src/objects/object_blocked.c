/* The meaning of bit 25 is inferred only from its use as an operation guard. */
#include "src/include/object.h"

unsigned int object_blocked(Object *object)
{
    return object->flags & 0x02000000;
}
