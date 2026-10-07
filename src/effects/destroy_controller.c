#include "src/include/effect_controller.h"

#define destroy_at ((void (*)(EffectController *, int))0x8c03311c)
#define free_at ((void (*)(void *, void *))0x8c122774)

EffectController *destroy_effect_controller(EffectController *object, short release) {
    if (object) {
        object->dispatch = (void *)0x8c27e49c;
        destroy_at(object, 0);
        if (release > 0) free_at(*(void **)0x8c4d97e0, object);
    }
    return object;
}
