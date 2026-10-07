#include "src/include/object_random.h"

#define type_at ((int (*)(ObjectRandomView *))0x8c01c25c)
#define global_random_at ((int (*)(void))0x8c12b944)
#define object_random_at ((unsigned int (*)(RandomState *))0x8c037e50)

float object_random_fraction(ObjectRandomView *object) {
    if (type_at(object) == 15) return (float)global_random_at() / 32768.0f;
    return (float)(object_random_at(&object->random) >> 16) / 65536.0f;
}
