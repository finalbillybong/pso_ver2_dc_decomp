#include "src/include/calls.h"

int operation_456a4(Object *o)
{
    int counter;
    unsigned int flags = o->flags;
    if ((flags & 0x4000) && o->id >= 0x1000) {
        counter = --o->field_2f8;
        if (counter <= 0) {
            o->field_2f0 = 0;
            o->field_2f4 = 0.0f;
            o->field_2f8 = 0;
            o->flags &= ~0x4000;
        }
        return 1;
    }
    if (flags & 2) {
        int *counter_slot = &o->field_2c8;
        counter = --*counter_slot;
        if (o->id < 0x1000) {
            if (counter <= 0) {
                if (!(o->flags & 0x02000000)) {
                    void *effect = effect_create_at(o->effect_position, 38, 0x50);
                    if (effect) effect_bind_at(effect, (short)o->id);
                    effect_emit_at(12, o->position, 0, 0);
                }
                o->field_2c8 = 45;
            }
            return 1;
        }
        if (counter > 0) {
            o->flags &= ~3;
            o->flags |= 2;
            if (!(counter % 45) && !(o->flags & 0x02000000)) {
                void *effect = effect_create_at(o->effect_position, 38, 0x50);
                if (effect) effect_bind_at(effect, (short)o->id);
                effect_emit_at(12, o->position, 0, 0);
            }
            return 1;
        }
        o->flags &= ~3;
        o->flags_34c = o->flags & 0x3f;
        o->value_1ae += (short)(o->base_1a6 * -o->field_2c4);
        o->field_2c0 = 0;
        o->field_2c4 = 0.0f;
        o->field_2c8 = 0;
    }
    return 0;
}
