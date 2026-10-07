#include "src/include/object_velocity.h"

#define add_at ((void (*)(Vector3 *, Vector3 *))0x8c3bdf60)
#define move_at ((int (*)(ObjectVelocityView *, Vector3 *, int))0x8c051ff4)

void apply_object_velocity(ObjectVelocityView *object) {
    Vector3 next;
    object->previous_position = object->position;
    next = object->center;
    add_at(&next, &object->velocity);
    if (move_at(object, &next, 0)) object->position = next;
}
