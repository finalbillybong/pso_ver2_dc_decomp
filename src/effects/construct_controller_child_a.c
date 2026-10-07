#include "src/include/controller_child.h"

#define construct_at ((void (*)(ControllerChild *, void *))0x8c0330e4)

ControllerChild *construct_controller_child_a(ControllerChild *object,
                                               void *parent, float *position,
                                               int value) {
    construct_at(object, parent);
    object->dispatch = (void *)0x8c27e4b8;
    object->tag = *(unsigned int *)0x8c33f6b0;
    object->size = 52;
    object->x = position[0];
    object->y = position[1];
    object->rate = -1.0f / *(float *)0x8c4e2bb8;
    object->value = value;
    object->ticks = 0;
    return object;
}
