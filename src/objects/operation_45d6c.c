#include "src/include/calls.h"

int operation_45d6c(Object *o)
{
    int counter;
    if (o->field_2ec > 0) {
        counter = --o->field_2ec;
        if (counter > 0) {
            if (!(counter % 45) && !(o->flags & 0x02000000)) {
                void *extra;
                switch (o->field_2e4) {
                case 10: {
                    void *effect = effect_create_at(o->effect_position, 508, 0x50);
                    if (effect) effect_bind_at(effect, (short)o->id);
                    effect_emit_at(131116, o->position, 0, 0);
                    break;
                }
                case 12: {
                    void *effect = effect_create_at(o->effect_position, 510, 0x50);
                    if (effect) effect_bind_at(effect, (short)o->id);
                    effect_emit_at(131117, o->position, 0, 0);
                    break;
                }
                }
                extra = allocate_block_at(*(void **)0x8c4d97e0, 0x68);
                if (extra) effect_extra_at(extra, (void *)0x8c284ae0, (void *)0x8c284af0,
                                           45, o, *(int *)0x8c44bea0, 0.1f);
            }
            return 1;
        }
        o->value_1b0 += (short)(o->base_1a8 * -o->field_2e8);
        o->field_2e4 = 0;
        o->field_2e8 = 0.0f;
        o->field_2ec = 0;
    } else {
        int reset = o->mode_308 == 2;
        if (reset) {
            o->value_1b0 += (short)(o->base_1a8 * -o->field_2e8);
            o->field_2e4 = 0;
            o->field_2e8 = 0.0f;
            o->field_2ec = 0;
        }
    }
    return 0;
}
