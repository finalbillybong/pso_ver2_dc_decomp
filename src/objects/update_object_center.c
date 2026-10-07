#include "src/include/object_state.h"

void update_object_center(ObjectStateView *object) {
    if (object->height_source) {
        object->center.x = object->position.x;
        object->center.y = object->position.y + object->height_source->height * 0.5f;
        object->center.z = object->position.z;
    } else {
        object->center = object->position;
    }
}
