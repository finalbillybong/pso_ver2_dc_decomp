#include "src/include/calls.h"

int operation_45b8c(Object *o)
{
    int counter;
    if (o->field_2e0 > 0) {
        counter = --o->field_2e0;
        if (counter > 0) {
            if (!(counter % 45) && !(o->flags & 0x02000000)) {
                void *extra;
                switch (o->field_2d8) {
                case 9: {
                    void *effect = effect_create_at(o->effect_position, 507, 0x50);
                    if (effect) effect_bind_at(effect, (short)o->id);
                    effect_emit_at(131114, o->position, 0, 0);
                    break;
                }
                case 11: {
                    void *effect = effect_create_at(o->effect_position, 509, 0x50);
                    if (effect) effect_bind_at(effect, (short)o->id);
                    effect_emit_at(131115, o->position, 0, 0);
                    break;
                }
                }
                extra = allocate_block_at(*(void **)0x8c4d97e0, 0x68);
                if (extra) effect_extra_at(extra, (void *)0x8c284ad0, (void *)0x8c284af0,
                                           45, o, *(int *)0x8c44bea0, 0.1f);
            }
            return 1;
        }
        o->value_1aa += (short)(-o->field_2dc * o->base_1a2);
        o->value_1ac += (short)(o->base_1a4 * -o->field_2dc);
        o->field_2d8 = 0;
        o->field_2dc = 0.0f;
        o->field_2e0 = 0;
    } else {
        int reset = o->mode_308 == 2;
        if (reset) {
            o->value_1aa += (short)(-o->field_2dc * o->base_1a2);
            o->value_1ac += (short)(o->base_1a4 * -o->field_2dc);
            o->field_2d8 = 0;
            o->field_2dc = 0.0f;
            o->field_2e0 = 0;
        }
    }
    return 0;
}
