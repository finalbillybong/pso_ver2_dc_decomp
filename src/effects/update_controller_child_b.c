#include "src/include/controller_child.h"

void TDuelEffectString_update_8c24edb4(ControllerChild *object) {
    object->ticks++;
    if (!((float)object->ticks < 30.0f)) object->flags |= 1;
}
