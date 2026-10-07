#include "src/include/calls.h"

int operation_45a8c(Object *o)
{
    int counter;
    if ((o->flags & 4)) {
        counter = --o->field_2d4;
        if (counter > 0) {
            o->flags &= ~0x3c;
            o->flags |= 4;
            if (!(counter % 45) && !(o->flags & 0x02000000)) {
                void *effect = effect_create_at(o->effect_position, 33, 0x50);
                if (effect) effect_bind_at(effect, (short)o->id);
                effect_emit_at(16, o->position, 0, 0);
            }
            return 1;
        }
        o->flags &= ~0x3c;
        o->flags_34c = o->flags & 0x3f;
        if (o->id >= 0x1000)
            o->value_1ae += (short)(o->base_1a6 * -o->field_2d0);
        o->field_2cc = 0;
        o->field_2d0 = 0.0f;
        o->field_2d4 = 0;
    }
    return 0;
}
