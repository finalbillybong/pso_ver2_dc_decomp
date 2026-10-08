#include "src/include/controller_child.h"
#include "src/include/child_render_data.h"

extern void draw_at(ControllerChild *, ChildPart *, float);

void draw_controller_child_parts_b(ControllerChild *object, float scale) {
    int i;
    for (i = 0; i < 2; i++)
        draw_at(object, &((ChildPart *)0x8c2e2030)[i], scale);
}
