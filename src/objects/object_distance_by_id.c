#include "src/include/object_distance.h"

#define lookup_at ((ObjectDistanceView *(*)(unsigned int))0x8c021ef8)
#define distance_at ((float (*)(ObjectDistanceView *, ObjectDistanceView *, Vector3 *))0x8c043ec0)

float object_distance_by_id(ObjectDistanceView *object, unsigned short id, Vector3 *output) {
    Vector3 difference;
    float distance = 100000000.0f;
    if (id < 4096) {
        ObjectDistanceView *other = lookup_at(id);
        if (other && !(other->flags & 0x800) && other->context == *(int *)0x8c44be04) {
            distance = distance_at(object, other, &difference);
            if (output) *output = difference;
        }
    }
    return distance;
}
