#include "src/include/calls.h"
/* Shared guards and six operations; gameplay meanings are not yet established. */

int object_action_0(void *object)
{
    if (!object_ready_at(object) || object_blocked_at(object))
        return 0;
    return operation_455ac_at(object);
}

int object_action_1(void *object)
{
    if (!object_ready_at(object) || object_blocked_at(object))
        return 0;
    return operation_456a4_at(object);
}

int object_action_2(void *object)
{
    if (!object_ready_at(object) || object_blocked_at(object))
        return 0;
    return operation_45844_at(object);
}

int object_action_3(void *object)
{
    if (!object_ready_at(object) || object_blocked_at(object))
        return 0;
    return operation_45910_at(object);
}

int object_action_4(void *object)
{
    if (!object_ready_at(object) || object_blocked_at(object))
        return 0;
    return operation_459d8_at(object);
}

int object_action_5(void *object)
{
    if (!object_ready_at(object) || object_blocked_at(object))
        return 0;
    return operation_45a8c_at(object);
}
