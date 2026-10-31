#include "src/include/controller_child.h"

#define TObject_dtor_8c03311c ((void (*)(ControllerChild *, int))0x8c03311c)
#define free_at ((void (*)(void *, void *))0x8c122774)

ControllerChild *destroy_controller_child_a(ControllerChild *object, short release) {
    if (object) {
        object->dispatch = (void *)0x8c27e4b8;
        TObject_dtor_8c03311c(object, 0);
        if (release > 0) free_at(*(void **)0x8c4d97e0, object);
    }
    return object;
}
