#include "src/include/object_state.h"

#define base_destroy_at ((void (*)(void *, int))0x8c01c500)
#define heap_release_at ((void (*)(void *, void *))0x8c122774)

ObjectStateView *destroy_object_state(ObjectStateView *object, short release) {
    if (object) {
        object->dispatch = (void *)0x8c261d18;
        base_destroy_at(object, 0);
        if (release > 0) heap_release_at(*(void **)0x8c4d97e0, object);
    }
    return object;
}
