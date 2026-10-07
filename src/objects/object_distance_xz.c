#include "src/include/object_distance.h"

#define subtract_at ((void (*)(Vector3 *, Vector3 *))0x8c37f6f0)

float object_distance_xz(ObjectDistanceView *object, ObjectDistanceView *other, Vector3 *output) {
    float distance;
    if (other) {
        Vector3 difference;
        difference = other->position;
        subtract_at(&difference, &object->position);
        difference.y = 0.01f;
        distance = difference.x * difference.x + difference.z * difference.z;
        if (output) *output = difference;
    } else {
        distance = 100000000.0f;
    }
    return distance;
}
