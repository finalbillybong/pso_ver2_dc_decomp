#include "src/include/object_movement.h"

#define move_at ((int (*)(ObjectMovementView *, Vector3 *, int))0x8c051ff4)

int move_and_capture_position(ObjectMovementView *object, Vector3 position) {
    if (move_at(object, &position, 0)) {
        object->captured_position = object->position;
        return 1;
    }
    return 0;
}
