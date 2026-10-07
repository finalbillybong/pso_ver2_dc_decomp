#include "src/include/object_state.h"

#define query_at ((VectorQueryResult *(*)(Vector3 *, void *, int))0x8c011308)

VectorQueryResult *query_object_height(ObjectStateView *object) {
    Vector3 point;
    VectorQueryResult *result;
    point.x = object->position.x;
    point.y = object->position.y + object->height_source->height;
    point.z = object->position.z;
    result = query_at(&point, &object->query_data_start, 21);
    if (!result) return 0;
    object->position.y = result->data->position.y;
    return result;
}
