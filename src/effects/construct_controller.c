#include "src/include/effect_controller.h"

#define construct_at ((void (*)(EffectController *, void *))0x8c0330e4)

EffectController *construct_effect_controller(EffectController *object,
                                               void *parent, unsigned char mode) {
    construct_at(object, parent);
    object->dispatch = (void *)0x8c27e49c;
    object->tag = *(unsigned int *)0x8c33f678;
    object->size = 40;
    object->mode = mode;
    object->ticks = 0;
    return object;
}
