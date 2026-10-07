#include "src/include/object_state.h"

extern VectorQueryResult *query_at(Vector3 *, void *, int);

VectorQueryResult *query_position_height(ObjectStateView *object, Vector3 *position) {
    Vector3 point;
    VectorQueryResult *result;
    point.x = position->x;
    point.y = position->y + object->height_source->height;
    point.z = position->z;
    result = query_at(&point, &object->query_data_start, 21);
    if (!result) return 0;
    object->position.y = result->data->position.y;
    return result;
}
