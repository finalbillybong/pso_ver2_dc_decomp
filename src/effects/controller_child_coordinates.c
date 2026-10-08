#include "src/include/controller_child.h"
#include "src/include/child_render_data.h"

void controller_child_coordinates(ControllerChild *object,
                                  ChildRenderData *data, int index) {
    int offset = index << 3;
    unsigned long table = 0x8c2e1fe8;
    data->u0 = *(float *)(offset + table);
    {
        unsigned long second = table + 4;
        data->v0 = *(float *)(second + offset);
    }
    data->u1 = data->u0 + 64.0f;
    data->v1 = data->v0 + 85.0f;
    {
        float divisor = 256.0f;
        data->u0 /= divisor;
        data->v0 /= divisor;
        data->u1 /= divisor;
        data->v1 /= divisor;
    }
}
