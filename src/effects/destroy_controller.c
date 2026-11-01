#include "src/include/effect_controller.h"

#define TObject_dtor_8c03311c ((void (*)(EffectController *, int))0x8c03311c)
#define free_at ((void (*)(void *, void *))0x8c122774)

EffectController *TDuelEffectCtrl_dtor_8c24e714(EffectController *object, short release) {
    if (object) {
        object->dispatch = (void *)0x8c27e49c;
        TObject_dtor_8c03311c(object, 0);
        if (release > 0) free_at(*(void **)0x8c4d97e0, object);
    }
    return object;
}
