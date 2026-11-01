#include "src/include/effect_controller.h"

#define TObject_ctor_8c0330e4 ((void (*)(EffectController *, void *))0x8c0330e4)

EffectController *TDuelEffectCtrl_ctor_8c24e6d8(EffectController *object,
                                               void *parent, unsigned char mode) {
    TObject_ctor_8c0330e4(object, parent);
    object->dispatch = (void *)0x8c27e49c;
    object->tag = *(unsigned int *)0x8c33f678;
    object->size = 40;
    object->mode = mode;
    object->ticks = 0;
    return object;
}
