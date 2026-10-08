#include "src/include/controller_child.h"

#define parameters_at ((void (*)(ControllerChild *, float *, float *, int))0x8c24eea0)
#define begin_at ((void (*)(void))0x8c0c5310)
#define state_at ((void (*)(int))0x8c38aeb4)
#define texture_at ((void (*)(void *))0x8c3827d8)
#define color_at ((void (*)(int, unsigned int))0x8c38af22)
#define first_at ((void (*)(ControllerChild *, float))0x8c24ef28)
#define second_at ((void (*)(ControllerChild *, float))0x8c24ef68)
#define restore_at ((void (*)(void))0x8c38af12)
#define end_at ((void (*)(void))0x8c0c532c)

void draw_controller_child_b(ControllerChild *object) {
    float scale, alpha;
    unsigned int color;
    parameters_at(object, &scale, &alpha, object->ticks);
    color = (unsigned int)(alpha * 4278190080.0f) | 0xffffff;
    begin_at();
    state_at(1);
    texture_at(*(void **)0x8c46fe00);
    color_at(5, color);
    switch (object->value) {
    case 0: first_at(object, scale); break;
    case 1: second_at(object, scale); break;
    }
    restore_at();
    end_at();
}
