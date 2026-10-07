/* Only the observed state field is named; this is not a recovered full class. */
#include "src/include/object.h"

int object_ready(Object *object)
{
    if (object->state == 0 || object->state == 15)
        return 0;
    return 1;
}
