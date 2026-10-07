#include "src/include/controller_child.h"

void update_controller_child_a(ControllerChild *object) {
    object->ticks++;
    if (!((float)object->ticks < 30.0f)) object->flags |= 1;
}
