#include "src/include/controller_child.h"
#include "src/include/child_render_data.h"

#define rectangle_at ((void (*)(ControllerChild *, ChildRenderData *, float *, float, float, float))0x8c24ec68)

void draw_child_secondary_layer(ControllerChild *object, ChildRenderData *data) {
    int ticks = object->ticks;
    if (ticks < 5 || ticks >= 20) {
    } else {
        int elapsed = ticks - 5;
        float scale = ((float)elapsed / 15.0f) * 0.5f + 1.0f;
        float alpha;
        if (ticks < 10) alpha = 0.5f;
        else alpha = 0.5f - ((float)(ticks - 10) / 10.0f) * 0.5f;
        rectangle_at(object, data, &object->x, object->rate, scale, alpha);
    }
}
