#include "src/include/controller_child.h"
#include "src/include/child_render_data.h"

#define rectangle_at ((void (*)(ControllerChild *, ChildRenderData *, float *, float, float, float))0x8c24ec68)

void draw_child_primary_layer(ControllerChild *object, ChildRenderData *data) {
    int ticks = object->ticks;
    float scale, alpha;
    if (ticks < 5) {
        scale = 2.0f - (float)ticks / 5.0f;
        alpha = (float)(ticks / 5) * 0.5f + 0.5f;
    } else if (ticks < 25) {
        scale = 1.0f;
        alpha = 1.0f;
    } else {
        scale = 1.0f;
        alpha = 1.0f - (float)(ticks - 25) / 5.0f;
    }
    rectangle_at(object, data, &object->x, object->rate, scale, alpha);
}
