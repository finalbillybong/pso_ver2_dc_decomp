#include "src/include/calls.h"

int operation_45910(Object *o)
{
    int counter;
    if ((o->flags & 16)) {
        counter = --o->field_2d4;
        if (counter > 0) {
            o->flags &= ~0x3c;
            o->flags |= 16;
            if (!(counter % 45) && !(o->flags & 0x02000000)) {
                void *effect = effect_create_at(o->effect_position, 36, 0x50);
                if (effect) effect_bind_at(effect, (short)o->id);
                effect_emit_at(14, o->position, 0, 0);
            }
            return 1;
        }
        o->flags &= ~0x3c;
        o->flags_34c = o->flags & 0x3f;
        o->field_2cc = 0;
        o->field_2d0 = 0.0f;
        o->field_2d4 = 0;
    }
    return 0;
}
