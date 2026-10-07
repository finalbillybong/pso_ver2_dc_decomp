#include "src/include/effect_controller.h"

#define update_zero_at ((void (*)(EffectController *))0x8c24e79c)
#define update_one_at ((void (*)(EffectController *))0x8c24e95c)

void update_effect_controller(EffectController *object) {
    unsigned int mode = object->mode;
    switch (mode) {
    case 0: update_zero_at(object); break;
    case 1: update_one_at(object); break;
    }
    object->ticks++;
}
