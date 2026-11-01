#include "src/include/controller_child.h"

void TDuelEffectNumber_update_8c24ea70(ControllerChild *object) {
    object->ticks++;
    if (!((float)object->ticks < 30.0f)) object->flags |= 1;
}
