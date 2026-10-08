#include "src/include/controller_child.h"
#include "src/include/child_render_data.h"

extern void color_at(unsigned int);
#define draw_at ((void (*)(ChildRenderData *, float))0x8c38b09e)

void draw_child_rectangle(ControllerChild *object, ChildRenderData *data,
                          float *position, float rate, float scale, float alpha) {
    float half = scale * 0.5f;
    float width = half * 64.0f;
    float height;
    data->x0 = position[0] - width;
    height = half * 85.0f;
    data->y0 = position[1] - height;
    data->x1 = position[0] + width;
    data->y1 = position[1] + height;
    color_at((unsigned int)(alpha * 4278190080.0f) | 0xffffff);
    draw_at(data, rate);
}
