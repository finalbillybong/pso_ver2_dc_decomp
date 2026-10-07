#include "src/include/calls.h"

int operation_459d8(Object *o)
{
    int counter;
    if ((o->flags & 32)) {
        counter = --o->field_2d4;
        if (counter > 0) {
            o->flags &= ~0x3c;
            o->flags |= 32;
            if (!(counter % 45)) {
                effect_emit_at(15, o->position, 0, 0);
            }
            return 1;
        }
        o->flags &= ~0x3c;
        o->flags_34c = o->flags & 0x3f;
        o->value_1ae += (short)(o->base_1a6 * -o->field_2d0);
        o->field_2cc = 0;
        o->field_2d0 = 0.0f;
        o->field_2d4 = 0;
    }
    return 0;
}
