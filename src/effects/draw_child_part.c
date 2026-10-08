#include "src/include/controller_child.h"
#include "src/include/child_render_data.h"

#define draw_at ((void (*)(ChildRenderData *, float))0x8c38b09e)

void draw_child_part(ControllerChild *object, ChildPart *part, float scale) {
    ChildRenderData data;
    data.x0 = part->x * scale + object->x;
    data.y0 = part->y * scale + object->y;
    data.x1 = (part->x + part->width) * scale + object->x;
    data.y1 = (part->y + part->height) * scale + object->y;
    data.u0 = part->u;
    data.v0 = part->v;
    data.u1 = data.u0 + part->width;
    data.v1 = data.v0 + part->height;
    data.u0 /= 256.0f;
    data.v0 /= 256.0f;
    data.u1 /= 256.0f;
    data.v1 /= 256.0f;
    draw_at(&data, object->rate);
}
